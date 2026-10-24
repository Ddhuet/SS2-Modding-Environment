#!/usr/bin/env python3
"""Phase-1 smoke scenarios in the native headless mGBA, from the CN baseline save.

    Tools/.venv/bin/python Tools/Scripts/smoke_phase1.py ROM TAG

Runs two cold-boot scenarios on a copy of Savestates/Fixture_CN_English.sav, each in a new
run directory under Build/runs/, and writes screenshots plus a JSON of RAM
checks (language word 0x03003510, font bank table 0x03005D60..0x03005D9F).

  save-dialogue: title -> file select -> Normal Mode -> inn bed -> ring menu ->
                 Save -> pages of the save explanation (message 982)
  item-menu:     same boot -> ring menu -> Item -> cursor moves

Input timings are fixed frames; English has more dialogue pages than Chinese, so the
later save-dialogue screenshots are on different pages per ROM. Compare by eye.
"""
import json
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools"))
from emulator import Session  # noqa: E402

SAVE = ROOT / "Savestates/Fixture_CN_English.sav"
BOOT = "540 1:START 120 1:A 120 1:A 180 1:A 240 1:A 120 1:A 600"
SCENARIOS = {
    "save-dialogue": BOOT + " 1:START 60 1:RIGHT 40 1:RIGHT 40 1:A 60 1:DOWN 40 1:A 120 120 1:A 90 1:A 90 1:A 90",
    "item-menu": BOOT + " 1:START 60 1:A 90 1:A 90 1:RIGHT 60 1:RIGHT 60 1:DOWN 60",
}


def run(rom, tag, name, seq):
    folder = ROOT / f"Build/runs/{tag}-{name}-{time.time_ns()}"
    with Session(rom, save=SAVE, run_dir=folder) as s:
        for i, tok in enumerate(seq.split()):
            n, _, keys = tok.partition(":")
            s.run_frames(int(n), keys or 0)
            if int(n) > 1:
                s.screenshot(f"screenshots/{i:02d}.png")
        banks = [s.read32(0x03005D60 + 4 * i) for i in range(16)]
        result = {"scenario": name, "rom": str(rom), "frame": s.frame,
                  "language_word": s.read32(0x03003510),
                  "font_banks": [f"0x{b:08X}" for b in banks],
                  "font_banks_nonzero": sum(1 for b in banks if b)}
    (folder / "checks.json").write_text(json.dumps(result, indent=1) + "\n")
    return folder, result


def main():
    rom, tag = Path(sys.argv[1]).resolve(), sys.argv[2]
    for name, seq in SCENARIOS.items():
        folder, result = run(rom, tag, name, seq)
        print(folder, json.dumps({k: result[k] for k in ("language_word", "font_banks_nonzero")}))


if __name__ == "__main__":
    main()
