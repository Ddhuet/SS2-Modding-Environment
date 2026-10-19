"""Run a ROM from the pathing savestate, log enemy tracks and pathing state.
usage: run_mod.py ROM TAG FRAMES [KEYSEQ]   env MAGIC=1 writes the control-block magic (diagnostic)
KEYSEQ tokens: frames[:KEYS]"""
import sys, os, json
from common import *
rom, tag, frames = sys.argv[1], sys.argv[2], int(sys.argv[3])
kseq = [(int(t.split(":")[0]), keymask(t.split(":")[1]) if ":" in t else 0) for t in (sys.argv[4] if len(sys.argv) > 4 else "").split()]
st = os.environ.get("ST", str(STATE))
s, folder = open_state(tag, rom=rom, state=st)
diag = []
free0 = pf_region_free(s)
if os.environ.get("MAGIC"):
    poke_magic(s); diag.append(f"diagnostic: wrote PF magic + zeroed control block at {PF_LO:#x}")
def keys_at(fr):
    acc = 0
    for n, k in kseq:
        if fr < acc + n: return k
        acc += n
    return 0
log = []; pfl = []
for f in range(frames):
    s.run_frames(1, keys_at(f))
    if f % 6 == 0:
        log.append([(round(e["x"]), round(e["y"]), e["hp"]) for e in pool(s)] + [(s32(s.read32(0x03003D80+0x94))>>8, s32(s.read32(0x03003D80+0x98))>>8)])
        pfl.append({"f": f, **pf_state(s), "mask": s.read32(0x030057BC),
                    "plhp": s.read16(0x03003D80+0xCC)})
    if f % 60 == 59: s.screenshot(f"screenshots/{f+1:05d}.png")
(folder/"track.json").write_text(json.dumps(log)); (folder/"pf.json").write_text(json.dumps(pfl))
M = 0x03003210; W, H = s.read16(M+0x78), s.read16(M+0x7A)
open(folder/"grid.bin","wb").write(s.read_memory(s.read32(M+0x68), W*H*2))
free1 = pf_region_free(s)
hr = heap_report(s); diag.append(f"heap walk ok/adopted/blocks: {hr}"); print("heap walk ok, adopted, blocks:", hr, "magic:", pf_state(s)["magic"])
diag.append(f"pf region free at start={free0} end={free1}")
(folder/"diag.txt").write_text("\n".join(diag))
print("pf region free start/end:", free0, free1)
print(folder)
print("final", log[-1])
s.__exit__(None, None, None)
