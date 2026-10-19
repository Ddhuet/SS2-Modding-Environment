"""Per-frame d-pad (+4) and facing (+8) of one slot. usage: dirlog.py ROM SLOT FRAMES  env MAGIC, ST"""
import sys, os
from common import *
rom, slot, frames = sys.argv[1], int(sys.argv[2]), int(sys.argv[3])
s, folder = open_state("dir", rom=rom, state=os.environ.get("ST", str(STATE)))
if os.environ.get("MAGIC"): poke_magic(s)
e = s.read32(0x030057B4) + slot * 0x454
out = []; changes = 0; prev = None
for f in range(frames):
    s.run_frames(1)
    face = s.read16(e + 8)
    if face != prev: changes += 1; prev = face
    out.append(f"{f}:{s.read16(e+4):02x}/{face}@({s32(s.read32(e+0x14))>>8},{s32(s.read32(e+0x18))>>8})")
print(" ".join(out[int(os.environ.get('FROM', 0)):]))
print("facing changes:", changes)
s.__exit__(None, None, None)
