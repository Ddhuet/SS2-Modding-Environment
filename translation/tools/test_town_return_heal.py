#!/usr/bin/env python3
"""A/B of town_return_heal from the user's desktop states (English vs English + mod).

    cd eu && .venv/bin/python ../translation/tools/test_town_return_heal.py BASE_ROM MOD_ROM OUT.json

Per state: replays visible input only (A for 3 frames, or DOWN for 120 frames), runs to 900
frames, and records area id [[0x03005DB4]], HP actor+0xCC, SP actor+0xCA (x10), max HP +0x6A,
max SP +0x68 for actor 0 (0x03003D80), plus a final screenshot. No RAM writes.
"""
import sys, json
from pathlib import Path
ROOT = Path("/home/david/Documents/SS2_Modding")
sys.path.insert(0, str(ROOT / "translation/tools"))
from smoke_state import open_state, keymask
from emulator import sha256

A = 0x03003D80
CASES = {"Post_Boss": ("A", 3), "Angel_Wing": ("A", 3), "Post_Arena": ("DOWN", 120)}


def stats(s):
    return dict(area=s.read16(s.read32(0x03005DB4)), hp=s.read16(A + 0xCC), max_hp=s.read16(A + 0x6A),
                sp10=s.read16(A + 0xCA), max_sp10=s.read16(A + 0x68))


def run(rom, name, tag):
    key, hold = CASES[name]
    s, folder = open_state(rom, ROOT / f"translation/build/{name}.ss0", f"{tag}-{name}")
    try:
        start = stats(s)
        for f in range(900):
            s.run_frames(1, keymask(key) if f < hold else 0)
        s.screenshot("screenshots/final.png")
        return dict(start=start, end=stats(s), screenshot=str(folder / "screenshots/final.png"))
    finally:
        s.__exit__(None, None, None)


if __name__ == "__main__":
    base, mod, out = sys.argv[1:4]
    res = {"base_rom": dict(path=base, sha256=sha256(Path(base))), "mod_rom": dict(path=mod, sha256=sha256(Path(mod))),
           "states": {n: sha256(ROOT / f"translation/build/{n}.ss0") for n in CASES}, "cases": {}}
    for n in CASES:
        res["cases"][n] = {"english": run(base, n, "base"), "english+mod": run(mod, n, "mod")}
        print(n, json.dumps({k: (v["start"], v["end"]) for k, v in res["cases"][n].items()}))
    Path(out).write_text(json.dumps(res, indent=1) + "\n")
