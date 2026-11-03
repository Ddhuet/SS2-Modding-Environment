"""A/B: SP at actor+0xCA over 1200 frames from Savestates/SP_Regen.ss0 (0/10 SP, safe spot)."""
import sys; from pathlib import Path
ROOT=Path("/home/david/Documents/SS2_Modding"); sys.path.insert(0,str(ROOT/"Tools/Scripts")); sys.path.insert(0,str(ROOT/"Tools"))
from smoke_state import open_state
for rom in ("Build/en.gba","Patches/no_sp_regen/ss2-en+no_sp_regen.gba"):
    s,f=open_state(ROOT/rom, ROOT/"Savestates/SP_Regen.ss0", "nospregen")
    seen=[]; f0=s.frame
    for i in range(1200):
        s.run_frames(1); v=s.read16(0x03003D80+0xCA)
        if not seen or seen[-1][1]!=v: seen.append((s.frame-f0,v))
    s.screenshot("screenshots/end.png")
    print(rom, "changes (frame, SPx10):", seen[:8], "final", v, f)
    s.__exit__(None,None,None)
