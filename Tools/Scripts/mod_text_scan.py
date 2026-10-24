#!/usr/bin/env python3
"""Find the Chinese text each CN mod definition adds or edits (read-only).

    python3 Tools/Scripts/mod_text_scan.py [DEF_ID ...] [--defs Patches/Definitions/Official] [--min 2]

Applies each definition in memory to the CN baseline (preimages asserted) and reports:

- **name slots**: records whose slot-0 name (Chinese, `record + 0x00`) the mod changes,
  decoded before -> after with Docs/Reference_Data/汉字码表.txt. The translation needs the English
  name in slot 1 (`record + 0x3E`) for each.
- **strings in written blocks**: a mod's writes merged into blocks (gaps <= 8 equal bytes),
  each block scanned at both 2-byte phases for runs of CN glyph codes 0x0001..0x06FF (the
  1792-glyph font) of at least --min codes, ended by 0x0000 or a 0xFFxx control word.
  Code and pixel data produce false runs; a run is printed with its decode so a reader can
  judge. Glyphs are not proof of text: confirm by the code that reads the address.

Glyph codes used as immediates inside injected code (e.g. a single 'x' or digit base) are
not found here; they need code review per mod. Standard library only.
"""
import argparse
import glob
import hashlib
import json
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
from name_tables import TABLES, SLOT  # noqa: E402

BASE = 0x08000000
CN_ROM = ROOT / "ROMs/Shining_Soul_II_CN_Baseline.gba"
SHA = "45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989"
CODES = ROOT / "Docs/Reference_Data/汉字码表.txt"
MAX_GLYPH = 0x6FF


def code_table():
    t = {}
    for line in CODES.read_text(encoding="utf-8-sig").splitlines():
        p = line.split(None, 1)
        if len(p) == 2:
            t.setdefault(int(p[0], 16), p[1])
    return t


def decode(codes, t):
    out = []
    for c in codes:
        if c == 0xFFFF:
            out.append("\\n")
        elif c >= 0xFF00:
            out.append(f"<{c:04X}>")
        else:
            out.append(t.get(c, f"<{c:04X}>"))
    return "".join(out)


def apply(rom, d):
    r = bytearray(rom)
    for w in d["writes"]:
        a = int(w["address"], 16) - BASE
        b, n = bytes.fromhex(w["before_hex"]), bytes.fromhex(w["after_hex"])
        assert r[a:a + len(b)] == b, (d["id"], w["address"])
        r[a:a + len(n)] = n
    return r


def blocks(d, gap=8):
    rs = sorted((int(w["address"], 16), int(w["address"], 16) + len(w["after_hex"]) // 2) for w in d["writes"])
    out = []
    for a, b in rs:
        if out and a <= out[-1][1] + gap:
            out[-1][1] = max(out[-1][1], b)
        else:
            out.append([a, b])
    return out


def runs(r, a, b, minlen):
    for phase in (0, 1):
        s = a + ((a + phase) & 1)
        cur = []
        for p in range(s, b + 0x40, 2):  # read a little past the block for terminators
            c = struct.unpack_from("<H", r, p - BASE)[0]
            if 1 <= c <= MAX_GLYPH:
                cur.append((p, c))
                continue
            if len(cur) >= minlen and (c == 0 or c >= 0xFF00) and cur[0][0] < b:
                yield cur[0][0], [x for _, x in cur], c
            cur = []
            if p >= b:
                break


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("ids", nargs="*")
    ap.add_argument("--defs", default=str(ROOT / "Patches/Definitions/Official"))
    ap.add_argument("--min", type=int, default=2)
    args = ap.parse_args()
    rom = CN_ROM.read_bytes()
    assert hashlib.sha256(rom).hexdigest() == SHA
    t = code_table()
    for f in sorted(glob.glob(f"{args.defs}/*.json")):
        d = json.load(open(f))
        if args.ids and d["id"] not in args.ids:
            continue
        r = apply(rom, d)
        print(f"== {d['id']} ({d['name']})")
        for name, cb, _, st, first, count in TABLES:
            for i in range(first, first + count):
                o = cb + i * st - BASE
                if r[o:o + SLOT] != rom[o:o + SLOT]:
                    old = struct.unpack(f"<{SLOT // 2}H", rom[o:o + SLOT])
                    new = struct.unpack(f"<{SLOT // 2}H", r[o:o + SLOT])
                    old = old[:old.index(0)] if 0 in old else old
                    new = new[:new.index(0)] if 0 in new else new
                    print(f"  name  {name}#{i} 0x{cb + i * st:08X}: {decode(old, t)} -> {decode(new, t)}")
        for a, b in blocks(d):
            for p, codes, end in runs(r, a, b, args.min):
                print(f"  str   0x{p:08X} [{len(codes)}] end={end:04X}: {decode(codes, t)}")


if __name__ == "__main__":
    main()
