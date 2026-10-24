import sys, struct; sys.path.insert(0, "/home/david/Documents/SS2_Modding/Patches/summon_ai/tools")
from scommon import *
s, f = open_state("cam", "Open_Area_One_Enemy_Squirrel.ss0")
def snap():
    p = 0x03003D80
    px, py = s32(s.read32(p + 0x94)) >> 8, s32(s.read32(p + 0x98)) >> 8
    iw = s.read_memory(0x03000000, 0x8000); ew = s.read_memory(0x02000000, 0x40000)
    return px, py, iw, ew
res = []
for keys in ("", "RIGHT", "DOWN", "LEFT+UP"):
    s.run_frames(40, keymask(keys) if keys else 0); s.run_frames(2)
    res.append(snap())
for name, base, idx in (("iw", 0x03000000, 2), ("ew", 0x02000000, 3)):
    mem0 = res[0][idx]
    for off in range(0, len(mem0) - 2, 2):
        for w, fmt in ((2, "<h"), (4, "<i")):
            if off % w: continue
            okx = oky = True; dx = dy = None
            for px, py, *m in res:
                v = struct.unpack_from(fmt, m[idx - 2], off)[0]
                for sc in (1, 16, 256):
                    pass
            # test value = px - c (constant c) in px or 24.8 or 1/16 units
            for sc in (1, 16, 256):
                for axis in (0, 1):
                    cs = set()
                    for r in res:
                        v = struct.unpack_from(fmt, r[idx], off)[0]
                        cs.add(r[axis] * sc - v)
                    if len(cs) == 1 and len({r[axis] for r in res}) > 1:
                        c = cs.pop()
                        if abs(c) < 300 * sc and c != 0:
                            print(name, hex(base + off), fmt, "scale", sc, "axis", "xy"[axis], "pos - v =", c / sc)
print([(r[0], r[1]) for r in res])
