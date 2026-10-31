#!/usr/bin/env python3
"""Check loot_model.py against the game: break a container from a savestate after N idle frames.

    Tools/.venv/bin/python Tools/Scripts/loot_verify.py STATE.ss0 FIRST LAST [--rom ROM]

For each delay in FIRST..LAST-1: load the state on the English ROM, wait `delay` frames, tap A
until the generator 0x0805CBA4 is entered, read (level, class) from r1/r2 and the RNG state
0x030013B8, predict the item with loot_model.generate(), let the game finish, compare the
16-byte record. Prints one line per break and a match count. Runs go to Build/runs/.
"""
import argparse
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
sys.path.insert(0, str(ROOT / "Tools"))
from smoke_state import open_state  # noqa: E402
from loot_model import RNG, generate, item_name  # noqa: E402

GEN = 0x0805CBA4


def record(s, out):
    m = s.read_memory(out, 16)
    t, code = struct.unpack_from("<HH", m, 0)
    if t == 10:
        return [t, code, struct.unpack_from("<I", m, 4)[0], 0, 0, 0]
    if t == 9:
        return [t, code, struct.unpack_from("<H", m, 4)[0], 0, 0, 0]
    return [t, code, struct.unpack_from("<H", m, 4)[0], m[6], m[7], m[8]]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("state")
    ap.add_argument("first", type=int)
    ap.add_argument("last", type=int)
    ap.add_argument("--rom", default=str(ROOT / "Build/en.gba"))
    a = ap.parse_args()
    ok = total = 0
    for d in range(a.first, a.last):
        s, _ = open_state(a.rom, a.state, f"loot-verify-{Path(a.state).stem}-{d}")
        try:
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
            state = s.read_memory(0x030013B8, 8)
            hard = bool(s.read32(0x03003518) >> 9 & 1)
            pred = generate(hit["r1"], hit["r2"], RNG(state), hard, s.read16(0x0300329C))
            s.run_until(hit["lr"] & ~1, frames=5)
            act = record(s, hit["r0"])
            total += 1
            ok += pred == act
            print(d, f"level {hit['r1']} class {hit['r2']} presses {presses}", act,
                  item_name(act[0], act[1]), "OK" if pred == act else f"MISMATCH predicted {pred}", flush=True)
        finally:
            s.__exit__(None, None, None)
    print(f"match {ok}/{total}")


if __name__ == "__main__":
    main()
