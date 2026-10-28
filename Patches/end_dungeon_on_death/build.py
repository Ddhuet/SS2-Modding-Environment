#!/usr/bin/env python3
"""Build Patches/Definitions/Custom/end_dungeon_on_death.json (CN baseline / English ROM).

    python3 Patches/end_dungeon_on_death/build.py

Dying still sends the player to the inn (vanilla death drop, wake-up scene and heal), but the Angel
who offers "Shall I take you back?" never appears, so the dungeon run is over. The Angel is task
kind 1 (0x08064154), started with spawner 0x08065DF0(player, 1) by the town-arrival scripts while
flag bit 14 of 0x03003518 ("died, revive pending") is set:
  0x08089888  inn wake-up after a death (mode 4 arrival), the path every non-arena death takes;
  0x08088F7C  town entry with bit 14 still set (other arrival modes / after declining the Angel).
Both `bl 0x08065DF0` become `bl forfeit`, which runs the cleanup the world map does when you leave
town for a destination (0x0800C2B2..C2BE), i.e. what forfeiting a dungeon does:
  0x0805DBC4  delete every ground item (the dropped gear and gold included);
  0x08058634  clear the per-area floor-state table world+0x1C8 (20 x 5 bytes);
  0x08058768  clear the progress records world+0x22C[10], +0x160/+0x164[10].
The next trip out of town goes through the world map, whose area_change(dest, 1) starts the
dungeon from scratch as in vanilla. Docs/mods/end_dungeon_on_death.md has the evidence.
"""
import hashlib, json, struct, sys
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
from base_roms import cn_baseline  # noqa: E402

CN_SHA = "45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989"
CODE = 0x080BC1C0             # zero gap after the warehouse stubs (0x080BC1B6..0x080BC2FF)
SPAWN = 0x08065DF0            # task spawner(player, kind); kind 1 = the Angel
HOOKS = [(0x08089888, "inn wake-up after death"), (0x08088F7C, "town entry while bit 14 is set")]
CLEANUP = [0x0805DBC4, 0x08058634, 0x08058768]


def bl(src, dst):
    off = dst - (src + 4)
    assert -0x400000 <= off < 0x400000 and not off & 1
    off &= 0x7FFFFF
    return struct.pack("<HH", 0xF000 | off >> 12, 0xF800 | (off >> 1) & 0x7FF)


def forfeit():
    """push {r4, lr}; bl each cleanup; pop {r4}; pop {r0}; bx r0. Clobbers r0-r3 like the spawner."""
    code = bytearray(struct.pack("<H", 0xB510))
    for f in CLEANUP:
        code += bl(CODE + len(code), f)
    code += struct.pack("<HHH", 0xBC10, 0xBC01, 0x4700)
    return bytes(code)


def main():
    cn = cn_baseline()
    assert hashlib.sha256(cn).hexdigest() == CN_SHA, "wrong CN baseline"
    code = forfeit()
    assert CODE + len(code) <= 0x080BC300, len(code)

    def before(addr, n):
        return cn[addr - 0x08000000:addr - 0x08000000 + n]

    writes = []
    for hook, what in HOOKS:
        pre = before(hook, 4)
        assert pre == bl(hook, SPAWN), (hex(hook), pre.hex())
        writes.append({"address": f"0x{hook:08X}", "offset": f"0x{hook - 0x08000000:08X}",
                       "before_hex": pre.hex(), "after_hex": bl(hook, CODE).hex(), "mode": "thumb",
                       "note": f"Town arrival ({what}): `bl 0x08065DF0` (start the Angel task, kind 1) becomes "
                               f"`bl {CODE:#010x}` (forfeit cleanup, no Angel)."})
    pre = before(CODE, len(code))
    assert not any(pre), "code area is not zero"
    writes.append({"address": f"0x{CODE:08X}", "offset": f"0x{CODE - 0x08000000:08X}",
                   "before_hex": pre.hex(), "after_hex": code.hex(), "mode": "thumb",
                   "note": f"Allocation {CODE:#010x}..{CODE + len(code) - 1:#010x} ({len(code)} B, was zero; owner "
                           "end_dungeon_on_death): forfeit() calls 0x0805DBC4 (delete all ground items), "
                           "0x08058634 and 0x08058768 (clear dungeon progress), as the world map does on departure."})

    out = ROOT / "Patches/Definitions/Custom/end_dungeon_on_death.json"
    old = json.loads(out.read_text()) if out.exists() else {}
    d = {
        "schema_version": 1,
        "id": "end_dungeon_on_death",
        "name": "Dying ends the dungeon run (no Angel to take you back)",
        "stage": old.get("stage", "static_candidate"),
        "profile_id": "ss2-cn-baseline",
        "baseline": {"filename": "SS2_SC_bug_fixed.GBA", "size": 33554432,
                     "md5": "35eb6567d94f855480c5d7ba2dff4389", "sha256": CN_SHA, "crc32": "AFCFC96D"},
        "source_provenance": {"kind": "new", "source": "Patches/end_dungeon_on_death/build.py",
                              "notes": "Docs/mods/end_dungeon_on_death.md"},
        "allocations": [{"range": f"0x{CODE:08X}..0x{CODE + 0x1F:08X}", "fill": "zero",
                         "what": f"code ({len(code)} B used)"}],
        "evidence": old.get("evidence", {
            "status": "static_verified",
            "semantics": "After a death the player wakes in the inn as usual, but the Angel never appears, ground "
                         "items (the dropped gear and gold) are deleted and the dungeon's progress is cleared, as "
                         "when forfeiting from the world map.",
            "static_audit": "Docs/mods/end_dungeon_on_death.md",
            "user_acceptance": "not_run",
            "runtime": "not_run"}),
        "writes": writes,
    }
    out.write_text(json.dumps(d, indent=2) + "\n")
    print(out, f"code {len(code)} B")


if __name__ == "__main__":
    main()
