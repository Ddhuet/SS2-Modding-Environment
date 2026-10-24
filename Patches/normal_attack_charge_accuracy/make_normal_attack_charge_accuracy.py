#!/usr/bin/env python3
"""Build Patches/Definitions/Custom/normal_attack_charge_accuracy.json (CN baseline / English ROM).

    Tools/.venv/bin/python Patches/normal_attack_charge_accuracy/make_normal_attack_charge_accuracy.py

The player's physical hit roll is threshold = floor(125*(A+10)/(A+D+20)), hit if rand%100 <= it
(inline in melee 0x0801FC14, shared 0x080222B4 for projectiles). A is the attacker's DEX
(actor +0x42) for a normal attack and 3*DEX for a charge attack. Weapon skill level is not
an input. It only unlocks the charge. This makes normal attacks use 3*DEX too, at the four
sites where the game picks A:

  melee  0x0801FC14: actor+0x26 == 2 (tap) -> A=DEX at 0x0801FCF2; == 5 (charge) -> 3*DEX
  bow    0x08075FEC: [sp+0x204] == 0 -> beq to A=DEX; else 3*DEX
  spear  0x08076A16: [sp+0x214] == 0 -> beq to A=DEX; else 3*DEX
  knife  0x08077438: [sp+0x20C] == 0 -> beq to A=DEX; else 3*DEX

Projectile sites: NOP the beq so the 3*DEX branch always runs (flag registers are untouched,
later uses re-load the flag). Melee: rewrite the 10-byte A=DEX block in place, using the
2-byte alignment pad at 0x0801FCFE (pool starts 0x0801FD00) for the relocated `b`.
Docs/mods/normal_attack_charge_accuracy.md has the evidence.
"""
import hashlib, json, sys
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
from make_english_patch import assemble  # noqa: E402

CN = ROOT / "ROMs/Shining_Soul_II_CN_Baseline.gba"
CN_SHA = "45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989"
OUT = ROOT / "Patches/Definitions/Custom/normal_attack_charge_accuracy.json"
MELEE, MELEE_JOIN = 0x0801FCF2, 0x080200F0


def b_short(src, dst):
    off = dst - (src + 4)
    assert -0x800 <= off < 0x800 and not off & 1
    return 0xE000 | (off >> 1) & 0x7FF

MELEE_ASM = f"""
    .syntax unified
    .thumb
    .text
@ in place at {MELEE:#010x}; was: mov r0,r8; adds r0,#0x42; movs r4,#0; ldrsh r3,[r0,r4];
@ str r3,[sp,#0x20]; b {MELEE_JOIN:#x}; .hword 0 (pad). r0/r3/r4 are dead at the join
@ (0x080200F0 reloads r0, 0x080200F6 r3, 0x080200FC r4) as in the original.
    mov   r0, r8
    movs  r4, #0x42
    ldrsh r3, [r0, r4]
    lsls  r0, r3, #1
    adds  r3, r3, r0            @ A = 3*DEX, as the charge path 0x0801FD0C
    str   r3, [sp, #0x20]
    .hword {b_short(MELEE + 12, MELEE_JOIN):#06x}   @ b {MELEE_JOIN:#x}
"""


def main():
    rom = CN.read_bytes()
    assert hashlib.sha256(rom).hexdigest() == CN_SHA, "wrong CN baseline"
    asm = ROOT / "Patches/normal_attack_charge_accuracy/normal_attack_charge_accuracy_melee.s"
    asm.write_text(MELEE_ASM)
    melee = assemble(asm, base=MELEE, code_end=14)
    assert len(melee) == 14, melee.hex()
    writes = [(MELEE, melee, "Melee normal attack (actor+0x26 == 2): A = 3*DEX instead of DEX. "
                             "Uses the zero pad 0x0801FCFE for the `b 0x080200F0`.")]
    for addr, what in [(0x08075FF0, "bow ([sp+0x204] flag)"), (0x08076A1A, "spear ([sp+0x214] flag)"),
                       (0x0807743C, "knife ([sp+0x20C] flag)")]:
        writes.append((addr, bytes.fromhex("c046"),
                       f"{what}: NOP the `beq` to the A=DEX branch, so normal shots also take A = 3*DEX."))
    out = []
    for addr, after, note in writes:
        off = addr - 0x08000000
        before = rom[off:off + len(after)]
        out.append({"address": f"0x{addr:08X}", "offset": f"0x{off:08X}", "before_hex": before.hex(),
                    "after_hex": after.hex(), "mode": "thumb", "note": note})
    assert out[0]["before_hex"] == "404642300024035f0893f8e10000"
    assert all(w["before_hex"] in ("10d0", "0dd0") for w in out[1:])
    old = json.loads(OUT.read_text()) if OUT.exists() else {}
    d = {
        "schema_version": 1,
        "id": "normal_attack_charge_accuracy",
        "name": "Normal attacks use the charge attack's accuracy (3x DEX)",
        "stage": old.get("stage", "static_candidate"),
        "profile_id": "ss2-cn-baseline",
        "baseline": {"filename": "SS2_SC_bug_fixed.GBA", "size": 33554432,
                     "md5": "35eb6567d94f855480c5d7ba2dff4389", "sha256": CN_SHA, "crc32": "AFCFC96D"},
        "source_provenance": {"kind": "new", "source": "Patches/normal_attack_charge_accuracy/make_normal_attack_charge_accuracy.py",
                              "notes": "Docs/mods/normal_attack_charge_accuracy.md"},
        "evidence": old.get("evidence", {"status": "static_verified"}),
        "writes": out,
    }
    OUT.write_text(json.dumps(d, indent=2, ensure_ascii=False) + "\n")
    print(OUT)
    for w in out:
        print(w["address"], w["before_hex"], "->", w["after_hex"])


if __name__ == "__main__":
    main()
