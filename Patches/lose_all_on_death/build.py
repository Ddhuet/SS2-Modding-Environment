#!/usr/bin/env python3
"""Build Patches/Definitions/Custom/lose_all_on_death.json (CN baseline / English ROM).

    Tools/.venv/bin/python Patches/lose_all_on_death/build.py

On death the game normally drops ONE random armour piece (owner +0x108/+0x118/+0x128) as a
ground item (0x08066A74(x, y, record)) and half the bag's gold (0x0805DC70). This mod replaces
the random pick with delete_all(): every owner record +0x78..+0x2E7 is zeroed except the soul
(+0x138). That is the nine weapon records, the three armour slots, the ring and the 25-slot bag
(gold included). The bank (+0x2E8) is untouched. The vanilla tail still runs: slot-flag
refreshes 0x0805D748..898, then the gold drop, which finds no gold and spawns nothing.

Both copies of the death drop are hooked (0x0800F4B6 and 0x0800FB16). Docs/mods/lose_all_on_death.md
has the evidence.
"""
import hashlib, json, struct, sys, tempfile
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
from base_roms import cn_baseline  # noqa: E402
from make_english_patch import assemble  # noqa: E402

CN_SHA = "45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989"
CODE = 0x080BB3B4             # zero gap after counter_fix_slash (..0x080BB3FF)
# (hook, vanilla resume after the random-armour loop, bytes there)
HOOKS = [(0x0800F4B6, 0x0800F54E, "02e04a980328"), (0x0800FB16, 0x0800FBAE, "02e04a990329")]


def bl(src, dst):
    off = dst - (src + 4)
    assert -0x400000 <= off < 0x400000 and not off & 1
    off &= 0x7FFFFF
    return struct.pack("<HH", 0xF000 | off >> 12, 0xF800 | (off >> 1) & 0x7FF)


def b(src, dst):
    off = dst - (src + 4)
    assert -2048 <= off < 2048 and not off & 1
    return struct.pack("<H", 0xE000 | (off >> 1) & 0x7FF)


ASM = """
    .syntax unified
    .thumb
    .text
@ delete_all(): zero owner records +0x78..+0x2E7 except the soul at +0x138. Clobbers r0-r3.
delete_all:
    ldr     r0, =0x03003580
    ldr     r0, [r0]            @ owner
    movs    r1, r0
    adds    r1, #0x78           @ first record (weapons)
    movs    r2, #0xBA
    lsls    r2, r2, #2
    adds    r2, r2, r0          @ owner + 0x2E8 (bank starts here)
    movs    r3, #0x9C
    lsls    r3, r3, #1
    adds    r3, r3, r0          @ owner + 0x138 (soul)
1:  cmp     r1, r3
    beq     2f
    movs    r0, #0
    str     r0, [r1, #0]
    str     r0, [r1, #4]
    str     r0, [r1, #8]
    str     r0, [r1, #12]
2:  adds    r1, #16
    cmp     r1, r2
    blo     1b
    bx      lr
    .pool
"""


def main():
    cn = cn_baseline()
    assert hashlib.sha256(cn).hexdigest() == CN_SHA, "wrong CN baseline"
    with tempfile.TemporaryDirectory() as tmp:
        src = Path(tmp) / "a.s"
        src.write_text(ASM)
        code = assemble(src, base=CODE)
    assert CODE + len(code) <= 0x080BB400, len(code)

    def before(addr, n):
        return cn[addr - 0x08000000:addr - 0x08000000 + n]

    writes = []
    for hook, resume, exp in HOOKS:
        pre = before(hook, 6)
        assert pre.hex() == exp, (hex(hook), pre.hex())
        writes.append({"address": f"0x{hook:08X}", "offset": f"0x{hook - 0x08000000:08X}",
                       "before_hex": pre.hex(), "after_hex": (bl(hook, CODE) + b(hook + 4, resume)).hex(),
                       "mode": "thumb",
                       "note": f"Death drop: the `b` into the random-armour loop becomes `bl {CODE:#010x} (delete_all); "
                               f"b {resume:#010x}` (vanilla slot-flag refresh + gold drop, which then finds no gold)."})
    pre = before(CODE, len(code))
    assert not any(pre), "code area is not zero"
    writes.append({"address": f"0x{CODE:08X}", "offset": f"0x{CODE - 0x08000000:08X}",
                   "before_hex": pre.hex(), "after_hex": code.hex(), "mode": "thumb",
                   "note": f"Allocation {CODE:#010x}..{CODE + len(code) - 1:#010x} ({len(code)} B, was zero; owner "
                           "lose_all_on_death): delete_all() zeroes owner +0x78..+0x2E7 except the soul record +0x138."})

    out = ROOT / "Patches/Definitions/Custom/lose_all_on_death.json"
    old = json.loads(out.read_text()) if out.exists() else {}
    d = {
        "schema_version": 1,
        "id": "lose_all_on_death",
        "name": "Dying destroys everything you carry except your soul",
        "stage": old.get("stage", "static_candidate"),
        "profile_id": "ss2-cn-baseline",
        "baseline": {"filename": "SS2_SC_bug_fixed.GBA", "size": 33554432,
                     "md5": "35eb6567d94f855480c5d7ba2dff4389", "sha256": CN_SHA, "crc32": "AFCFC96D"},
        "source_provenance": {"kind": "new", "source": "Patches/lose_all_on_death/build.py",
                              "notes": "Docs/mods/lose_all_on_death.md"},
        "allocations": [{"range": f"0x{CODE:08X}..0x080BB3FF", "fill": "zero", "what": f"code ({len(code)} B used)"}],
        "evidence": old.get("evidence", {
            "status": "static_verified",
            "semantics": "On death every equipped item except the soul and every bag item (gold included) is deleted; "
                         "nothing is dropped. The bank is untouched.",
            "static_audit": "Docs/mods/lose_all_on_death.md",
            "user_acceptance": "not_run",
            "runtime": "not_run"}),
        "writes": writes,
    }
    out.write_text(json.dumps(d, indent=2) + "\n")
    print(out, f"code {len(code)} B")


if __name__ == "__main__":
    main()
