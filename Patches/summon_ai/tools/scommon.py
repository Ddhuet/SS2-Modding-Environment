"""Shared helpers for the summon investigation (Patches/summon_ai/Starting_Info/ test ROM = English + waitcnt + walk_angles
+ enemy_pathing + persistent summons)."""
import sys, json, shutil, time
from pathlib import Path
ROOT = Path("/home/david/Documents/SS2_Modding")
sys.path.insert(0, str(ROOT / "Tools")); sys.path.insert(0, str(ROOT / "Patches/enemy_pathing"))
from emulator import Session, sha256
import common as pc  # pathing helpers (pool, heap, pf_state)

ROM = ROOT / "Patches/summon_ai/Starting_Info/Shining Soul II (English)+4_patches.gba"
SAV = ROOT / "Patches/summon_ai/Starting_Info/Shining Soul II (English)+4_patches.sav"
STATES = ROOT / "Summons"
RUNS = ROOT / "Patches/summon_ai/runs"
keymask = pc.keymask; s32 = pc.s32; pool = pc.pool

_RUN_DIRS = []
import atexit
@atexit.register
def _cleanup():
    for d in _RUN_DIRS:
        for name in ("game.gba", "game.sav", "save-export.sav", "user.ss0"):
            try: (d / name).unlink()
            except FileNotFoundError: pass

def open_state(tag, state, rom=ROM):
    folder = RUNS / f"{tag}-{time.time_ns()}"; _RUN_DIRS.append(folder)
    s = Session(Path(rom).resolve(), save=SAV, run_dir=folder); s.__enter__()
    st = folder / "user.ss0"; shutil.copyfile(STATES / state if not Path(state).is_absolute() else state, st)
    (folder / "user.ss0.json").write_text(json.dumps({"format": "ss2-mgba-state-v1", "rom_sha256": s.rom_sha256,
        "state_sha256": sha256(st), "backend_revision": "26b7884bc25a5933960f3cdcd98bac1ae14d42e2", "frame": 0}))
    s.load_state(st)
    return s, folder

def tasks(s):
    """Walk the task list from [0x030012D8]: [(addr, state, resume_lr, sp)]."""
    out = []; t = s.read32(0x030012D8)
    for _ in range(64):
        if not t or not (0x02000000 <= t < 0x03008000): break
        out.append((t, s.read32(t + 4), s.read32(t + 0xC), s.read32(t + 0x10))); t = s.read32(t)
    return out

def summon_tasks(s, lo=0x080717B4, hi=0x08072AA8):
    return [t for t in tasks(s) if lo <= (t[2] & ~1) - 4 < hi]
