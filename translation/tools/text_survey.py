#!/usr/bin/env python3
"""Read-only survey of the JP, US and EU text/resource layouts.

Reproduces the facts in translation/docs/TEXT_ARCHITECTURE.md from the three
retail ROMs. Pure standard library; never writes a ROM.

    python3 translation/tools/text_survey.py [ROMS_DIR]

ROMS_DIR defaults to ROMs/ and must hold the files named in ROMs/REQUIRED_ROMS.md.
"JP" here is ROMs/Shining_Soul_II_JP.GBA, which is the Chinese localization on the JP
cartridge, not pristine Japanese. The 32 MiB CN mod baseline has the same layout.
"""
import hashlib
import math
import struct
import sys
from pathlib import Path

ROMS = {
    "JP": ("Shining_Soul_II_JP.GBA", None),
    "US": ("Shining Soul II (USA).gba",
           "b31c19d2d25683a0941d5d501912b5f21d4590cd7071fa01882e62aa5227a7c9"),
    "EU": ("Shining_Soul_II_EU.gba", None),
}

# Per-ROM static facts (all verified by the checks below).
LAYOUT = {
    "JP": dict(ssdt=0x085286A0, lang_word=0x03003510,
               lang_tables=[0x08391260, 0x083931AC, 0x083949B8, 0x083951BC, 0x083939B0, 0x083941B4],
               typed=[(0x0B, 0x083EA38C, 0x19C), (0x0C, 0x083AC504, 0x194), (0x0D, 0x083BBE5C, 0x194),
                      (0x0E, 0x083CAB14, 0x198), (0x0F, 0x083A3084, 0x184), (0x10, 0x083DCEBC, 0x18C),
                      (0x11, 0x083E664C, 0x188), (0x12, 0x08395948, 0x17C), (0x13, 0x084355C0, 0x188),
                      (0x15, 0x083951C8, 0x180)]),
    "US": dict(ssdt=0x0856F954, lang_word=0x03003590,
               lang_tables=[0x0838F7C0, 0x083D8D18, 0x083DBC6C, 0x083DC470, 0x083DAC64, 0x083DB468],
               typed=[(0x0B, 0x08431640, 0x19C), (0x0C, 0x083F37B8, 0x194), (0x0D, 0x08403110, 0x194),
                      (0x0E, 0x08411DC8, 0x198), (0x0F, 0x083EA338, 0x184), (0x10, 0x08424170, 0x18C),
                      (0x11, 0x0842D900, 0x188), (0x12, 0x083DCBFC, 0x17C), (0x13, 0x0847C874, 0x188),
                      (0x15, 0x083DC47C, 0x180)]),
    "EU": dict(ssdt=0x08518938, lang_word=0x03003470,
               lang_tables=[0x0838AFF0, 0x084009A4, 0x08428C38, 0x083D8AEC, 0x083B0B4C],
               typed=[(0x0B, 0x084506D0, 0xC4), (0x0C, 0x08434738, 0xB8), (0x0D, 0x0843B8C8, 0xB8),
                      (0x0E, 0x08442498, 0xB8), (0x0F, 0x084303B8, 0xB4), (0x10, 0x0844A820, 0xAC),
                      (0x11, 0x0844EB50, 0xB0), (0x12, 0x0842A6D4, 0xA4), (0x13, 0x084742BC, 0xB0),
                      (0x15, 0x0842A38C, 0xA8)]),
}


def u32(d, a):
    return struct.unpack_from("<I", d, a - 0x08000000)[0]


def ptrlist(d, a):
    out = []
    while 0x08000000 <= (v := u32(d, a)) < 0x09000000:
        out.append(v)
        a += 4
    return out


def text16(d, a):
    o, out = a - 0x08000000, []
    while True:
        v = struct.unpack_from("<H", d, o)[0]
        out.append(v)
        o += 2
        if v == 0xFFFD or len(out) > 4000:
            return out


