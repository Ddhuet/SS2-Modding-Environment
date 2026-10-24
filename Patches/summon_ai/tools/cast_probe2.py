import sys; sys.path.insert(0, "/home/david/Documents/SS2_Modding/summon/tools")
from scommon import *
for hold in (100, 160, 190, 220):
    s, f = open_state("cast2", "Ready_To_Cast.ss0", rom=ROOT / "summon/test.gba")
    before = {t[0] for t in tasks(s)}
    s.run_frames(hold, keymask("A")); s.run_frames(30)
    new = [(hex(t[0]), hex((t[2] & ~1) - 4)) for t in tasks(s) if t[0] not in before]
    print("hold", hold, "new tasks", new, "summon(0x080717B4) tasks", len(summon_tasks(s)))
    s.screenshot("shot.png"); print("  ", f / "shot.png")
    s.__exit__(None, None, None)
