"""Run flow prototype ~100 frames then single-step watching slot SLOT's fields. usage: watch2.py SLOT FRAMES OFF[,OFF..]"""
import sys, subprocess
from common import *
slot, frames = int(sys.argv[1]), int(sys.argv[2]); offs = [int(o, 16) for o in sys.argv[3].split(",")]
import os
s, folder = open_state("w2", state=os.environ["ST"]) if "ST" in os.environ else open_state("w2")
s.run_frames(frames)
e = s.read32(0x030057B4) + slot*0x454
def rd(o): return s.read32(e+o)
old = {o: rd(o) for o in offs}
hist = []
n = 0; found = 0
while n < 3_000_000 and found < 12:
    pc = s.register("pc") - 2; lr = s.register("lr")
    s.step(1); n += 1
    hist.append(pc)
    for o in offs:
        v = rd(o)
        if v != old[o]:
            print(f"f{s.frame} +{o:#x} {old[o]:#x}->{v:#x} pc={pc:#x} lr={lr:#x}"); old[o] = v; found += 1
print(n)
s.__exit__(None, None, None)
