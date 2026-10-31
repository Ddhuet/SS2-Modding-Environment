#!/usr/bin/env python3
"""Loot generation model for the CN baseline / English ROM (see Docs/LOOT_GENERATION.md).

    python3 Tools/Scripts/loot_model.py rows                 # the 100 loot rows, one line each
    python3 Tools/Scripts/loot_model.py list ROW [CLASS]      # one row's item list with chances
    python3 Tools/Scripts/loot_model.py tiers [CLASS]         # per-tier category odds (wooden/iron/gold/...)
    python3 Tools/Scripts/loot_model.py enchant               # prefix / element / +N tables
    python3 Tools/Scripts/loot_model.py objects               # breakable object definitions (crates, chests)

CLASS is 0-7 (Warrior, Magician, Archer, Dragonute, Priest, Brawler, Dark Mage, Ninja); default 0.

`generate(level, cls, RNG(state))` reproduces the game's generator `0x0805CBA4` (with the enchant
pass `0x0805C884`) bit for bit from the 8-byte RNG state at `0x030013B8`; it matched 200 of 200
emulator breaks of the Crate / Wooden_Chest / Iron_Chest savestates. Reads the English ROM via
base_roms.english_rom() (built from the JP ROM). The English ROM and the CN baseline share these
tables and code.
"""
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from base_roms import english_rom  # noqa: E402

ROM = english_rom()
BASE = 0x08000000

LOOT = 0x084F4954          # 100 rows x 36 B: u16 enchant %, u16 pad, 8 x u32 item-list pointer (per class)
OBJDEF = 0x084A6468        # breakable object definitions, stride 0x194 (data from +0x174)
PREFIX_TABLES = {"weapon": 0x0843DC80, "spellbook": 0x0843DD88, "armour": 0x0843DE9C, "shield": 0x0843DF64}
ELEMENT_TABLE = 0x0843E038
PLUS_TABLES = {"normal": 0x0843E054, "hard": 0x0843E07C, "shop": 0x0843E0BC}
PREFIX_RECORDS = 0x084355C0  # resource type 0x13, stride 0x188; item prefix value v -> record v-1
# item type -> (record table, stride, offset of the template's three fixed effect words)
TEMPL = {2: (0x083EA38C, 0x19C, 0x188), 3: (0x083AC504, 0x194, 0x180),
         4: (0x083BBE5C, 0x194, 0x180), 5: (0x083CAB14, 0x198, 0x184)}
NAMES = {1: (0x083DCEBC, 0x184), 2: (0x083EA38C, 0x19C), 3: (0x083AC504, 0x194), 4: (0x083BBE5C, 0x194),
         5: (0x083CAB14, 0x198), 6: (0x083A3084, 0x18C), 7: (0x083E664C, 0x188), 9: (0x08395948, 0x17C)}
CLASSES = ["Warrior", "Magician", "Archer", "Dragonute", "Priest", "Brawler", "Dark Mage", "Ninja"]
TYPES = {0: "nothing", 1: "consumable", 2: "weapon", 3: "body", 4: "head", 5: "hand", 6: "accessory",
         7: "soul", 8: "card", 9: "paste", 10: "gold"}
ELEMENTS = {1: "fire", 2: "ice", 3: "thunder", 4: "light", 5: "curse", 6: "poison"}
EFFECTS = {1: "STR", 2: "DEX", 3: "INT", 4: "VIT", 5: "MaxHP", 6: "MaxSP", 7: "Move", 8: "FireRes",
           9: "IceRes", 10: "ThunderRes", 11: "LightRes", 12: "DarkRes", 13: "PoisonRes", 14: "ATK",
           15: "DEF", 16: "AtkTiming", 17: "vsUndead", 18: "vsFlying", 19: "Crit", 20: "Shield",
           21: "CurseDmg", 22: "IgnoreCurse", 23: "SPcost", 24: "HPabsorb", 25: "SPabsorb",
           28: "Throw", 29: "SPregen", 30: "Charge", 31: "Knockback", 32: "Block", 33: "Block2",
           34: "Status", 35: "Drop"}


