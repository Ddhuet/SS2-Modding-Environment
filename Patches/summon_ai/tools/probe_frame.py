import sys; sys.path.insert(0, "/home/david/Documents/SS2_Modding/Patches/summon_ai/tools")
from scommon import *
state = sys.argv[1]; n = int(sys.argv[2])
s, f = open_state("frame", state)
PH = {0x08071F32: "orbit", 0x08072592: "chase", 0x080726B4: "hit", 0x08072A02: "ret"}
for i in range(n):
    s.run_frames(1)
    st = summon_tasks(s)
    if not st: print(i, "no summon"); continue
    t, _, lr, sp = st[0]
    F = sp + 0x30
    # registers r8..r10 pushed by yield: push {r0-r7,lr} then {r8,r9,r10} -> at sp: r8, r9, r10, then r0..r7, lr
    r8, r9, r10 = s.read32(sp), s.read32(sp + 4), s.read32(sp + 8)
    x = s32(s.read32(F + 0x70)) / 256; y = s32(r10) / 256
    p = 0x03003D80; px, py = s32(s.read32(p + 0x94)) / 256, s32(s.read32(p + 0x98)) / 256
    if i % 5 == 0 or PH.get((lr & ~1) - 4) != "orbit":
        print(i, PH.get((lr & ~1) - 4), f"pet {x:.1f},{y:.1f} pl {px:.0f},{py:.0f} owner {s.read32(F+0x80)} local {s.read32(F+0x7c)} tgt {s.read32(F+0x60):#x} hits {s.read32(F+0x68)} cnt {s.read32(F+0x88)} r8 {r8:#x} hp {s.read16(p+0xCC)} desc {s.read32(F+0x4c):#x}")
