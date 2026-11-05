"""A/B runtime test for angel_wing_restore (English ROM vs English+mod), visible input only
except the labelled diagnostic in the full-HP/SP case.

    Tools/.venv/bin/python Patches/angel_wing_restore/test.py ROM [ROM ...]
"""
import sys
from pathlib import Path
ROOT = Path("/home/david/Documents/SS2_Modding")
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
from smoke_state import open_state, replay

ACTOR = 0x03003D80  # local player is actor 0 in these states (checked: [0x03003580] actor id)


def stats(s):
    a = ACTOR
    w = s.read32(0x03005DB4)
    return dict(hp=s.read16(a + 0xCC), maxhp=s.read16(a + 0x6A), sp=s.read16(a + 0xCA) // 10,
                maxsp=s.read16(a + 0x68) // 10, area=s.read16(w), town=(s.read32(0x03003518) >> 3) & 1)


def wings(s):
    p = s.read32(0x03003580)
    out = []
    for i in range(25):
        t, c, n = s.read16(p + 0x158 + i * 16), s.read16(p + 0x15A + i * 16), s.read16(p + 0x15C + i * 16)
        if t == 1 and c == 6:
            out.append((i, n))
    return out


def run(rom, state, tag, seq, diag=None):
    s, folder = open_state(rom, state, tag)
    before = (stats(s), wings(s))
    if diag:
        diag(s)
        before = (stats(s), wings(s))
    replay(s, seq)
    after = (stats(s), wings(s))
    s.screenshot("screenshots/end.png")
    s.__exit__(None, None, None)
    return before, after, folder


def fill(s):  # DIAGNOSTIC RAM write: HP = max HP, SP = max SP before pressing A
    s.write16(ACTOR + 0xCC, s.read16(ACTOR + 0x6A))
    s.write16(ACTOR + 0xCA, s.read16(ACTOR + 0x68))


def give_wings(s):  # DIAGNOSTIC RAM write: Angel Wings into the first 3 empty bag slots (first one a x3 stack)
    p = s.read32(0x03003580)
    empty = [i for i in range(25) if s.read16(p + 0x158 + i * 16) == 0][:3]
    for slot, n in zip(empty, (3, 0, 0)):
        a = p + 0x158 + slot * 16
        s.write32(a, 0x00060001); s.write32(a + 4, n); s.write32(a + 8, 0); s.write32(a + 12, 0)


LEAVE = "120:DOWN 200 30:RIGHT 20 30:UP 20 3:A 600"

CASES = [
    ("Angel_Wing (HP missing)", "Angel_Wing.ss0", "3:A 300", None),
    ("Angel_Wing_2 (HP+SP missing)", "Angel_Wing_2.ss0", "3:A 300", None),
    ("Angel_Wing, HP/SP full [diag write]", "Angel_Wing.ss0", "3:A 300", fill),
    ("Leaving_Town -> world map -> area 3 [diag: 3 wings]", "Leaving_Town.ss0", LEAVE, give_wings),
    ("Post_Boss teleporter -> town [diag: 3 wings]", "Post_Boss.ss0", "3:A 900", give_wings),
    ("Post_Death_Angel, A x8 [diag: 3 wings]", "Post_Death_Angel.ss0", " ".join(["3:A 60"] * 8) + " 600", give_wings),
]

if __name__ == "__main__":
    for rom in sys.argv[1:]:
        print("==", rom)
        for name, st, seq, diag in CASES:
            b, a, f = run(ROOT / rom, ROOT / "Savestates" / st, "awr", seq, diag)
            print(f"  {name}\n    before {b}\n    after  {a}\n    {f}")
