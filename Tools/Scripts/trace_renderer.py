#!/usr/bin/env python3
"""List renderer calls (CN 0x08019F30) after replaying input from a user state (diagnostic).

    Tools/.venv/bin/python Tools/Scripts/trace_renderer.py ROM STATE.ss0 "PRE-SEQ" FRAMES

Prints, per call: frame, caller (lr), sp, string address, x, row, glyph count and the
terminating control code. Run after the pre-sequence, for FRAMES frames.
"""
import sys
sys.path.insert(0, __import__("os").path.dirname(__file__))
from smoke_state import open_state, replay

RENDER = 0x08019F30


def trace(s, frames, addr=RENDER):
    start = s.frame
    while s.frame - start < frames:
        r = s.run_until(addr, frames=frames - (s.frame - start))
        if r["stop"] == "frame_budget":
            break
        if not r["hit"]:
            continue
        g = r["registers"]
        raw = s.read_memory(g["r0"], 160)
        codes = [int.from_bytes(raw[i:i + 2], "little") for i in range(0, 160, 2)]
        n = next((i for i, c in enumerate(codes) if c & 0x8000), None)
        x = g["r1"] - (1 << 32) if g["r1"] & 0x80000000 else g["r1"]
        end = f"{codes[n]:#06x}" if n is not None else "none in 80"
        yield (f"f{s.frame} lr={g['lr']:#010x} sp={g['sp']:#010x} str={g['r0']:#010x} "
               f"x={x} row={g['r2']} glyphs={n} end={end}")
        s.step(1)


if __name__ == "__main__":
    rom, state, pre, frames = sys.argv[1:5]
    s, folder = open_state(rom, state, "trace")
    replay(s, pre)
    for line in trace(s, int(frames)):
        print(line)