def u16(a): return struct.unpack_from("<H", ROM, a - BASE)[0]
def u32(a): return struct.unpack_from("<I", ROM, a - BASE)[0]


def text(addr):
    """English name slot (+0x3E) as ASCII; glyphs outside A-Z a-z 0-9 space are dropped."""
    out = ""
    for k in range(31):
        c = u16(addr + 0x3E + 2 * k)
        if c == 0:
            break
        c -= 0x700
        if 1 <= c <= 26: out += chr(64 + c)
        elif 0x21 <= c <= 0x3A: out += chr(ord("a") + c - 0x21)
        elif 0x41 <= c <= 0x4A: out += chr(ord("0") + c - 0x41)
        elif c == 0x51: out += " "
    return out.strip()


def item_name(t, code):
    if t == 10: return "Gold"
    if t == 0: return "(nothing)"
    if t not in NAMES: return f"type{t}:{code}"
    base, stride = NAMES[t]
    return text(base + code * stride)


def prefix(v):
    """(name, effects) of item prefix value v (1..71)."""
    rec = PREFIX_RECORDS + (v - 1) * 0x188
    effs = []
    for k in range(3):
        e, val = struct.unpack_from("<Hh", ROM, rec + 0x178 + 4 * k - BASE)
        if e:
            effs.append(f"{EFFECTS.get(e, f'eff{e}')}{val:+d}")
    return text(rec), " ".join(effs)


class RNG:
    """0x080008C8: 64-bit shift register at 0x030013B8 (8 bytes), 32-bit output."""
    def __init__(self, state): self.b = list(state)

    def __call__(self):
        b = self.b
        c = 1 if (b[0] ^ b[1]) & 2 else 0
        for i in range(8):
            b[i], c = (b[i] >> 1) | (c << 7), b[i] & 1
        return b[b[2] & 7] | b[b[3] & 7] << 8 | b[b[0] & 7] << 16 | b[b[1] & 7] << 24


def weighted(tab, r, extra):
    """First entry whose cumulative bound >= r. Element/+N loops run count+1 times (extra=1)."""
    for i in range(u16(tab) + extra):
        if u16(tab + 6 + 4 * i) >= r:
            return u16(tab + 4 + 4 * i)
    return None


def table_entries(tab, extra):
    n, total = u16(tab) + extra, u16(tab + 2)
    den = total + 1 if extra else total
    prev, out = -1, []
    for i in range(n):
        v, cum = u16(tab + 4 + 4 * i), u16(tab + 6 + 4 * i)
        out.append((v, (min(cum, den - 1) - prev) / den))
        prev = cum
    return out


def template(t, code):
    base, stride, eo = TEMPL[t]
    return base + code * stride, eo


def is_unique(t, code):
    """Equipment whose template has fixed effects never gets random enchantments."""
    tp, eo = template(t, code)
    return any(u16(tp + eo + 4 * k) for k in range(3))


def enchant(rec, rng, hard=False, shop=False):
    """0x0805C884. rec = [type, code, prefix, plus, element, unidentified]."""
    t = rec[0]
    if t not in TEMPL:
        return
    tp, eo = template(t, rec[1])
    A = B = C = 0
    if t == 2 and u16(tp + 0x174) == 9:            # spell book
        tab = PREFIX_TABLES["spellbook"]
        A = 1
        B = 1 if (rng() & 15) <= 7 else 0
    elif t == 2:
        tab = PREFIX_TABLES["weapon"]
        x = rng() & 15
        if x <= 2: A = B = C = 1
        elif x <= 7:
            y = rng() & 15
            if y <= 4: A = B = 1
            elif y <= 10: B = C = 1
            else: A = C = 1
        else:
            y = rng() & 15
            if y <= 4: B = 1
            elif y <= 9: A = 1
            else: C = 1
    else:
        tab = PREFIX_TABLES["shield" if t == 5 and u32(tp + 0x17C) else "armour"]
        if (rng() & 15) > 7: A = C = 1
        elif (rng() & 15) <= 7: A = 1
        else: C = 1
    if A:
        v = weighted(tab, rng() % u16(tab + 2), 0)
        if v is not None: rec[2] = v
    if B:
        v = weighted(ELEMENT_TABLE, rng() % (u16(ELEMENT_TABLE + 2) + 1), 1)
        if v is not None: rec[4] = v
    if C:
        tc = PLUS_TABLES["shop" if shop else "hard" if hard else "normal"]
        v = weighted(tc, rng() % (u16(tc + 2) + 1), 1)
        if v is not None: rec[3] = v
    unique = is_unique(t, rec[1])
    if unique:
        rec[2] = rec[3] = rec[4] = 0
    if rec[2] or rec[3] or rec[4]:
        rec[5] = 0 if unique else 1


