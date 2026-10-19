from common import *
s, folder = open_state("dbg")
s.run_frames(1)
r = s.run_until(0x080139CA, instructions=2_000_000)
print(r["hit"])
for i in range(6):
    print(hex(s.register("pc")), hex(s.register("lr")))
    s.step(1)
s.__exit__(None, None, None)
