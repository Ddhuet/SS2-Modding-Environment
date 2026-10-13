#!/usr/bin/env python3
"""Exact model of the forge +X roll (CN/English ROM fuse routine 0x080845DC), and helpers.

    python3 translation/tools/fuse_plus_model.py [L]     # table of expected +X vs gold

See docs/mods/fusing_gold.md. points = sum of per-input points (see input_points); L = smith
goodwill [player]+0x74 (starts 20000, max 65535).
"""
import sys
T1 = [24325, 39528, 49030, 54969, 58681, 61001, 62451, 63357, 63923, 64277, 64498, 64636,
      64722, 64776, 64810, 64831, 64844, 64852, 64857, 64860, 64862, 99999]   # 0x084FA6AC
T2 = [99999, 188506, 243823, 278396, 300000]                                  # 0x084FA700
SPAN = 200000                                                                 # 0x08084F78


def base_dist(points, gold, L):
    n = min((((points + gold // 10000 + 1) * L) & 0xFFFFFFFF) >> 18, 0xFFFFFFFF) + 3
    n = min(n, 20)
    total = T1[n] + 1
    d = {0: T1[0]}
    for i in range(1, n):
        d[i] = T1[i] - T1[i - 1]
    d[0] += T1[n] - T1[n - 1] + 1   # top slice stores nothing: the item keeps its template +0
    return {k: v / total for k, v in d.items()}, n


def gold_dist(gold):
    d = {}
    for i in range(5):
        lo = 0 if i == 0 else T2[i - 1]
        hi = T2[i]
        c = max(0, min(hi, gold + SPAN) - max(lo, gold))
        d[i] = d.get(i, 0) + c
    c = max(0, gold + SPAN - max(T2[4], gold))   # r >= 300000 adds nothing
    d[0] += c
    return {k: v / SPAN for k, v in d.items() if v}


def plus_dist(points, gold, L):
    b, _ = base_dist(points, gold, L)
    g = gold_dist(gold)
    out = {}
    for i, p in b.items():
        for j, q in g.items():
            k = min(i + j, 20)
            out[k] = out.get(k, 0) + p * q
    return out


def mean(d):
    return sum(k * v for k, v in d.items())


if __name__ == "__main__":
    L = int(sys.argv[1]) if len(sys.argv) > 1 else 20000
    print(f"L={L}, points=0")
    for g in [1, 10000, 30000, 50000, 80000, 99999, 100000, 120000, 150000, 200000, 250000, 299999, 300000, 500000, 1000000]:
        d = plus_dist(0, g, L)
        print(f"{g:>8} gold  mean +{mean(d):.2f}  " + " ".join(f"+{k}:{v*100:.1f}%" for k, v in sorted(d.items()) if v > 0.0005))
