#!/usr/bin/env python3
"""Check the monster-potion re-pick (loot.s wrap()) on the real kill in Savestates/Easy_Kill.ss0.

    Tools/.venv/bin/python Patches/loot_rebalance/test_potions.py ROM [RUNS]

Diagnostic writes, labelled: per case the dungeon number 0x0300329C (and for "hard" bit 9 of
0x03003518) is overwritten after loading; at the drop-chance compare 0x0805CDD8 sb is set to 0 so
the generic drop always happens; right after gen returns inside wrap() (CODE+8) the record is
overwritten with consumable code 0-4 (cycled). Then the game runs wrap() to its end and the
resulting code is read. Each case prints the counts of (injected -> result).
"""
import shutil
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
sys.path.insert(0, str(ROOT / "Tools"))
from smoke_state import open_state  # noqa: E402

CODE = 0x080BC1E0
AFTER_GEN, DONE = CODE + 0x08, CODE + 0x5E
COMPARE = 0x0805CDD8
STATE = ROOT / "Savestates/Easy_Kill.ss0"
NAMES = ["Herb", "Drop", "Water", "Tear", "Hope"]
# case -> (dungeon, hard, allowed HP codes, allowed SP codes)
CASES = {f"dungeon {d}": (d, False, {0}, {3}) for d in (1, 2, 3, 4, 5, 18)}
CASES.update({f"dungeon {d}": (d, False, {0, 1}, {3}) for d in (6, 7, 17, 19)})
CASES["hard, dungeon 1"] = (1, True, {0, 1, 2}, {3, 4})
CASES["hard, dungeon 6"] = (6, True, {0, 1, 2}, {3, 4})


def one(rom, dungeon, hard, inject, d):
    s, folder = open_state(rom, str(STATE), f"loot-potions-{d}")
    try:
        s.write16(0x0300329C, dungeon)
        if hard:
            s.write32(0x03003518, s.read32(0x03003518) | 1 << 9)
        s.run_frames(d % 7)
        for _ in range(100):
            s.run_frames(3, 1)
            if s.run_until(COMPARE, frames=10)["hit"]:
                break
        else:
            return None
        s.write_register("r9", 0)   # sb
        if not s.run_until(AFTER_GEN, frames=5)["hit"]:
            return None
        out = s.register("r4")
        s.write16(out, 1)
        s.write16(out + 2, inject)
        if not s.run_until(DONE, frames=5)["hit"]:
            return None
        return s.read16(out), s.read16(out + 2)
    finally:
        s.__exit__(None, None, None)
        shutil.rmtree(folder, ignore_errors=True)


def main():
    rom = sys.argv[1]
    runs = int(sys.argv[2]) if len(sys.argv) > 2 else 60
    bad = 0
    for name, (dungeon, hard, hp, sp) in CASES.items():
        got = Counter()
        for i in range(runs):
            inject = i % 5
            r = one(rom, dungeon, hard, inject, i)
            if r is None:
                got["not reached"] += 1
                bad += 1
                continue
            t, code = r
            ok = t == 1 and code in (hp if inject < 3 else sp)
            bad += not ok
            got[f"{NAMES[inject]}->{NAMES[code] if code < 5 else code}{'' if ok else ' BAD'}"] += 1
        print(f"{name:16}", dict(sorted(got.items())), flush=True)
    print("all allowed" if not bad else f"{bad} BAD")


if __name__ == "__main__":
    main()
