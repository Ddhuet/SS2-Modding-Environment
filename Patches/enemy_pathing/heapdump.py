"""Walk the EWRAM heap from a state. usage: heapdump.py [ROM]  env ST"""
import sys, os
from common import *
rom = sys.argv[1] if len(sys.argv) > 1 else ROM
s, folder = open_state("heap", rom=rom, state=os.environ.get("ST", str(STATE)))
s.run_frames(1)
print("ctl 0x03002410:", [hex(s.read32(0x03002410 + 4*i)) for i in range(6)])
print("0x02000000:", [hex(s.read32(0x02000000 + 4*i)) for i in range(8)])
a = 0x02000010; n = 0
while n < 4000:
    w0, nxt = s.read32(a), s.read32(a + 4)
    used = w0 >> 31
    size = nxt - a
    if size > 4096 or n < 5 or not used: print(f"{a:#x} next={nxt:#x} size={size:#x} {'USED' if used else 'free'} w0={w0:#x}")
    if nxt <= a or nxt > 0x02040000: print("end/odd", hex(nxt)); break
    a = nxt; n += 1
print(n, "blocks")
s.__exit__(None, None, None)
