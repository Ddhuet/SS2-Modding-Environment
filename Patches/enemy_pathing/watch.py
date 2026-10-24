"""Single-step until a watched word changes; print PC history. usage: watch.py ADDR_EXPR [max_steps]"""
import time
from common import *
s, folder = open_state("watch")
s.run_frames(1)
base = s.read32(0x030057B4)
targets = {f"e{i}.x": base + i*0x454 + 0x14 for i in range(5)}
targets.update({f"e{i}.y": base + i*0x454 + 0x18 for i in range(5)})
old = {k: s.read32(a) for k, a in targets.items()}
hist = []
t = time.time(); n = 0
found = 0
while n < 600000 and found < 6:
    pc = s.register("pc"); lr = s.register("lr")
    s.step(1); n += 1
    hist.append((pc, lr))
    for k, a in targets.items():
        v = s.read32(a)
        if v != old[k]:
            print(f"step {n} {k} {old[k]:#x}->{v:#x} pc={pc:#x} lr={lr:#x}")
            print("  recent", [hex(h[0]) for h in hist[-12:]])
            old[k] = v; found += 1
print(n, "steps", time.time()-t, "s")
s.__exit__(None, None, None)
