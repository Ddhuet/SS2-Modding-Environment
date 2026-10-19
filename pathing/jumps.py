"""Record non-sequential PC transitions inside [LO,HI) until ADDR's word changes. env ST. usage: jumps.py LO HI WATCH"""
import sys, os
from common import *
lo, hi, wa = int(sys.argv[1], 16), int(sys.argv[2], 16), int(sys.argv[3], 16)
s, folder = open_state("jmp", state=os.environ["ST"])
old = s.read32(wa); prev = None; trail = []
n = 0
while n < 3_000_000:
    pc = s.register("pc") - 2
    if prev is not None and lo <= pc < hi and lo <= prev < hi and pc != prev + 2 and pc != prev + 4:
        trail.append((s.frame, prev, pc))
    prev = pc
    s.step(1); n += 1
    if s.read32(wa) != old: break
for f, a, b in trail[-60:]: print(f, hex(a), "->", hex(b))
s.__exit__(None, None, None)
