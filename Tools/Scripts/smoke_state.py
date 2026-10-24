#!/usr/bin/env python3
"""Replay input from a user's desktop mGBA state on any build (diagnostic).

    Tools/.venv/bin/python Tools/Scripts/smoke_state.py ROM STATE.ss0 TAG "SEQUENCE"

SEQUENCE tokens are `frames[:KEYS]` (KEYS like A, B, SELECT, A+B; none = no input). A
screenshot is taken after every token longer than one frame. The state is copied into a new
run directory with a handmade `ss2-mgba-state-v1` sidecar so the Session loader accepts it on
a different build; only CPU/RAM/VRAM come from the state, the ROM code is what is under test.
"""
import sys, json, shutil, time
from pathlib import Path
ROOT = Path("/home/david/Documents/SS2_Modding")
sys.path.insert(0, str(ROOT / "Tools"))
from emulator import Session, sha256

KEYS = {"A": 1, "B": 2, "SELECT": 4, "START": 8, "RIGHT": 16, "LEFT": 32, "UP": 64, "DOWN": 128,
        "R": 256, "L": 512}


def keymask(s):
    return sum(KEYS[k] for k in s.split("+")) if s else 0


def open_state(rom, state, tag):
    folder = ROOT / f"Build/runs/{tag}-{time.time_ns()}"
    s = Session(Path(rom).resolve(), save=ROOT / "Savestates/Fixture_CN_English.sav", run_dir=folder)
    s.__enter__()
    st = folder / "user.ss0"; shutil.copyfile(state, st)
    (folder / "user.ss0.json").write_text(json.dumps({"format": "ss2-mgba-state-v1", "rom_sha256": s.rom_sha256,
        "state_sha256": sha256(st), "backend_revision": "26b7884bc25a5933960f3cdcd98bac1ae14d42e2", "frame": 0}))
    s.load_state(st); s.run_frames(2)
    return s, folder


def replay(s, seq):
    for i, tok in enumerate(seq.split()):
        n, _, keys = tok.partition(":")
        s.run_frames(int(n), keymask(keys))
        if int(n) > 1:
            s.screenshot(f"screenshots/{i:02d}.png")


if __name__ == "__main__":
    rom, state, tag, seq = sys.argv[1:5]
    s, folder = open_state(rom, state, tag)
    replay(s, seq)
    print(folder, "pc", hex(s.register("pc")), "frame", s.frame)
    s.__exit__(None, None, None)
