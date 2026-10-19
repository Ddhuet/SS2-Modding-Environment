"""Single-step watching absolute words. env ST=state. usage: watchabs.py ADDR[,ADDR] [maxsteps]"""
import sys, os
from common import *
addrs = [int(a, 16) for a in sys.argv[1].split(",")]
mx = int(sys.argv[2]) if len(sys.argv) > 2 else 3_000_000
s, folder = (open_state("wa", state=os.environ["ST"]) if "ST" in os.environ else open_state("wa"))
old = {a: s.read32(a) for a in addrs}
hist = []
n = found = 0
while n < mx and found < 10:
    pc = s.register("pc") - 2; lr = s.register("lr")
    s.step(1); n += 1; hist.append(pc)
    for a in addrs:
        v = s.read32(a)
        if v != old[a]:
            print(f"f{s.frame} {a:#x} {old[a]:#x}->{v:#x} pc={pc:#x} lr={lr:#x} sp={s.register('sp'):#x}")
            print("   stack:", " ".join(f"{s.read32(s.register('sp')+i*4):08x}" for i in range(24)))
            old[a] = v; found += 1
print(n)
s.__exit__(None, None, None)
