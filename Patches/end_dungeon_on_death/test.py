#!/usr/bin/env python3
"""A/B death test for end_dungeon_on_death, visible input only.

    Tools/.venv/bin/python Patches/end_dungeon_on_death/test.py ROM [ROM ...]

Each ROM must be an English build (English ROM, English + mods). Replays the user's
Savestates/About_To_Die.ss0: the player dies, wakes in the inn (A through the dialogue), walks out
of the inn to the spot where the vanilla Angel flies in. Prints, after the death and at the end:
the angel task flag (bit 21 of 0x03003518), bit 14 (revive pending), the active ground items
([0x03005E18], 16 x 0x20), the dungeon progress table world+0x1C8 (non-zero bytes) and the owner's
equipped/bag records. Screenshots of the last second go to <run>/tail.png.
"""
import subprocess, sys
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
sys.path.insert(0, str(ROOT / "Tools"))
from smoke_state import open_state  # noqa: E402
from emulator import key_mask  # noqa: E402

WAKE = "1500 " + "4:A 40 " * 12 + "300"
WALK = ("60:DOWN 60:DOWN 60:LEFT 60:DOWN 60:DOWN 60:DOWN 60:DOWN 60:DOWN 60:DOWN 60:RIGHT 60:DOWN 60:DOWN "
        "40:RIGHT 40:RIGHT 40:RIGHT 40:UP 40:UP 40:UP 40:UP 60 12:LEFT 60:UP 60:UP 60:UP 60 60 60 "
        "10:DOWN 60:RIGHT 60:RIGHT 60:RIGHT 60:DOWN 60:DOWN 60:DOWN 40:RIGHT 60:DOWN 60:DOWN 60 60 60 60 "
        "60:LEFT 60:LEFT 20 20 60 60")


def probe(s, tag):
    w, own, g = s.read32(0x03005DB4), s.read32(0x03003580), s.read32(0x03005E18)
    flags = s.read32(0x03003518)
    ground = []
    for i in range(16):
        e = s.read_memory(g + 32 * i, 32)
        if e[10] | e[11] << 8:
            ground.append((e[8] | e[9] << 8, e[16] | e[17] << 8, e[18] | e[19] << 8))
    table = s.read_memory(w + 0x1C8, 100)
    m = s.read_memory(own + 0x78, 0x2E8 - 0x78)
    recs = sum(1 for i in range(39) if m[16 * i] or m[16 * i + 1])
    print(f"  {tag:<11} area {s.read16(w)}.{s.read16(w + 2)}  angel_task {flags >> 21 & 1}  revive_pending {flags >> 14 & 1}"
          f"  ground {ground}  progress {[(i, b) for i, b in enumerate(table) if b]}  owner_records {recs}"
          f"  queue {s.read32(0x030063F8)}")


def run(rom):
    s, folder = open_state(rom, ROOT / "Savestates/About_To_Die.ss0", "end_dungeon_on_death")
    print(rom)
    probe(s, "before")
    k = 0
    for part, seq in (("in the inn", WAKE), ("outside", WALK)):
        for tok in seq.split():
            n, _, keys = tok.partition(":")
            n = int(n)
            while n > 0:
                d = min(20, n)
                s.run_frames(d, key_mask(keys))
                n -= d
                s.screenshot(f"shots/{k:03d}.png")
                k += 1
        probe(s, part)
    s.save_state("states/end.ss1")
    s.__exit__(None, None, None)
    shots = sorted((folder / "shots").glob("*.png"))
    subprocess.run(["montage", *map(str, shots[-12:]), "-tile", "12x", "-geometry", "120x80+1+1",
                    str(folder / "tail.png")], check=False)
    print("  run:", folder)


if __name__ == "__main__":
    for rom in sys.argv[1:]:
        run(rom)
