#!/usr/bin/env python3
"""Probe how forge gold and smith goodwill ([player]+0x74) affect fusing. DIAGNOSTIC, synthetic.

    Tools/.venv/bin/python Tools/Scripts/probe_fuse_gold.py ROM STATE.ss0 OUT.json [SEEDS]

Same synthetic call as test_guaranteed_fusing.py (real fuse routine 0x080845DC, CN/English),
plus two diagnostic writes per call: the gold field at materials+0x34 (= forge UI 0x138) and
the goodwill [0x03003580]+0x74. Records the result's +X (byte +6) and the goodwill after return.
"""
import sys, json, random
from pathlib import Path
from collections import Counter
sys.path.insert(0, str(Path(__file__).resolve().parent))
from smoke_state import open_state
from test_guaranteed_fusing import CASES, ENTRY, HIJACK, RNG_STATE, PLAYER, SP, BLOCK, OUT, RETURN

GOLDS = [0, 1, 30000, 100000, 150000, 299999, 300000, 1000000]
LS = [20000, 65535]


def main():
    rom, state, out = sys.argv[1:4]
    n = int(sys.argv[4]) if len(sys.argv) > 4 else 1000
    rnd = random.Random(99)
    seeds = [rnd.getrandbits(64) for _ in range(n)]
    s, folder = open_state(rom, state, "fuse-gold")
    res = dict(rom=rom, run_dir=str(folder), configs=[])
    try:
        assert s.run_until(HIJACK, instructions=10_000_000, frames=600)["hit"]
        base = s.save_state("states/running.ss1")
        for case in ["three_scales", "dm_scale_scale"]:
            for L in LS:
                for gold in GOLDS:
                    rows = []
                    for seed in seeds:
                        s.load_state(base)
                        data = bytes.fromhex(CASES[case]) + bytes(16)
                        for i in range(0, len(data), 4):
                            s.write32(BLOCK + i, int.from_bytes(data[i:i + 4], "little"))
                        s.write32(BLOCK + 0x34, gold)
                        for i in range(4):
                            s.write32(OUT + 4 * i, 0)
                        p = s.read32(PLAYER)
                        s.write32(p + 0x74, L)
                        s.write32(RNG_STATE, seed & 0xFFFFFFFF)
                        s.write32(RNG_STATE + 4, seed >> 32)
                        for r, v in dict(cpsr=0xFF, r0=BLOCK, r1=OUT, sp=SP, lr=RETURN | 1, pc=ENTRY).items():
                            s.write_register(r, v)
                        ret = s.run_until(RETURN, instructions=5_000_000, frames=30)
                        assert ret["hit"], ret
                        o = s.read_memory(OUT, 16)
                        rows.append(dict(seed=hex(seed), out=o.hex(), plus=o[6], L_after=s.read32(p + 0x74)))
                    plus = Counter(r["plus"] for r in rows)
                    dl = Counter(r["L_after"] - L for r in rows)
                    res["configs"].append(dict(case=case, L=L, gold=gold, plus=dict(sorted(plus.items())), rows=rows))
                    print(case, L, gold, "plus", dict(sorted(plus.items())), "dL range", min(dl), max(dl))
    finally:
        s.__exit__(None, None, None)
    Path(out).write_text(json.dumps(res))


if __name__ == "__main__":
    main()
