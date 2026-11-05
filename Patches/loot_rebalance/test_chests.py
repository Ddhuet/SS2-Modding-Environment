#!/usr/bin/env python3
"""Break a container from a savestate after N idle frames and check loot_rebalance's chest rule.

    Tools/.venv/bin/python Patches/loot_rebalance/test_chests.py ROM STATE.ss0 FIRST LAST [--dungeon N] [--hard]

Like Tools/Scripts/loot_verify.py, but compares the record when the object break's `bl gen`
(0x0802810A, loot_rebalance's chest() on a modded ROM) returns, so the wooden chest rule (Healing
Drop -> Herb in dungeons 1-5 and 18, normal-mode wooden rows) is checked too.
--dungeon N overwrites the dungeon number 0x0300329C and --hard sets bit 9 of 0x03003518 after
loading (diagnostic RAM writes). Prints one line per break and a tally of the items.
"""
import argparse
import shutil
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
sys.path.insert(0, str(ROOT / "Tools"))
from smoke_state import open_state  # noqa: E402
import loot_model  # noqa: E402
from loot_model import RNG, generate, item_name  # noqa: E402
from loot_verify import record  # noqa: E402

GEN, RET = 0x0805CBA4, 0x0802810E
CHEST_AT = 0x0802810A
WOODEN = {2, 10, 16, 22, 27, 31, 35, 39, 44, 48}


def chest_post(rec, level, dungeon):
    if level in WOODEN and rec[:2] == [1, 1] and (dungeon <= 5 or dungeon == 18):
        rec[1] = 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("rom")
    ap.add_argument("state")
    ap.add_argument("first", type=int)
    ap.add_argument("last", type=int)
    ap.add_argument("--dungeon", type=int)
    ap.add_argument("--hard", action="store_true")
    a = ap.parse_args()
    loot_model.ROM = Path(a.rom).read_bytes()
    hooked = loot_model.u32(CHEST_AT) != 0xFD4BF034      # vanilla `bl 0x0805CBA4`
    ok = total = 0
    got = Counter()
    for d in range(a.first, a.last):
        s, folder = open_state(a.rom, a.state, f"loot-chests-{Path(a.state).stem}-{d}")
        try:
            if a.dungeon is not None:
                s.write16(0x0300329C, a.dungeon)
            if a.hard:
                s.write32(0x03003518, s.read32(0x03003518) | 1 << 9)
            s.run_frames(d)
            hit = None
            for presses in range(1, 21):
                s.run_frames(2, 1)
                r = s.run_until(GEN, frames=40)
                if r["hit"]:
                    hit = r["registers"]
                    break
            if not hit:
                print(d, "generator not reached")
                continue
            hard = bool(s.read32(0x03003518) >> 9 & 1)
            dungeon = s.read16(0x0300329C)
            pred = generate(hit["r1"], hit["r2"], RNG(s.read_memory(0x030013B8, 8)), hard, dungeon)
            if hooked:
                chest_post(pred, hit["r1"], dungeon)
            if not s.run_until(RET, frames=5)["hit"]:
                print(d, "object break did not return")
                continue
            act = record(s, hit["r0"])
            total += 1
            ok += pred == act
            got[item_name(act[0], act[1]) if act[0] in (1, 10) else f"type {act[0]}"] += 1
            print(d, f"dungeon {dungeon} level {hit['r1']} class {hit['r2']}", act, item_name(act[0], act[1]),
                  "OK" if pred == act else f"MISMATCH predicted {pred}", flush=True)
        finally:
            s.__exit__(None, None, None)
            shutil.rmtree(folder, ignore_errors=True)   # each run copies the 32 MiB ROM
    print(dict(got.most_common()))
    print(f"match {ok}/{total}")


if __name__ == "__main__":
    main()
