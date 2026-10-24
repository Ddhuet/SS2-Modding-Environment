#!/usr/bin/env python3
"""Read-only SSDT resource comparison between the CN baseline and the US ROM.

    python3 Tools/Scripts/resource_diff.py [CN.gba] [US.gba]

For both SSDT archives and each archive section (types 0-6), lists the CN entries that
have no byte-identical entry anywhere in the same US section (matched by content hash),
and the US entries that have no identical CN entry. Entry sizes come from the next
entry's offset (or the next section); the last entry of section 6 has no known end and
is reported as '?'. Standard library only.
"""
import hashlib
import struct
import sys

BASE = 0x08000000
ARCHIVES = (("main", 0x085286A0, 0x0856F954), ("second", 0x08DF31E4, 0x08E1AB98))


def u32(d, a):
    return struct.unpack_from("<I", d, a - BASE)[0]


def entries(d, root, t):
    h = [u32(d, root + 4 * i) for i in range(9)]
    sec = root + h[2 + t]
    n = u32(d, sec)
    end = root + h[3 + t] if t < 6 else None
    offs = [u32(d, sec + 4 + 4 * i) for i in range(n)]
    out = []
    for i, o in enumerate(offs):
        e = offs[i + 1] if i + 1 < n else (end - sec if end else None)
        out.append((sec + o, e - o if e is not None else None))
    return out


def digest(d, a, n):
    return hashlib.sha256(d[a - BASE:a - BASE + n]).hexdigest() if n else None


def main():
    cn = open(sys.argv[1] if len(sys.argv) > 1 else "ROMs/Shining_Soul_II_CN_Baseline.gba", "rb").read()
    us = open(sys.argv[2] if len(sys.argv) > 2 else "ROMs/Shining_Soul_II_USA.gba", "rb").read()
    for label, rc, ru in ARCHIVES:
        for t in range(7):
            ec, eu = entries(cn, rc, t), entries(us, ru, t)
            hc = {digest(cn, a, n) for a, n in ec}
            hu = {digest(us, a, n) for a, n in eu}
            only_c = [(i, a, n) for i, (a, n) in enumerate(ec) if digest(cn, a, n) not in hu]
            only_u = [(i, a, n) for i, (a, n) in enumerate(eu) if digest(us, a, n) not in hc]
            print(f"{label} type {t}: CN {len(ec)} entries, US {len(eu)}; "
                  f"CN-only {len(only_c)}, US-only {len(only_u)}")
            for side, rows in (("CN", only_c), ("US", only_u)):
                for i, a, n in rows:
                    print(f"    {side} #{i:<4} {a:08X} size {n if n is None else hex(n)}")


if __name__ == "__main__":
    main()
