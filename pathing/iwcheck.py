"""Track the lowest non-zero byte in 0x03007700..0x03007E60 every frame (stack depth / IWRAM use)."""
import sys, os
from common import *
rom, frames, seq = sys.argv[1], int(sys.argv[2]), sys.argv[3] if len(sys.argv) > 3 else ""
kseq = [(int(t.split(":")[0]), keymask(t.split(":")[1]) if ":" in t else 0) for t in seq.split()]
s, folder = open_state("iw", rom=rom, state=os.environ.get("ST", str(STATE)))
def keys_at(fr):
    acc = 0
    for n, k in kseq:
        if fr < acc + n: return k
        acc += n
    return 0
lowest = 0x03007E60
for f in range(frames):
    s.run_frames(1, keys_at(f))
    m = s.read_memory(0x030077B4, 0x03007E60 - 0x030077B4)
    for j, b in enumerate(m):
        if b:
            if 0x030077B4 + j < lowest: lowest = 0x030077B4 + j; print("frame", f, "new lowest nonzero", hex(lowest))
            break
print("lowest nonzero byte above 0x030077B4:", hex(lowest))
s.__exit__(None, None, None)
