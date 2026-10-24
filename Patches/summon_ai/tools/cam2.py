import sys; sys.path.insert(0, "/home/david/Documents/SS2_Modding/Patches/summon_ai/tools")
from scommon import *
for st in ("Open_Area_One_Enemy_Squirrel.ss0", "Corridor_Two_Enemies_Squirrel.ss0", "Stuck_Wall_2.ss0"):
    s, f = open_state("cam", st)
    for keys in ("", "RIGHT", "DOWN"):
        s.run_frames(30, keymask(keys) if keys else 0); s.run_frames(1)
        p = 0x03003D80
        px, py = s32(s.read32(p + 0x94)) >> 8, s32(s.read32(p + 0x98)) >> 8
        vals = [s.read16(0x03003210 + o) for o in range(0x7C, 0x90, 2)]
        print(st[:12], px, py, "map W,H", s.read16(0x03003288), s.read16(0x0300328A), [hex(v) for v in vals], [s.read16(0x030012F0 + o) for o in range(0, 0x10, 2)])
    s.__exit__(None, None, None)
