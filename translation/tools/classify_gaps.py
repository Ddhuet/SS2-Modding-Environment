#!/usr/bin/env python3
"""Classify the alignment gaps from align.py: relocation-only versus real changes.

    python3 translation/tools/classify_gaps.py A.gba B.gba ALIGN.json [--code-end 0x080C0000]

A gap is "reloc" when both sides have equal length and every differing 4-aligned word
is a ROM pointer whose A value maps to the B value through the alignment, and every
differing Thumb BL pair maps the same way. Everything else is "change". The output is
a TSV (one gap per line) on stdout and a per-region summary on stderr.
"""
import argparse
import bisect
import json
import struct
import sys
from pathlib import Path

BASE = 0x08000000


class Mapper:
    def __init__(self, runs):
        self.runs = sorted(runs)
        self.starts = [r[0] for r in self.runs]

    def __call__(self, off):
        i = bisect.bisect_right(self.starts, off) - 1
        if i < 0:
            return None, False
        s, e, d = self.runs[i]
        return off + d, s <= off < e


def bl_target(data, off):
    hi, lo = struct.unpack_from("<HH", data, off)
    if hi & 0xF800 != 0xF000 or lo & 0xF800 != 0xF800:
        return None
    imm = ((hi & 0x7FF) << 12) | ((lo & 0x7FF) << 1)
    if imm & 0x400000:
        imm -= 0x800000
    return off + 4 + imm


def explain(a, b, sa, sb, n, m):
    """Return (kind, unexplained_byte_count)."""
    i, bad = 0, 0
    while i < n:
        if a[sa + i] == b[sb + i]:
            i += 1
            continue
        # try a BL pair starting at an even offset at or just before i
        done = False
        for st in (i & ~1, (i & ~1) - 2):
            if st < 0 or st + 4 > n or (sa + st) & 1:
                continue
            ta, tb = bl_target(a, sa + st), bl_target(b, sb + st)
            if ta is not None and tb is not None:
                mb, _ = m(ta)
                if mb == tb:
                    i = st + 4
                    done = True
                    break
        if done:
            continue
        # try an aligned ROM pointer word containing i
        w = (sa + i) & ~3
        if w >= sa and w + 4 <= sa + n and (sb + (w - sa)) % 4 == 0:
            pa = struct.unpack_from("<I", a, w)[0]
            pb = struct.unpack_from("<I", b, sb + (w - sa))[0]
            if BASE <= pa < BASE + len(a) and BASE <= pb < BASE + len(b):
                mb, _ = m(pa - BASE)
                if mb is not None and mb + BASE == pb:
                    i = w - sa + 4
                    continue
        bad += 1
        i += 1
    return bad


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("a", type=Path)
    ap.add_argument("b", type=Path)
    ap.add_argument("align", type=Path)
    x = ap.parse_args()
    a, b = x.a.read_bytes(), x.b.read_bytes()
    j = json.loads(x.align.read_text())
    m = Mapper(j["runs"])
    print("kind\ta_start\ta_end\ta_len\tb_start\tb_end\tb_len\tunexplained")
    for sa, ea, sb, eb in j["gaps"]:
        la, lb = ea - sa, eb - sb
        if la == lb:
            bad = explain(a, b, sa, sb, la, m)
            kind = "reloc" if bad == 0 else "change"
        else:
            bad, kind = max(la, lb), "resize"
        print(f"{kind}\t{BASE+sa:08X}\t{BASE+ea:08X}\t{la:#x}\t{BASE+sb:08X}\t{BASE+eb:08X}\t{lb:#x}\t{bad}")


if __name__ == "__main__":
    main()
