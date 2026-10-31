#!/usr/bin/env python3
"""Build Patches/Definitions/Custom/loot_rebalance.json (CN baseline / English ROM).

    python3 Patches/loot_rebalance/build.py

Loot rows (0x084F4954, 100 x 36 B: u16 enchant %, u16 pad, 8 u32 per-class list pointers) are
explained in Docs/LOOT_GENERATION.md. This mod writes new item lists into free space and points
the affected rows at them; the original lists stay untouched. Normal and hard rows (+50) alike.

- Crates/barrels (rows 4, 12): no "nothing" entry. Weapons, armour and accessories keep their
  weights; the rest is split evenly between gold and consumables (~44.1 % each).
- Wooden and iron chests: the gold entry is removed and its weight (13.7 %) goes to consumables,
  spread like the consumables of the same tier's monster row (real consumables; the chest's
  novelty items keep their own weight). Enchant (= unidentified) chance: wooden 40 -> 49,
  iron 70 -> 100. The check is `value >= rand % 100`, so 49 is 50 % and 40 was 41 %.
- Monsters: gold and equipment are removed and their weight goes to the consumables
  (scaled proportionally); accessories and pastes keep theirs. The generic drop chance
  (0x0805CCC8, by player count, out of 256) is doubled: 16/21/26/32 -> 32/42/52/64, so one player
  has 1 in 8. The monsters' own drop slots (cards, Goblin Axe) are not touched.
"""
import hashlib, json, struct, sys
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
from base_roms import cn_baseline  # noqa: E402

CN_SHA = "45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989"
BASE = 0x08000000
LOOT = 0x084F4954
DATA = 0x09020000            # free space (zero-filled), lists go here
TOTAL = 65536
MONSTER = [1, 9, 15, 21, 26, 30, 34, 38, 43, 47]
WOODEN = [2, 10, 16, 22, 27, 31, 35, 39, 44, 48]
IRON = [3, 11, 17, 23, 28, 32, 36, 40, 45, 49]
CRATE = [4, 12]
CRATE_TIER = {4: 1, 12: 9}   # crate row -> monster row of the same tier
ENCHANT = {"wooden": (40, 49), "iron": (70, 100)}
# monster generic drop bonus by player count: (address of the `adds r0,#imm` byte, old, new)
BONUS = [(0x0805CDC0, 0x10, 0x20), (0x0805CDC6, 0x15, 0x2A), (0x0805CDCC, 0x1A, 0x34), (0x0805CDD2, 0x20, 0x40)]


