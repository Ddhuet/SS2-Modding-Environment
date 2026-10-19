"""Step one game frame and build a call tree. usage: calltrace.py [skip_frames] [maxsteps] [keys]"""
import sys
from common import *
skip = int(sys.argv[1]) if len(sys.argv) > 1 else 1
maxsteps = int(sys.argv[2]) if len(sys.argv) > 2 else 400000
s, folder = open_state("ct")
s.run_frames(skip)
f0 = s.frame
calls = []   # (step, depth, target, callsite)
stack = []
def tpc():
    return s.register("pc") - (2 if s.register("cpsr") & 0x20 else 4)
prev_pc = tpc(); prev_lr = s.register("lr")
n = 0
while n < maxsteps:
    s.step(1); n += 1
    pc = tpc(); lr = s.register("lr")
    if lr != prev_lr and (lr & ~1) in (prev_pc + 4, prev_pc + 2) and pc not in (prev_pc + 2, prev_pc+4):
        calls.append((n, len(stack), pc, prev_pc))
        stack.append(lr & ~1)
    elif stack and pc == stack[-1]:
        stack.pop()
    elif stack and pc in stack:
        while stack and stack[-1] != pc: stack.pop()
        stack.pop()
    prev_pc, prev_lr = pc, lr
out = folder / "calls.txt"
with open(out, "w") as f:
    for st, d, t, c in calls:
        f.write(f"{st:7d} {'  '*d}{t:08X} (from {c:08X})\n")
print(out, n, "steps", len(calls), "calls")
s.__exit__(None, None, None)
