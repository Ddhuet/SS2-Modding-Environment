#!/usr/bin/env python3
"""Synthetic A/B of the forge recipe gate (guaranteed_fusing), CN/English ROMs. DIAGNOSTIC.

    Tools/.venv/bin/python Tools/Scripts/test_guaranteed_fusing.py BASE_ROM PATCHED_ROM STATE.ss0 OUT.json [N]

From a user desktop state, runs to 0x080002F2 (System-mode Thumb in a running task, not
BIOS IntrWait), saves that point, then per case and seed: plants three 16-byte material
records in a diagnostic EWRAM block, seeds the 8-byte RNG state 0x030013B8, and calls the
real fuse routine 0x080845DC (r0 = records, r1 = output) with IRQs masked (CPSR 0xFF) on a
diagnostic stack. Records the recipe id (r4 after matcher 0x080843C0), the gate draw/threshold
at 0x080846A4, whether 0x080846A8 (recipe table) follows, and the 16-byte result at return.
All RAM/register writes are synthetic; this is not a played fuse.
"""
import sys, json, random
from pathlib import Path
ROOT = Path("/home/david/Documents/SS2_Modding")
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
from smoke_state import open_state

ENTRY, AFTER_MATCH, GATE, RECIPE, RANDOM = 0x080845DC, 0x0808468E, 0x080846A4, 0x080846A8, 0x080849DC
HIJACK, RNG_STATE, PLAYER = 0x080002F2, 0x030013B8, 0x03003580
SP, BLOCK, OUT = 0x0203F000, 0x0203F100, 0x0203F200
RETURN = 0x080003F0
# Inputs captured from the user's EU fixtures at EU fuse entry 0x0808441C (stored values).
CASES = {
    "three_scales": "090004000300000000000000000000000900040032000000000000000000000009000400370000000000000000000000",
    "dm_scale_scale": "090002003c00000000000000000000000900040003000000000000000000000009000400320000000000000000000000",
}
import name_tables as nt
BASES = {int(t[0].split()[1], 16): (t[1], t[3]) for t in nt.TABLES if t[0].startswith("type ")}


def name(rom, typ, code):
    if typ not in BASES:
        return None
    base, stride = BASES[typ]
    o = base - 0x08000000 + code * stride + 0x3E
    out = []
    for i in range(0, 0x3E, 2):
        c = int.from_bytes(rom[o + i:o + i + 2], "little")
        if c == 0:
            break
        c -= 0x700
        out.append(chr(64 + c) if 1 <= c <= 26 else chr(96 + c - 0x20) if 0x21 <= c <= 0x3A
                   else chr(48 + c - 0x41) if 0x41 <= c <= 0x4A else " " if c == 0x51 else "?")
    return "".join(out)


def run_rom(rom_path, state, seeds, tag):
    rom = Path(rom_path).read_bytes()
    s, folder = open_state(rom_path, state, tag)
    try:
        hit = s.run_until(HIJACK, instructions=10_000_000, frames=600)
        assert hit["hit"], hit
        base = s.save_state("states/running.ss1")
        rows = []
        for case, recs in CASES.items():
            for seed in seeds:
                s.load_state(base)
                data = bytes.fromhex(recs) + bytes(16)
                for i in range(0, len(data), 4):
                    s.write32(BLOCK + i, int.from_bytes(data[i:i + 4], "little"))
                for i in range(4):
                    s.write32(OUT + 4 * i, 0)
                s.write32(RNG_STATE, seed & 0xFFFFFFFF)
                s.write32(RNG_STATE + 4, seed >> 32)
                for r, v in dict(cpsr=0xFF, r0=BLOCK, r1=OUT, sp=SP, lr=RETURN | 1, pc=ENTRY).items():
                    s.write_register(r, v)
                row = dict(case=case, seed=hex(seed))
                m = s.run_until(AFTER_MATCH, instructions=200_000, frames=5)
                assert m["hit"], m
                row["recipe"] = m["registers"]["r4"]
                if row["recipe"]:
                    g = s.run_until(GATE, instructions=1000, frames=2)
                    assert g["hit"], g
                    row["draw"], row["threshold"] = g["registers"]["r1"], g["registers"]["r0"]
                    row["recipe_path"] = s.run_until(RECIPE, instructions=3, frames=1)["hit"]
                else:
                    row["recipe_path"] = False
                ret = s.run_until(RETURN, instructions=5_000_000, frames=30)
                row["returned"] = ret["hit"]
                out = s.read_memory(OUT, 16)
                row["out"] = out.hex()
                typ, code = int.from_bytes(out[0:2], "little"), int.from_bytes(out[2:4], "little")
                row["item"] = name(rom, typ + 9, code)  # inventory type + 9 = data table type
                rows.append(row)
        return dict(rom=str(rom_path), run_dir=str(folder), player_0x74=s.read32(s.read32(PLAYER) + 0x74), rows=rows)
    finally:
        s.__exit__(None, None, None)


if __name__ == "__main__":
    base_rom, patched_rom, state, out = sys.argv[1:5]
    n = int(sys.argv[5]) if len(sys.argv) > 5 else 100
    rnd = random.Random(1234)
    seeds = [rnd.getrandbits(64) for _ in range(n)]
    res = {"vanilla": run_rom(base_rom, state, seeds, "fuse-ab-van"),
           "patched": run_rom(patched_rom, state, seeds, "fuse-ab-pat")}
    Path(out).write_text(json.dumps(res, indent=1))
    from collections import Counter
    for k, v in res.items():
        print(k, "player+0x74 =", v["player_0x74"])
        for case in CASES:
            rows = [r for r in v["rows"] if r["case"] == case]
            print(f"  {case}: recipe ids {Counter(r['recipe'] for r in rows)}, recipe-path {sum(r['recipe_path'] for r in rows)}/{len(rows)}, returned {sum(r['returned'] for r in rows)}")
            print("   ", Counter(r["item"] for r in rows).most_common(12))
    for case in CASES:
        same = sum(a["out"] == b["out"] for a, b in zip(res["vanilla"]["rows"], res["patched"]["rows"]) if a["case"] == case and a["recipe_path"])
        vp = sum(a["recipe_path"] for a in res["vanilla"]["rows"] if a["case"] == case)
        nonrec = [(a["out"] == b["out"]) for a, b in zip(res["vanilla"]["rows"], res["patched"]["rows"]) if a["case"] == case and not a["recipe"]]
        print(case, f"vanilla recipe-path seeds identical in patched: {same}/{vp}; no-recipe seeds identical: {sum(nonrec)}/{len(nonrec)}")
