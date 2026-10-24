#!/usr/bin/env python3
"""Ship CN mod definitions as BPS patches made against the English ROM (the release format).

    python3 translation/tools/make_bps.py ID [ID ...] [--defs patches/custom] [--out Patch_Manager/patches]
        [--jp "ROMs/Shining Soul II (Japan).gba"] [--translation Patch_Manager/patches/english_translation.bps]
        [--rom ENGLISH_ROM] [--english-out PATH] [--rom-out DIR]

The starting file is the Japanese ROM. The English ROM (ss2-en-phase1d.gba, which is also the CN
mod baseline's code) is made from it in memory with english_translation.bps, unless --rom names an
English ROM file. --english-out saves that temporary English ROM (for the emulator); --rom-out DIR
also writes each English+mod ROM there as DIR/ss2-en+ID.gba.

For each ID, the definition `DEFS/ID.json` is applied to the English ROM (every preimage asserted,
plus the English name from translation/mods/ledger.json when the mod renames a record, same rule
as combine_patch.py and make_ips_set.py), and `OUT/ID.bps` is written: a plain English ->
English+mod diff encoded like make_base_bps.py. The patch is decoded with eu/ss2tools/bps.py and
compared to the target before it is written; a stale `OUT/ID.ips` / `.ips32` is removed.
Writes nothing else in OUT. The user tests OUT/ID.bps in Patch_Manager, then copies it to the web
patcher (SS2_Web_Patcher/patches) themselves.
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
from make_base_bps import EN_SHA, JP_SHA, encode  # noqa: E402
from ss2tools.bps import decode_bps  # noqa: E402

BASE = 0x08000000


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("ids", nargs="+")
    ap.add_argument("--defs", default=str(ROOT / "patches/custom"))
    ap.add_argument("--jp", default=str(ROOT / "ROMs/Shining Soul II (Japan).gba"))
    ap.add_argument("--translation", default=str(ROOT / "Patch_Manager/patches/english_translation.bps"))
    ap.add_argument("--rom", help="use this English ROM file instead of translating the Japanese ROM")
    ap.add_argument("--out", default=str(ROOT / "Patch_Manager/patches"))
    ap.add_argument("--english-out", help="also save the temporary English ROM here")
    ap.add_argument("--rom-out", help="also write DIR/ss2-en+ID.gba for each mod (for testing)")
    a = ap.parse_args()
    if a.rom:
        rom = Path(a.rom).read_bytes()
    else:
        jp = Path(a.jp).read_bytes()
        if hashlib.sha256(jp).hexdigest() != JP_SHA:
            sys.exit(f"{a.jp} is not Shining Soul II (Japan).gba (sha256 {JP_SHA[:16]}...)")
        rom = decode_bps(jp, Path(a.translation).read_bytes())
    if hashlib.sha256(rom).hexdigest() != EN_SHA:
        sys.exit(f"{a.rom or 'the translated ROM'} is not the English ROM (sha256 {EN_SHA[:16]}...)")
    if a.english_out:
        Path(a.english_out).write_bytes(rom)
        print(f"temporary English ROM: {a.english_out}")
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
        if a.rom_out:
            Path(a.rom_out).mkdir(parents=True, exist_ok=True)
            (Path(a.rom_out) / f"ss2-en+{mod_id}.gba").write_bytes(new)
        print(f"{mod_id}.bps  {len(patch):,} bytes  sha256 {hashlib.sha256(patch).hexdigest()}  "
              f"target sha256 {hashlib.sha256(new).hexdigest()}  CRC32 {zlib.crc32(new) & 0xFFFFFFFF:08X}")


if __name__ == "__main__":
    main()