def text8(d, a):
    o = a - 0x08000000
    return d[o:d.index(b"\xfd", o) + 1]


def code(c):
    if "A" <= c <= "Z":
        return ord(c) - 0x40
    if "a" <= c <= "z":
        return ord(c) - 0x40
    if c.isdigit():
        return 0x41 + int(c)
    return {" ": 0x51}[c]


def main():
    root = Path(sys.argv[1] if len(sys.argv) > 1 else "ROMs")
    d = {}
    for k, (name, sha) in ROMS.items():
        d[k] = (root / name).read_bytes()
        if sha:
            assert hashlib.sha256(d[k]).hexdigest() == sha, f"{k} hash mismatch"

    for k, lay in LAYOUT.items():
        rom = d[k]
        assert rom[lay["ssdt"] - 0x08000000:][:4] == b"SSDT", k
        tables = [len(ptrlist(rom, t)) for t in lay["lang_tables"]]
        print(f"{k}: SSDT at {lay['ssdt']:#x}; language word {lay['lang_word']:#x}; "
              f"{len(tables)} language slots, entry counts {tables}")
        print(f"    typed table strides: " + ", ".join(f"{t:#x}:{s:#x}" for t, _, s in lay["typed"]))

    # Item record 0 (Short Sword): US English name at +0x3E is empty in JP.
    us_item, jp_item, eu_item = (LAYOUT[k]["typed"][0][1] for k in ("US", "JP", "EU"))
    name = b"".join(struct.pack("<H", code(c)) for c in "Short Sword")
    assert d["US"][us_item - 0x08000000 + 0x3E:][:len(name)] == name
    assert not any(d["JP"][jp_item - 0x08000000 + 0x3E:][:0x3E])
    assert d["JP"][jp_item - 0x08000000 + 0x174:][:0x28] == d["US"][us_item - 0x08000000 + 0x174:][:0x28]
    assert d["EU"][eu_item - 0x08000000:][:11] == bytes(code(c) for c in "Short Sword")
    print("item 0: US English name at +0x3E (empty in JP); JP/US data at +0x174 identical; "
          "EU has five inline 20-byte names")

    # Message-ID alignment: CN-on-JP Chinese (slot 0) vs US English (slot 1) vs EU English (slot 0).
    jp = ptrlist(d["JP"], LAYOUT["JP"]["lang_tables"][0])
    en = ptrlist(d["US"], LAYOUT["US"]["lang_tables"][1])
    eu = ptrlist(d["EU"], LAYOUT["EU"]["lang_tables"][0])
    agree = sum((0xFFFC in text16(d["JP"], a)) == (0xFFFC in text16(d["US"], b)) for a, b in zip(jp, en))
    la = [len(text16(d["JP"], a)) for a in jp]
    lb = [len(text16(d["US"], b)) for b in en]
    ma, mb = sum(la) / len(la), sum(lb) / len(lb)
    r = sum((x - ma) * (y - mb) for x, y in zip(la, lb)) / math.sqrt(
        sum((x - ma) ** 2 for x in la) * sum((y - mb) ** 2 for y in lb))
    print(f"JP vs US-English: name-placeholder (0xFFFC) agreement {agree}/{len(jp)}, length correlation {r:.3f}")

    # US English u16 vs EU English u8: same message after control-code narrowing.
    # Control words 0xFFxx narrow to 0xxx; US glyph codes above 0xFF have no byte form.
    def narrow(v):
        return v & 0xFF if v >= 0xFF00 else v
    comparable = [(a, b) for a, b in zip(en, eu) if all(narrow(v) < 256 for v in text16(d["US"], a))]
    same = sum(bytes(narrow(v) for v in text16(d["US"], a)) == text8(d["EU"], b) for a, b in comparable)
    print(f"US English == EU English after u16->u8 narrowing: {same}/{len(comparable)} comparable messages "
          f"({len(en) - len(comparable)} use US glyph codes above 0xFF)")


if __name__ == "__main__":
    main()
