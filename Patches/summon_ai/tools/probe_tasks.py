import sys; sys.path.insert(0, "/home/david/Documents/SS2_Modding/Patches/summon_ai/tools")
from scommon import *
state = sys.argv[1]; n = int(sys.argv[2]) if len(sys.argv) > 2 else 300
s, f = open_state("probe", state)
print([ (hex(a), st, hex(lr), hex(sp)) for a, st, lr, sp in tasks(s)])
last = None
for i in range(n):
    s.run_frames(1)
    st = summon_tasks(s)
    k = [hex((lr & ~1) - 4) for _, _, lr, _ in st]
    if k != last: print(i, k, [hex(sp) for *_, sp in st]); last = k
