#!/usr/bin/env python3
"""Identifier-window scenario from the user's desktop mGBA state (diagnostic).

    cd eu && .venv/bin/python ../translation/tools/smoke_identifier.py ROM TAG [SEQUENCE]

ROMs/saves/Pre_Identifier_Woman.ss0 (untracked, user-made, local only) is a desktop mGBA
0.10 state taken on translation/build/ss2-en-phase1.gba (romCrc32 0xA7B2D640) with the
player below the item identifier. It is copied into a new run directory with a sidecar
written here, so the Session loader accepts it on a different (patched) build; the state
only holds CPU/RAM/VRAM, and the ROM code is what is under test. VRAM in the state was
drawn by the old build (a stale text row on BG0 row 11 predates the talk).
Default sequence: talk (A), page and pick with A, leave with B, walk.
"""
import sys, json, shutil, time
from pathlib import Path
ROOT = Path("/home/david/Documents/SS2_Modding")
sys.path.insert(0, str(ROOT / "eu"))
from emulator import Session, sha256
DEFAULT = "2:A 120 2:A 90 2:A 90 2:A 90 2:A 90 2:A 90 2:A 90 2:B 90 2:B 90 2:B 90 30:LEFT 30 30:DOWN 60"
rom = Path(sys.argv[1]).resolve(); tag = sys.argv[2]; seq = sys.argv[3] if len(sys.argv) > 3 else DEFAULT
folder = ROOT / f"translation/build/runs/ident-flow-{tag}-{time.time_ns()}"
with Session(rom, save=ROOT / "workspace/input/光明之魂2.sav", run_dir=folder) as s:
    st = folder / "user.ss0"; shutil.copyfile(ROOT / "ROMs/saves/Pre_Identifier_Woman.ss0", st)
    # Diagnostic: foreign desktop mGBA state (romCrc32 in the state matches the old phase-1 build);
    # sidecar written here so the Session loader accepts it.
    (folder / "user.ss0.json").write_text(json.dumps({"format": "ss2-mgba-state-v1", "rom_sha256": s.rom_sha256,
        "state_sha256": sha256(st), "backend_revision": "26b7884bc25a5933960f3cdcd98bac1ae14d42e2", "frame": 0}))
    s.load_state(st); s.run_frames(2)
    for i, tok in enumerate(seq.split()):
        n, _, keys = tok.partition(":")
        s.run_frames(int(n), keys or 0)
        if int(n) > 1:
            s.screenshot(f"screenshots/{i:02d}.png")
    print(folder, "pc", hex(s.register("pc")), "frame", s.frame)
