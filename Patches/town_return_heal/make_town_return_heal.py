#!/usr/bin/env python3
"""Build Patches/Definitions/Custom/town_return_heal.json (CN baseline / English ROM).

    Tools/.venv/bin/python Patches/town_return_heal/make_town_return_heal.py

Every scripted return to town goes through warp(area, entry) at 0x0805847C, which calls the map
loader 0x08026C0C(area, entry, 0). Callers: the 13 per-level boss teleporters warp(0,2), the
Angel Wing beam-out 0x08063xxx..0x08064130 warp(0,0)/(0,4)/stored, and a few level scripts
(arena exit included) warp(0,0). This retargets that one BL at 0x08058488 to a stub that, when
area == 0 (town), refills the local player's HP and SP exactly like the arena exit script at
0x0808FAF4 (actor +0xCC = +0x6A, +0xCA = +0x68), then tail-calls 0x08026C0C unchanged.
Docs/mods/town_return_heal.md has the evidence.
"""
import json, struct, subprocess, sys, tempfile
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
from make_english_patch import assemble  # noqa: E402

CN = ROOT / "ROMs/Shining_Soul_II_CN_Baseline.gba"
CN_SHA = "45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989"
HOOK, LOADER, LOCAL_INDEX, STUB = 0x08058488, 0x08026C0C, 0x080020F4, 0x080BB1F0


def bl(src, dst):
    off = dst - (src + 4)
    assert -0x400000 <= off < 0x400000 and not off & 1
    off &= 0x7FFFFF
    return struct.pack("<HH", 0xF000 | off >> 12, 0xF800 | (off >> 1) & 0x7FF)


def hw(b):
    return ", ".join(f"0x{v:04X}" for v in struct.unpack("<HH", b))


ASM = f"""
    .syntax unified
    .thumb
    .text
@ town_return_heal stub at {STUB:#010x}. Entry from 0x08058488 (replaces `bl 0x08026C0C`):
@ r0 = area (u16), r1 = entry (u16), r2 = 0, lr = 0x0805848D.
heal_hook:
    cmp     r0, #0
    bne     go                  @ not town: unchanged
    push    {{r0, r1, r2, lr}}
    .hword  {hw(bl(STUB + 6, LOCAL_INDEX))}   @ bl 0x080020F4: local player actor index
    movs    r1, #0x55
    lsls    r1, r1, #2          @ actor stride 0x154
    muls    r0, r1
    ldr     r1, =0x03003D80     @ actor table
    adds    r0, r0, r1
    adds    r0, #0x68
    ldrh    r1, [r0, #2]        @ +0x6A max HP
    ldrh    r2, [r0, #0]        @ +0x68 max SP (x10)
    adds    r0, #0x62
    strh    r2, [r0, #0]        @ +0xCA SP
    strh    r1, [r0, #2]        @ +0xCC HP
    pop     {{r0, r1, r2, r3}}
    mov     lr, r3
go:
    ldr     r3, ={LOADER | 1:#010x}
    bx      r3                  @ tail call map loader; returns to 0x0805848D
    .pool
"""


def main():
    cn = CN.read_bytes()
    import hashlib
    assert hashlib.sha256(cn).hexdigest() == CN_SHA, "wrong CN baseline"
    with tempfile.TemporaryDirectory() as tmp:
        src = Path(tmp) / "heal.s"
        src.write_text(ASM)
        stub = assemble(src, base=STUB)
    assert struct.unpack_from("<HH", stub, 6) == struct.unpack("<HH", bl(STUB + 6, LOCAL_INDEX))
    hook_before = cn[HOOK - 0x08000000:HOOK - 0x08000000 + 4]
    assert hook_before == bl(HOOK, LOADER), hook_before.hex()
    stub_before = cn[STUB - 0x08000000:STUB - 0x08000000 + len(stub)]
    assert not any(stub_before), "stub area is not zero"
    writes = [
        {"address": f"0x{HOOK:08X}", "offset": f"0x{HOOK - 0x08000000:08X}", "before_hex": hook_before.hex(),
         "after_hex": bl(HOOK, STUB).hex(), "mode": "thumb",
         "note": "warp() 0x0805847C: `bl 0x08026C0C` -> `bl 0x080BB1F0` (heal stub, then tail-calls 0x08026C0C)."},
        {"address": f"0x{STUB:08X}", "offset": f"0x{STUB - 0x08000000:08X}", "before_hex": stub_before.hex(),
         "after_hex": stub.hex(), "mode": "thumb",
         "note": f"Allocation {STUB:#010x}..{STUB + len(stub) - 1:#010x} ({len(stub)} B, was zero; owner town_return_heal): "
                 "if area == 0, actor[0x080020F4()] +0xCC = +0x6A (HP) and +0xCA = +0x68 (SP), as the arena exit "
                 "0x0808FAF4 does; then `ldr r3,=0x08026C0D; bx r3`."},
    ]
    out = ROOT / "Patches/Definitions/Custom/town_return_heal.json"
    old = json.loads(out.read_text()) if out.exists() else {}
    d = {
        "schema_version": 1,
        "id": "town_return_heal",
        "name": "Full heal on return to town (boss teleporter, Angel Wing)",
        "stage": old.get("stage", "static_candidate"),
        "profile_id": "ss2-cn-baseline",
        "baseline": {"filename": "SS2_SC_bug_fixed.GBA", "size": 33554432,
                     "md5": "35eb6567d94f855480c5d7ba2dff4389", "sha256": CN_SHA, "crc32": "AFCFC96D"},
        "source_provenance": {"kind": "new", "source": "Patches/town_return_heal/make_town_return_heal.py",
                              "notes": "Docs/mods/town_return_heal.md"},
        "evidence": old.get("evidence", {
            "status": "static_verified",
            "semantics": "Any warp() to area 0 (town) refills the local player's HP and SP to max before the map loads.",
            "static_audit": "Docs/mods/town_return_heal.md",
            "user_acceptance": "not_run",
            "runtime": "not_run"}),
        "writes": writes,
    }
    out.write_text(json.dumps(d, indent=2) + "\n")
    print(out, len(stub), "byte stub")


if __name__ == "__main__":
    main()
