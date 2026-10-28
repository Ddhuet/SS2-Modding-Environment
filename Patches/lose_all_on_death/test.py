#!/usr/bin/env python3
"""A/B death test for lose_all_on_death (English ROM vs English + mod), visible input only.

    Tools/.venv/bin/python Patches/lose_all_on_death/test.py EN.gba EN+MOD.gba

Replays the user's Savestates/About_To_Die.ss0 (the player dies about half a second in) for
150 frames, then 600 more (wake-up in the inn). Prints the owner records +0x78..+0x2E7 before
and after death and the active ground-item list entries ([0x03005E18], 16 x 0x20, +0xA flags,
+0xC seq, +8 map, +0x10 item record).
"""
import sys
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
from smoke_state import open_state  # noqa: E402


def run(rom):
    s, folder = open_state(rom, ROOT / "Savestates/About_To_Die.ss0", "lose_all_on_death")
    own = s.read32(0x03003580)

    def records():
        m = s.read_memory(own + 0x78, 0x2E8 - 0x78)
        return [(f"+{0x78 + 16 * i:#x}", m[16 * i] | m[16 * i + 1] << 8, m[16 * i + 2] | m[16 * i + 3] << 8)
                for i in range(39) if m[16 * i] or m[16 * i + 1]]

    def ground():
        w, out = s.read32(0x03005E18), []
        for i in range(16):
            e = s.read_memory(w + 32 * i, 32)
            if e[10] | e[11] << 8:
                out.append((e[16] | e[17] << 8, e[18] | e[19] << 8))
        return out

    print(rom)
    print("  before death:", records())
    s.run_frames(150)
    print("  after death: ", records())
    s.run_frames(600)
    print("  in town:     ", records(), "area", s.read16(s.read32(0x03005DB4)))
    print("  ground items:", ground())
    s.screenshot("screenshots/town.png")
    print("  run:", folder)
    s.__exit__(None, None, None)


if __name__ == "__main__":
    for rom in sys.argv[1:]:
        run(rom)
