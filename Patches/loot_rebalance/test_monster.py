#!/usr/bin/env python3
"""Kill the monster in Savestates/Easy_Kill.ss0 after N idle frames and check the drop roll.

    Tools/.venv/bin/python Patches/loot_rebalance/test_monster.py ROM FIRST LAST

For each delay: load the state, wait, tap A until 0x0805CCC8 (monster drop roll) is entered,
predict the result with loot_model.monster_drop() using the ROM's own lists and drop-chance bytes,
let the game finish and compare. Prints one line per kill and the drop count.
"""
import shutil
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
sys.path.insert(0, str(ROOT / "Tools"))
from smoke_state import open_state  # noqa: E402
import loot_model  # noqa: E402
from loot_model import RNG, monster_drop, item_name  # noqa: E402

ROLL = 0x0805CCC8
STATE = ROOT / "Savestates/Easy_Kill.ss0"


def main():
    rom, first, last = sys.argv[1], int(sys.argv[2]), int(sys.argv[3])
    loot_model.ROM = Path(rom).read_bytes()
    # `adds r0,#imm` bytes of the per-player-count bonus
    loot_model.MONSTER_BONUS = {n: loot_model.ROM[a - 0x08000000]
                                for n, a in zip((1, 2, 3, 4), (0x0805CDC0, 0x0805CDC6, 0x0805CDCC, 0x0805CDD2))}
    ok = total = drops = 0
    for d in range(first, last):
        s, folder = open_state(rom, str(STATE), f"loot-rebalance-mon-{Path(rom).stem}-{d}")
        try:
            s.run_frames(d)
            for _ in range(100):
                s.run_frames(3, 1)
                r = s.run_until(ROLL, frames=10)
                if r["hit"]:
                    break
            else:
                print(d, "roll not reached")
                continue
            R = r["registers"]
            m, out, lr = R["r0"], R["r1"], R["lr"] & ~1
            slots = [struct.unpack("<HHI", s.read_memory(m + 0x3A4 + 8 * i, 8)) for i in range(3)]
            mon = dict(slots=slots, level=s.read16(m + 0x78), paste=s.read16(m + 0x388),
                       gold_ok=s.read8(m + 0x39B) & 1)
            k = s.read16(m + 0x58)
            kd = s.read8(0x03003D80 + (0 if k > 3 else k) * 0x154 + 0x7C)
            hard = bool(s.read32(0x03003518) >> 9 & 1)
            pred = monster_drop(mon, RNG(s.read_memory(0x030013B8, 8)), kd, 1, hard)
            s.run_until(lr, frames=5)
            ret = s.register("r0")
            mm = s.read_memory(out, 16)
            t, c = struct.unpack_from("<HH", mm, 0)
            act = [t, c, struct.unpack_from("<I" if t == 10 else "<H", mm, 4)[0]] + \
                  ([mm[6], mm[7], mm[8]] if t not in (9, 10) else [0, 0, 0])
            good = bool(ret) == pred[0] and (act == pred[1] if pred[0] else True)
            total += 1
            ok += good
            drops += bool(ret)
            print(d, "level", mon["level"], "drop" if ret else "none", act if ret else "",
                  item_name(t, c) if ret else "", "OK" if good else f"MISMATCH predicted {pred}", flush=True)
        finally:
            s.__exit__(None, None, None)
            shutil.rmtree(folder, ignore_errors=True)   # each run copies the 32 MiB ROM
    print(f"match {ok}/{total}, drops {drops}")


if __name__ == "__main__":
    main()
