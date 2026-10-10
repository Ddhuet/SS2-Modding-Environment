#!/usr/bin/env python3
"""Read-only anchor alignment of two GBA ROMs; reports matched runs and changed gaps.

    python3 translation/tools/align.py A.gba B.gba [--size 0x1000000] [--win 24] [--json OUT]

Indexes every 2-aligned WIN-byte window of B that occurs exactly once, looks up each
2-aligned window of A, keeps anchors that are unique in both, chains them into a
monotonic alignment (longest increasing subsequence on B offset), extends each anchor
byte-exactly, and merges anchors sharing a delta into runs. Gaps between consecutive
runs are the regions where A and B differ (changed, inserted or removed bytes).
Low-entropy windows (fewer than 4 distinct bytes) are ignored. Standard library only.
"""
import argparse
import bisect
import hashlib
import json
from pathlib import Path

BASE = 0x08000000


def windows(data, size, win):
    seen, dup = {}, set()
    for o in range(0, size - win, 2):
        w = data[o:o + win]
        if len(set(w)) < 4:
            continue
        if w in seen:
            dup.add(w)
        else:
            seen[w] = o
    for w in dup:
        del seen[w]
    return seen


def lis(pairs):
    """Longest strictly increasing subsequence on pairs' second element (pairs sorted on first)."""
    tails, tails_i, prev = [], [], [-1] * len(pairs)
    for i, (_, b) in enumerate(pairs):
        k = bisect.bisect_left(tails, b)
        if k == len(tails):
            tails.append(b); tails_i.append(i)
        else:
            tails[k] = b; tails_i[k] = i
        prev[i] = tails_i[k - 1] if k else -1
    out, i = [], tails_i[-1] if tails_i else -1
    while i != -1:
        out.append(pairs[i]); i = prev[i]
    return out[::-1]


def align(a, b, size, win):
    wa, wb = windows(a, size, win), windows(b, size, win)
    pairs = sorted((oa, wb[w]) for w, oa in wa.items() if w in wb)
    chain = lis(pairs)
    runs = []  # [a_start, a_end, delta]
    for oa, ob in chain:
        d = ob - oa
        if runs and runs[-1][2] == d and oa <= runs[-1][1]:
            runs[-1][1] = max(runs[-1][1], oa + win)
            continue
        if runs and runs[-1][2] == d and a[runs[-1][1]:oa] == b[runs[-1][1] + d:oa + d]:
            runs[-1][1] = oa + win
            continue
        runs.append([oa, oa + win, d])
    # extend byte-exactly in both directions, without overlapping neighbours
    for i, r in enumerate(runs):
        lo_a = runs[i - 1][1] if i else 0
        lo_b = runs[i - 1][1] + runs[i - 1][2] if i else 0
        while r[0] > lo_a and r[0] + r[2] > lo_b and a[r[0] - 1] == b[r[0] - 1 + r[2]]:
            r[0] -= 1
        hi_a = runs[i + 1][0] if i + 1 < len(runs) else size
        hi_b = runs[i + 1][0] + runs[i + 1][2] if i + 1 < len(runs) else len(b)
        while r[1] < hi_a and r[1] + r[2] < hi_b and a[r[1]] == b[r[1] + r[2]]:
            r[1] += 1
    return runs


def gaps(runs, size, size_b):
    out, pa, pb = [], 0, 0
    for s, e, d in runs + [[size, size, size_b - size]]:
        if s > pa or s + d > pb:
            out.append((pa, s, pb, s + d))
        pa, pb = max(pa, e), max(pb, e + d)
    return out


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("a", type=Path)
    ap.add_argument("b", type=Path)
    ap.add_argument("--size", type=lambda s: int(s, 0), default=0x1000000)
    ap.add_argument("--win", type=int, default=24)
    ap.add_argument("--json", type=Path)
    ap.add_argument("--min-gap", type=lambda s: int(s, 0), default=0)
    x = ap.parse_args()
    a, b = x.a.read_bytes(), x.b.read_bytes()
    print(f"A {x.a.name} {hashlib.sha256(a).hexdigest()[:16]}…  B {x.b.name} {hashlib.sha256(b).hexdigest()[:16]}…")
    runs = align(a, b, x.size, x.win)
    g = gaps(runs, x.size, len(b))
    print(f"{len(runs)} matched runs covering {sum(e - s for s, e, _ in runs):#x} bytes of A; {len(g)} gaps")
    for sa, ea, sb, eb in g:
        if max(ea - sa, eb - sb) >= x.min_gap:
            print(f"A {BASE + sa:08X}-{BASE + ea:08X} ({ea - sa:#7x})  B {BASE + sb:08X}-{BASE + eb:08X} ({eb - sb:#7x})")
    if x.json:
        x.json.write_text(json.dumps({"a": x.a.name, "b": x.b.name, "win": x.win,
                                      "runs": runs, "gaps": g}))


if __name__ == "__main__":
    main()
