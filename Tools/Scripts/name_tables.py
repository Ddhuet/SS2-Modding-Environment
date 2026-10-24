#!/usr/bin/env python3
"""Record tables with per-language name slots, CN baseline vs US (read-only check).

    python3 Tools/Scripts/name_tables.py [CN.gba] [US.gba]

Every record in these tables starts with six 0x3E-byte name slots (u16 glyph codes,
0x0000-terminated, zero-padded), one per language word value, followed by data at
+0x174. The game picks a slot with `record + lang*0x3E` (CN language word 0x03003510;
all 20 non-init uses of it do exactly that, plus the text-table switch at 0x08006B4C).

CN baseline: slot 0 is Chinese, slots 1-5 are empty (except type 0x16, see below).
US: slot 0 is the original Japanese, slot 1 English, slots 2-5 identical to CN.

The check asserts, per record: data from +0x174 to the stride is byte-identical between
CN and US (proves the pairing), and CN slots 1-5 equal US slots 2-5 layout (empty).
How each table was found is in Docs/Translation/PHASE1_SURVEY.md.
"""
import struct
import sys
from pathlib import Path

BASE = 0x08000000
SLOT = 0x3E
DATA = 0x174

# name, CN base, US base, stride, first record, record count (end exclusive = first+count)
TABLES = [
    ("type 0x0B", 0x083EA38C, 0x08431640, 0x19C, 0, 0x2EB),
    ("type 0x0C", 0x083AC504, 0x083F37B8, 0x194, 0, 0x9E),
    ("type 0x0D", 0x083BBE5C, 0x08403110, 0x194, 0, 0x96),
    ("type 0x0E", 0x083CAB14, 0x08411DC8, 0x198, 0, 0xB7),
    ("type 0x0F", 0x083A3084, 0x083EA338, 0x18C, 0, 0x60),
    ("type 0x10", 0x083DCEBC, 0x08424170, 0x184, 0, 0x64),
    ("type 0x11", 0x083E664C, 0x0842D900, 0x188, 0, 0x28),
    ("type 0x12", 0x08395948, 0x083DCBFC, 0x17C, 0, 0x91),
    # count is 0x59 per the resource-count switch, but record 0x58 is not name-slotted data
    ("type 0x13", 0x084355C0, 0x0847C874, 0x188, 0, 0x58),
    ("type 0x15", 0x083951C8, 0x083DC47C, 0x180, 0, 0x05),
    # type 0x16 is one fixed record ("Gold"); JP filled all six slots with its name,
    # CN replaced slot 0 only, so CN slot 1 is Japanese, not empty.
    ("type 0x16", 0x0843E0D0, 0x08485384, 0x180, 0, 0x01),
    # untyped tables reached from type-0x12 field +0x176 (code CN 0x0808606C / 0x080862A0);
    # record 0 of table A is a non-name header record
    ("table A (0x24C)", 0x0844090C, 0x08487BC0, 0x24C, 1, 196),
    ("table B (0x24C)", 0x0845CD88, 0x084A403C, 0x24C, 0, 391),
    # equipment sets (code CN 0x0801B500); record 0 is a header, 174+ are not records
    ("equipment sets", 0x084956D4, 0x084DC988, 0x18C, 1, 173),
]


def slot(rom, rec, i):
    o = rec - BASE + i * SLOT
    return rom[o:o + SLOT]


def is_string(b):
    v = struct.unpack(f"<{SLOT // 2}H", b)
    if 0 not in v:
        return False
    n = v.index(0)
    return n > 0 and not any(v[n:])


def records(table):
    _, cb, ub, st, first, count = table
    for i in range(first, first + count):
        yield i, cb + i * st, ub + i * st


def check(cn, us):
    """Yield (table, i, problem) for every violated precondition."""
    for t in TABLES:
        st = t[3]
        for i, c, u in records(t):
            if cn[c - BASE + DATA:c - BASE + st] != us[u - BASE + DATA:u - BASE + st]:
                yield t, i, "data +0x174.. differs"
            if t[0] != "type 0x16" and any(cn[c - BASE + SLOT:c - BASE + DATA]):
                yield t, i, "CN slots 1-5 not empty"
            if us[u - BASE + 2 * SLOT:u - BASE + DATA] != cn[c - BASE + 2 * SLOT:c - BASE + DATA]:
                yield t, i, "US slots 2-5 differ from CN"
            s1 = slot(us, u, 1)
            if any(s1) and not is_string(s1):
                yield t, i, "US slot 1 is not a clean string"


def main():
    cn = Path(sys.argv[1] if len(sys.argv) > 1 else "ROMs/Shining_Soul_II_CN_Baseline.gba").read_bytes()
    us = Path(sys.argv[2] if len(sys.argv) > 2 else "ROMs/Shining_Soul_II_USA.gba").read_bytes()
    problems = list(check(cn, us))
    for t in TABLES:
        named = sum(any(slot(us, u, 1)) for _, _, u in records(t))
        print(f"{t[0]:18} CN {t[1]:08X} US {t[2]:08X} stride {t[3]:#05x} records {t[4]}..{t[4] + t[5] - 1}"
              f"  US slot-1 names {named}")
    for t, i, p in problems:
        print(f"PROBLEM {t[0]} record {i}: {p}")
    print(f"{sum(t[5] for t in TABLES)} records, {len(problems)} problems")
    return 1 if problems else 0


if __name__ == "__main__":
    sys.exit(main())