def generate(level, cls, rng, hard=False, paste_base=0):
    """0x0805CBA4(out, level, class). Returns [type, code, prefix|gold|paste value, plus, element, unid]."""
    rec = [0, 0, 0, 0, 0, 0]
    if level == 0:
        return rec
    row = LOOT + (level - 1) * 36
    ench = u16(row) >= (rng() & 0xFFFF) % 100
    lst = u32(row + 4 + 4 * (6 if cls == 8 else cls))
    r = rng() % (u16(lst + 2) + 1)
    for i in range(u16(lst)):
        e = lst + 8 + 8 * i
        if u16(e + 4) >= r:
            rec[0], rec[1] = u16(e), u16(e + 2)
            if rec[0] == 10:
                rec[2] = max(rng() % (rec[1] * 15 // 10), rec[1] // 2)
            break
    if ench:
        enchant(rec, rng, hard)
    if rec[0] == 9:
        rec[2] = rng() % 10 + 10 * paste_base + (100 if hard else 0)
    return rec


MONSTER_BONUS = {1: 0x10, 2: 0x15, 3: 0x1A, 4: 0x20}   # by player count (0x08002164)


def monster_drop(mon, rng, killer_drop=0, players=1, hard=False):
    """0x0805CCC8(monster, out). mon: dict with 'slots' [(type, code, cum)] x3 (monster +0x3A4,
    template +0x1A0), 'level' (+0x78), 'paste' (+0x388), 'gold_ok' (+0x39B bit 0).
    Returns (dropped, [type, code, value, plus, element, unid])."""
    rec = [0, 0, 0, 0, 0, 0]
    r = rng() & 0xFFFF
    lo = 0
    for t, code, cum in mon["slots"]:
        if t == 0:
            continue
        if lo <= r <= cum:
            rec[0], rec[1] = t, code
            if t == 9:
                rec[2] = mon["paste"]
            break
        lo = cum + 1
    if rec[0]:
        if rec[0] == 10 and not mon["gold_ok"]:
            return False, [0, 0, 0, 0, 0, 0]
        return True, rec
    if killer_drop + MONSTER_BONUS.get(players, 0) <= (rng() & 0xFF):
        return False, rec
    level = mon["level"]
    if hard:
        if level == 0:
            return False, rec
        level += 50
    rec = generate(level, 0, rng, hard)
    if rec[0] == 9:
        rec[2] = mon["paste"]
    elif rec[0] == 10 and not mon["gold_ok"] or rec[0] > 10:
        return False, [0, 0, 0, 0, 0, 0]
    return rec[0] != 0, rec


def row_list(row, cls=0):
    lst = u32(LOOT + (row - 1) * 36 + 4 + 4 * cls)
    total, prev, out = u16(lst + 2) + 1, -1, []
    for i in range(u16(lst)):
        t, code, cum = u16(lst + 8 + 8 * i), u16(lst + 10 + 8 * i), u16(lst + 12 + 8 * i)
        out.append((t, code, (cum - prev) / total))
        prev = cum
    return out


def row_summary(row, cls=0):
    ench = u16(LOOT + (row - 1) * 36) / 100
    cats, gold, unid = {}, None, 0.0
    for t, code, w in row_list(row, cls):
        k = TYPES[t] if t not in (3, 4, 5) else "armour"
        cats[k] = cats.get(k, 0) + w
        if t == 10: gold = code
        if t in TEMPL and not is_unique(t, code): unid += w * ench
    return ench, cats, gold, unid


# tier -> (monster, wooden, iron, crate, gold-chest) rows, normal mode; hard mode adds 50
TIERS = [(1, 2, 3, 4, 5), (9, 10, 11, 12, 13), (15, 16, 17, None, 18), (21, 22, 23, None, 24),
         (26, 27, 28, None, 29), (30, 31, 32, None, 33), (34, 35, 36, None, 37), (38, 39, 40, None, 41),
         (43, 44, 45, None, 46), (47, 48, 49, None, 50)]


def main(argv):
    cmd = argv[1] if len(argv) > 1 else "rows"
    cls = int(argv[3]) if cmd == "list" and len(argv) > 3 else int(argv[2]) if cmd == "tiers" and len(argv) > 2 else 0
    if cmd == "rows":
        for row in range(1, 101):
            ptrs = {u32(LOOT + (row - 1) * 36 + 4 + 4 * k) for k in range(8)}
            ench, cats, gold, _ = row_summary(row)
            c = ", ".join(f"{k} {v*100:.1f}%" for k, v in sorted(cats.items(), key=lambda kv: -kv[1]))
            print(f"{row:3} enchant {ench*100:3.0f}% {'per-class' if len(ptrs) > 1 else 'shared   '} "
                  f"gold code {gold or '-':>5}  {c}")
    elif cmd == "list":
        row = int(argv[2])
        print(f"row {row}, class {CLASSES[cls]}, enchant {u16(LOOT + (row - 1) * 36)}%")
        for t, code, w in row_list(row, cls):
            extra = f" ({code // 2}-{code * 15 // 10 - 1} G)" if t == 10 else ""
            uniq = " [fixed effects]" if t in TEMPL and is_unique(t, code) else ""
            print(f"  {w*100:6.2f}%  {TYPES[t]:10} {code:4} {item_name(t, code)}{extra}{uniq}")
    elif cmd == "tiers":
        for i, rows in enumerate(TIERS, 1):
            for label, row in zip(("monster", "wooden", "iron", "crate", "gold chest"), rows):
                if row is None: continue
                ench, cats, gold, unid = row_summary(row, cls)
                g = f"{gold // 2}-{gold * 15 // 10 - 1}" if gold else "-"
                c = " ".join(f"{k} {v*100:.1f}" for k, v in sorted(cats.items()))
                print(f"T{i:<2} {label:10} row {row:3} enchant {ench*100:3.0f}% gold {g:>9}  {c}  unidentified {unid*100:.1f}")
    elif cmd == "enchant":
        for k, tab in PREFIX_TABLES.items():
            print(f"{k} prefixes:")
            for v, w in table_entries(tab, 0):
                n, e = prefix(v)
                print(f"  {w*100:5.2f}%  {v:2} {n:10} {e}")
        print("element:", ", ".join(f"{ELEMENTS.get(v, v)} {w*100:.1f}%" for v, w in table_entries(ELEMENT_TABLE, 1)))
        for k, tab in PLUS_TABLES.items():
            print(f"+N {k}:", ", ".join(f"+{v} {w*100:.2f}%" for v, w in table_entries(tab, 1)))
    elif cmd == "objects":
        for i in range(65):
            a = OBJDEF + i * 0x194
            h = struct.unpack_from("<16H", ROM, a + 0x174 - BASE)
            print(f"def {i:2}: hp {h[0]*3:4} def {h[1]:4} sprite {h[4]:2} loot row {h[8]}")
    else:
        print(__doc__)


if __name__ == "__main__":
    main(sys.argv)