def main():
    cn = cn_baseline()
    assert hashlib.sha256(cn).hexdigest() == CN_SHA, "wrong CN baseline"

    def u16(a): return struct.unpack_from("<H", cn, a - BASE)[0]
    def u32(a): return struct.unpack_from("<I", cn, a - BASE)[0]
    def row_addr(row): return LOOT + (row - 1) * 36

    def read_list(ptr):
        """[(type, code, weight)] in list order; weights sum to 65536."""
        assert u16(ptr + 2) == TOTAL - 1
        out, prev = [], -1
        for i in range(u16(ptr)):
            t, code, cum = struct.unpack_from("<HHH", cn, ptr + 8 + 8 * i - BASE)
            out.append([t, code, cum - prev])
            prev = cum
        assert prev == TOTAL - 1
        return out

    def scale(entries, target):
        """Scale weights to sum to target (integers, rounding residue to the largest entry)."""
        s = sum(e[2] for e in entries)
        out = [[t, c, round(w * target / s)] for t, c, w in entries]
        max(out, key=lambda e: e[2])[2] += target - sum(e[2] for e in out)
        return out

    def consumables(entries):
        return [e for e in entries if e[0] == 1]

    def crate(lst, mon):
        kept = [e for e in lst if e[0] in (2, 3, 4, 5, 6)]
        rest = TOTAL - sum(e[2] for e in kept)
        gold = [e for e in lst if e[0] == 10]
        assert len(gold) == 1
        g = rest // 2
        cons = scale(consumables(lst), rest - g)
        return cons + kept + [[10, gold[0][1], g]]

    def chest(lst, mon):
        gold = [e for e in lst if e[0] == 10]
        assert len(gold) == 1
        add = {(t, c): w for t, c, w in scale(consumables(mon), gold[0][2])}
        out = []
        for t, c, w in lst:
            if t == 10:
                continue
            out.append([t, c, w + add.pop((t, c), 0)])
        return [[t, c, w] for (t, c), w in add.items()] + out   # new consumables first

    def monster(lst, mon):
        kept = [e for e in lst if e[0] in (6, 9)]
        cons = scale(consumables(lst), TOTAL - sum(e[2] for e in kept))
        return cons + kept

    def encode(entries, hdr_pad):
        entries = [e for e in entries if e[2] > 0]
        assert sum(e[2] for e in entries) == TOTAL
        b = struct.pack("<HH", len(entries), TOTAL - 1) + hdr_pad
        cum = -1
        for t, c, w in entries:
            cum += w
            b += struct.pack("<HHHH", t, c, cum, 0)
        return b

    blob = bytearray()
    placed = {}                       # list bytes -> address (dedupe)
    row_writes = []                   # (row, family, new 36-byte row)
    for hard in (0, 50):
        jobs = [(r, "monster", monster, r) for r in MONSTER] + \
               [(r, "crate", crate, CRATE_TIER[r]) for r in CRATE] + \
               [(w, "wooden", chest, m) for w, m in zip(WOODEN, MONSTER)] + \
               [(i, "iron", chest, m) for i, m in zip(IRON, MONSTER)]
        for row, fam, fn, mon_row in jobs:
            row += hard
            ra = row_addr(row)
            mon = read_list(u32(row_addr(mon_row + hard) + 4))
            new = bytearray(cn[ra - BASE:ra - BASE + 36])
            if fam in ENCHANT:
                old_e, new_e = ENCHANT[fam]
                assert u16(ra) == old_e, (row, u16(ra))
                struct.pack_into("<H", new, 0, new_e)
            for k in range(8):
                ptr = u32(ra + 4 + 4 * k)
                data = encode(fn(read_list(ptr), mon), cn[ptr + 4 - BASE:ptr + 8 - BASE])
                if data not in placed:
                    placed[data] = DATA + len(blob)
                    blob += data
                struct.pack_into("<I", new, 4 + 4 * k, placed[data])
            row_writes.append((row, fam, bytes(new)))

    assert not any(cn[DATA - BASE:DATA - BASE + len(blob)]), "data area is not zero"
    end = DATA + len(blob) - 1

    writes = []
    for row, fam, new in row_writes:
        ra = row_addr(row)
        old = cn[ra - BASE:ra - BASE + 36]
        what = {"monster": "gold and equipment become consumables",
                "crate": "no empty result; gold and consumables ~44 % each",
                "wooden": "gold becomes consumables; enchant (unidentified) 41 % -> 50 %",
                "iron": "gold becomes consumables; enchant (unidentified) 71 % -> 100 %"}[fam]
        writes.append({"address": f"0x{ra:08X}", "offset": f"0x{ra - BASE:08X}",
                       "before_hex": old.hex(), "after_hex": new.hex(), "mode": "data",
                       "note": f"Loot row {row} ({fam}{', hard' if row > 50 else ''}): {what}; "
                               f"list pointers moved to {DATA:#010x}+."})
    for addr, old, new in BONUS:
        pre = cn[addr - BASE:addr - BASE + 2]
        assert pre == bytes([old, 0x30]), (hex(addr), pre.hex())
        writes.append({"address": f"0x{addr:08X}", "offset": f"0x{addr - BASE:08X}",
                       "before_hex": pre.hex(), "after_hex": bytes([new, 0x30]).hex(), "mode": "thumb",
                       "note": f"Monster generic drop chance: `adds r0,#{old:#x}` -> `#{new:#x}` "
                               f"({old}/256 -> {new}/256 for that player count)."})
    writes.append({"address": f"0x{DATA:08X}", "offset": f"0x{DATA - BASE:08X}",
                   "before_hex": bytes(len(blob)).hex(), "after_hex": bytes(blob).hex(), "mode": "data",
                   "note": f"Allocation {DATA:#010x}..{end:#010x} ({len(blob)} B, was zero; owner loot_rebalance): "
                           f"{len(placed)} item lists (u16 count, u16 65535, 4 B pad, then "
                           "{u16 type, u16 code, u16 cumulative, u16 0} entries)."})

    out = ROOT / "Patches/Definitions/Custom/loot_rebalance.json"
    old = json.loads(out.read_text()) if out.exists() else {}
    d = {
        "schema_version": 1,
        "id": "loot_rebalance",
        "name": "Loot rebalance: full crates, no chest gold, more unidentified gear, monsters drop consumables",
        "stage": old.get("stage", "static_verified"),
        "profile_id": "ss2-cn-baseline",
        "baseline": {"filename": "SS2_SC_bug_fixed.GBA", "size": 33554432,
                     "md5": "35eb6567d94f855480c5d7ba2dff4389", "sha256": CN_SHA, "crc32": "AFCFC96D"},
        "source_provenance": {"kind": "new", "source": "Patches/loot_rebalance/build.py",
                              "notes": "Docs/mods/loot_rebalance.md"},
        "allocations": [{"range": f"0x{DATA:08X}..0x{end:08X}", "fill": "zero", "what": "item lists"}],
        "evidence": old.get("evidence", {
            "status": "static_verified",
            "semantics": "Crates never come up empty (gold/consumables ~44 % each), wooden and iron chests never "
                         "drop gold (that share becomes consumables) and enchant 50 % / 100 %, monsters drop 1 in 8 "
                         "(single player) and only consumables, accessories and pastes. Hard-mode rows likewise.",
            "static_audit": "Docs/mods/loot_rebalance.md",
            "user_acceptance": "not_run",
            "runtime": "not_run"}),
        "writes": writes,
    }
    out.write_text(json.dumps(d, indent=2) + "\n")
    print(f"{out.relative_to(ROOT)}: {len(writes)} writes, {len(placed)} lists, {len(blob)} B at {DATA:#010x}..{end:#010x}")


if __name__ == "__main__":
    main()
