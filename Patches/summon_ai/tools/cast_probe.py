import sys; sys.path.insert(0, "/home/david/Documents/SS2_Modding/Patches/summon_ai/tools")
from scommon import *
rom = sys.argv[1] if len(sys.argv) > 1 else str(ROM)
for hold in (40, 70, 100, 130):
    s, f = open_state("cast", "Ready_To_Cast.ss0", rom=rom)
    s.run_frames(hold, keymask("A")); 
    first = None
    for i in range(120):
        s.run_frames(1)
        if summon_tasks(s) and first is None: first = i
    sp = summon_tasks(s)
    print("hold", hold, "summon task after", first, "frames;", len(sp), "summon tasks")
    s.screenshot(f"after_{hold}.png"); print(f)
    s.__exit__(None, None, None)
