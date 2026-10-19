"""Cold boot a ROM from the CN/English save into the inn, open menus, and check the mod's
boot-time setup. usage: coldboot.py ROM TAG [extra KEYSEQ]"""
import sys, time
from common import *
rom, tag = sys.argv[1], sys.argv[2]
extra = sys.argv[3] if len(sys.argv) > 3 else ""
BOOT = "540 1:START 120 1:A 120 1:A 180 1:A 240 1:A 120 1:A 600"
MENUS = "1:START 60 1:A 90 1:A 90 1:RIGHT 60 1:RIGHT 60 1:DOWN 60 1:B 60 1:B 60 1:B 60"
folder = ROOT / f"pathing/runs/{tag}-{time.time_ns()}"
import common; common._RUN_DIRS.append(folder)
s = Session(Path(rom).resolve(), save=ROOT / "workspace/input/光明之魂2.sav", run_dir=folder); s.__enter__()
def play(seq, shot):
    for i, tok in enumerate(seq.split()):
        n, _, keys = tok.partition(":")
        s.run_frames(int(n), keymask(keys))
        if int(n) > 1: s.screenshot(f"screenshots/{shot}-{i:02d}.png")
play(BOOT, "boot")
hb = heap_blocks(s)
print("magic @0x0203C000:", hex(s.read32(0x0203C000)))
print("heap ctl 0x03002410:", [hex(s.read32(0x03002410 + 4*i)) for i in range(6)])
print("heap blocks:", len(hb), "last block end:", hex(hb[-1][1]), "max used end:", hex(max(b for a, b, u in hb if u)))
print("IWRAM 0x03007800 (copied on first BFS, 0 before):", hex(s.read32(0x03007800)))
play(MENUS, "menu")
if extra: play(extra, "extra")
hb = heap_blocks(s)
print("after menus: heap blocks:", len(hb), "last end:", hex(hb[-1][1]), "magic:", hex(s.read32(0x0203C000)))
print(folder)
s.__exit__(None, None, None)
