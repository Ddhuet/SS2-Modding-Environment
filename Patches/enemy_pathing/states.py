"""Log enemy state (+0xC) transitions per slot. usage: states.py ROM FRAMES   env MAGIC=1"""
import sys, os
from common import *
rom, frames = sys.argv[1], int(sys.argv[2])
s, folder = open_state("st", rom=rom)
if os.environ.get("MAGIC"): poke_magic(s)
base = s.read32(0x030057B4)
prev = [None]*5; hist = [[] for _ in range(5)]
for f in range(frames):
    s.run_frames(1)
    for i in range(5):
        st = s.read16(base + i*0x454 + 0xC)
        if st != prev[i]: hist[i].append((f, st)); prev[i] = st
for i in range(5): print(i, hist[i][:40])
s.__exit__(None, None, None)
