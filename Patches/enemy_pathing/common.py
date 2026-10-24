"""Shared helpers for the enemy-pathing investigation (English+waitcnt ROM)."""
import sys, json, shutil, time, struct
from pathlib import Path
ROOT = Path("/home/david/Documents/SS2_Modding")
sys.path.insert(0, str(ROOT / "Tools"))
from emulator import Session, sha256

ROM = ROOT / "Build/ss2-en+waitcnt_fix.gba"
STATE = ROOT / "Savestates/Warrior_Pathing.ss0"
KEYS = {"A": 1, "B": 2, "SELECT": 4, "START": 8, "RIGHT": 16, "LEFT": 32, "UP": 64, "DOWN": 128,
        "R": 256, "L": 512}

def keymask(s):
    return sum(KEYS[k] for k in s.split("+")) if s else 0

import atexit
_RUN_DIRS = []

@atexit.register
def _cleanup():
    """Drop the 32 MB ROM/save copies the Session makes in each run dir (keep logs/images)."""
    for d in _RUN_DIRS:
        for name in ("game.gba", "game.sav", "save-export.sav", "user.ss0"):
            try: (d / name).unlink()
            except FileNotFoundError: pass

def open_state(tag, rom=ROM, state=STATE):
    folder = ROOT / f"Patches/enemy_pathing/runs/{tag}-{time.time_ns()}"
    _RUN_DIRS.append(folder)
    s = Session(Path(rom).resolve(), save=ROOT / "Savestates/Fixture_CN_English.sav", run_dir=folder)
    s.__enter__()
    st = folder / "user.ss0"; shutil.copyfile(state, st)
    (folder / "user.ss0.json").write_text(json.dumps({"format": "ss2-mgba-state-v1", "rom_sha256": s.rom_sha256,
        "state_sha256": sha256(st), "backend_revision": "26b7884bc25a5933960f3cdcd98bac1ae14d42e2", "frame": 0}))
    s.load_state(st)
    return s, folder

def s32(v): return v - (1 << 32) if v & 0x80000000 else v

def pool(s):
    base = s.read32(0x030057B4); mask = s.read32(0x030057BC)
    out = []
    for i in range(5):
        a = base + i * 0x454
        out.append(dict(slot=i, addr=a, used=bool(mask >> i & 1), cls=s.read8(a + 0x1DC),
                        x=s32(s.read32(a + 0x14)) / 256, y=s32(s.read32(a + 0x18)) / 256,
                        hp=s.read16(a + 0x5C), maxhp=s.read16(a + 0x1D6)))
    return out

import os as _os
PFB = int(_os.environ.get("PFB", "0x0203D000"), 0)   # mod RAM base of the ROM under test
PF_LO, PF_HI = PFB, PFB + 0x2100                      # control, field, queue

def poke_magic(s):
    """Diagnostic: activate a mod ROM inside a savestate made without it (pf_boot never ran)."""
    assert pf_region_free(s), "mod RAM is not inside a free heap block in this state: test would be invalid"
    for a in range(PF_LO, PF_LO + 0x100, 4): s.write32(a, 0)
    s.write32(PF_LO, 0x32504650)

def heap_blocks(s):
    """Walk the EWRAM heap (headers: +0 prev|bit31 used, +4 next). Returns [(start, end, used)]."""
    out = []; a = 0x02000010
    for _ in range(5000):
        w0, nxt = s.read32(a), s.read32(a + 4) & ~3
        if nxt <= a or nxt > 0x02040000: break
        out.append((a, nxt, bool(w0 >> 31))); a = nxt
    return out

def pf_region_free(s):
    """True if the mod's RAM lies inside one free heap block, or above the heap end (mod-booted)."""
    blocks = heap_blocks(s)
    if blocks and blocks[-1][1] <= PF_LO - 0x10: return True  # heap ends below (mod-booted)
    for a, b, used in blocks:
        if a <= PF_LO and PF_HI <= b: return not used
    return False

LAYOUT = json.loads((ROOT / "Patches/enemy_pathing/pf_layout.json").read_text())

def pf_state(s):
    """Read the mod's control block (test RAM base PFB) into a dict of the fields useful in logs."""
    L = LAYOUT; b = PF_LO
    return {"magic": s.read32(b) == 0x32504650, "state": s.read8(b + L["state"]),
            "seed": (s.read16(b + L["sx"]), s.read16(b + L["sy"])),
            "leash": [s.read16(b + L["leash"] + 2 * i) for i in range(5)],
            "los": [s.read8(b + L["los"] + i) for i in range(5)],
            "steer": [s.read8(b + L["steer"] + i) for i in range(5)]}

def heap_report(s):
    """Heap integrity + adoption: (walk ok to end sentinel, adopted block present, n blocks)."""
    blocks = heap_blocks(s)
    ok = bool(blocks) and blocks[-1][1] >= 0x0203CFF0   # vanilla quirk: chain may end at 0x0203FF00
    # prev links must match the walk
    for (a, b, u), (a2, b2, u2) in zip(blocks, blocks[1:]):
        if s.read32(a2) & 0x7FFFFFFF != a: ok = False
    adopted = any(a == PF_LO - 0x10 and u for a, b, u in blocks)
    return ok, adopted, len(blocks)
