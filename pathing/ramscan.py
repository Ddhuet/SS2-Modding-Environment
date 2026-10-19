"""Load many .ss0 states, run a few frames, record EWRAM/IWRAM; report runs that are zero in all."""
import glob, sys
from common import *
states = sorted(glob.glob(str(ROOT / "translation/build/*.ss0")) + glob.glob(str(ROOT / "ROMs/saves/*.ss0")))
ew = None; iw = None; used = []
for st in states:
    try:
        s, folder = open_state("ram", state=st)
    except Exception as ex:
        print("skip", st, ex); continue
    for k in range(4):
        s.run_frames(30)
        e = s.read_memory(0x02000000, 0x40000); i = s.read_memory(0x03000000, 0x8000)
        ew = bytearray(a | b for a, b in zip(ew, e)) if ew else bytearray(e)
        iw = bytearray(a | b for a, b in zip(iw, i)) if iw else bytearray(i)
    W, H = s.read16(0x03003210+0x78), s.read16(0x03003210+0x7A)
    used.append((Path(st).name, W, H, hex(s.read32(0x03003210+0x68))))
    s.__exit__(None, None, None)
for u in used: print(u)
def runs(buf, base, minlen):
    out = []; start = None
    for j, b in enumerate(buf + b"\x01"):
        if b == 0 and start is None: start = j
        if b != 0 and start is not None:
            if j - start >= minlen: out.append((hex(base+start), j-start))
            start = None
    return out
print("EWRAM zero runs >= 2048:", runs(ew, 0x02000000, 2048))
print("IWRAM zero runs >= 256:", runs(iw, 0x03000000, 256))
open(ROOT/"pathing/ew_or.bin","wb").write(ew); open(ROOT/"pathing/iw_or.bin","wb").write(iw)
