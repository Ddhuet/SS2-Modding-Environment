from common import *
s, folder = open_state("args")
s.run_frames(1)
seen = {}
for i in range(300):
    r = s.run_until(0x0800AC18, instructions=2_000_000)
    if not r["hit"]: break
    lr = s.register("lr")
    key = (hex(lr), s.register("r0"), hex(s.register("r3")))
    seen[key] = seen.get(key, 0) + 1
    s.step(1)
for k, v in sorted(seen.items()): print(k, v)
s.__exit__(None, None, None)
