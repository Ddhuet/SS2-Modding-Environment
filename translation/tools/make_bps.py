#!/usr/bin/env python3
"""Ship CN mod definitions as BPS patches made against the English ROM (the release format).

    python3 translation/tools/make_bps.py ID [ID ...] [--defs patches/custom]
        [--rom translation/build/ss2-en-phase1d.gba] [--out ../SS2_Web_Patcher/patches]

For each ID, the definition `DEFS/ID.json` is applied to the English ROM (every preimage asserted,
plus the English name from translation/mods/ledger.json when the mod renames a record, same rule
as combine_patch.py and make_ips_set.py), and `OUT/ID.bps` is written: a plain English ->
English+mod diff encoded like make_base_bps.py. The patch is decoded with eu/ss2tools/bps.py and
compared to the target before it is written; a stale `OUT/ID.ips` / `.ips32` is removed.
Writes nothing else in OUT (base_rom.sha256 and index.json belong to the web patcher).
Standard library only.
"""
import argparse
import hashlib
import json
import sys
import zlib
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "translation/tools"))
sys.path.insert(0, str(ROOT / "eu"))
from combine_patch import ledger_overrides  # noqa: E402
from make_base_bps import EN_SHA, encode  # noqa: E402
from ss2tools.bps import decode_bps  # noqa: E402

BASE = 0x08000000


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("ids", nargs="+")
    ap.add_argument("--defs", default=str(ROOT / "patches/custom"))
    ap.add_argument("--rom", default=str(ROOT / "translation/build/ss2-en-phase1d.gba"))
    ap.add_argument("--out", default=str(ROOT.parent / "SS2_Web_Patcher/patches"))
    a = ap.parse_args()
    rom = Path(a.rom).read_bytes()
    if hashlib.sha256(rom).hexdigest() != EN_SHA:
        sys.exit(f"{a.rom} is not the English ROM (sha256 {EN_SHA[:16]}...)")
    out = Path(a.out)
    out.mkdir(parents=True, exist_ok=True)
    for mod_id in a.ids:
        d = json.loads((Path(a.defs) / f"{mod_id}.json").read_text(encoding="utf-8"))
        new = bytearray(rom)
        for w in d["writes"]:
            o = int(w["address"], 16) - BASE
            before, after = bytes.fromhex(w["before_hex"]), bytes.fromhex(w["after_hex"])
            assert new[o:o + len(before)] == before, (mod_id, w["address"])
            new[o:o + len(after)] = after
        for addr, name, e in ledger_overrides(d["writes"]):
            new[addr - BASE:addr - BASE + len(name)] = name
            print(f"  {mod_id}: ledger name {e['en']!r} at 0x{addr:08X}")
        new = bytes(new)
        patch = encode(rom, new)
        if decode_bps(rom, patch) != new:
            sys.exit(f"{mod_id}: round-trip check failed; patch not written")
        for stale in (out / f"{mod_id}.ips", out / f"{mod_id}.ips32"):
            stale.unlink(missing_ok=True)
        (out / f"{mod_id}.bps").write_bytes(patch)
        print(f"{mod_id}.bps  {len(patch):,} bytes  sha256 {hashlib.sha256(patch).hexdigest()}  "
              f"target sha256 {hashlib.sha256(new).hexdigest()}  CRC32 {zlib.crc32(new) & 0xFFFFFFFF:08X}")


if __name__ == "__main__":
    main()
