#!/usr/bin/env python3
"""List CN functions that call a given function and compare their stack frame with the US pair.

    Tools/.venv/bin/python Tools/Scripts/frame_scan.py ALIGN.json 0x08019F30 [...]

ALIGN.json comes from align.py (CN baseline vs US). Function starts are found by
scanning back to `push {.., lr}`; the US partner is located through the align runs and
the first instruction bytes. A frame difference (`sub sp,#`) flags a function whose
locals, usually text line buffers, US resized for English. Read-only; heuristic pairing,
so confirm each flagged pair with func_pair_diff.py.
"""
import json, struct, bisect, sys
from pathlib import Path
cn = Path("ROMs/Shining_Soul_II_CN_Baseline.gba").read_bytes()
us = Path("ROMs/Shining_Soul_II_USA.gba").read_bytes()
al = json.load(open(sys.argv[1]))
runs = sorted(al["runs"]); starts = [r[0] for r in runs]
B = 0x08000000
def hw(d, o): return struct.unpack_from("<H", d, o)[0]
def bl_target(d, o):
    h1, h2 = hw(d, o), hw(d, o + 2)
    if h1 & 0xF800 != 0xF000 or h2 & 0xF800 != 0xF800: return None
    off = ((h1 & 0x7FF) << 12) | ((h2 & 0x7FF) << 1)
    if off & 0x400000: off -= 0x800000
    return B + o + 4 + off
def func_start(d, o):
    while o > 0:
        o -= 2
        h = hw(d, o)
        if h & 0xFF00 == 0xB500: return o  # push {..., lr}
def frame(d, o):
    for k in range(o, o + 16, 2):
        h = hw(d, k)
        if h & 0xFF80 == 0xB080: return (h & 0x7F) * 4
    return 0
def to_us(o):
    i = bisect.bisect_right(starts, o) - 1
    a, e, d = runs[i]
    return o + d, o < e
def us_start(o):
    m, inrun = to_us(o)
    if hw(us, m) & 0xFF00 == 0xB500 and hw(us, m+2) == hw(cn, o+2) : return m
    # search near for same first 8 bytes
    for dlt in range(0, 0x800, 2):
        for c in (m - dlt, m + dlt):
            if us[c:c+6] == cn[o:o+6] and us[c+8:c+12] == cn[o+8:o+12]: return c
    for dlt in range(0, 0x800, 2):
        for c in (m - dlt, m + dlt):
            if us[c:c+2] == cn[o:o+2]: return c
    return None
targets = [int(x, 16) for x in sys.argv[2:]]
seen = {}
for o in range(0, 0xC0000, 2):
    t = bl_target(cn, o)
    if t in targets:
        f = func_start(cn, o)
        seen.setdefault(f, []).append(o)
for f, sites in sorted(seen.items()):
    u = us_start(f)
    fc = frame(cn, f); fu = frame(us, u) if u is not None else None
    flag = "DIFF" if fc != fu else ""
    print(f"CN {B+f:08X} frame {fc:#5x}  US {B+u if u is not None else 0:08X} frame {fu if fu is None else hex(fu)}  calls {len(sites)} {flag}")
