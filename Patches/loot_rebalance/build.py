#!/usr/bin/env python3
"""Build Patches/Definitions/Custom/loot_rebalance.json (CN baseline / English ROM).

    Tools/.venv/bin/python Patches/loot_rebalance/build.py

Loot rows (0x084F4954, 100 x 36 B: u16 enchant %, u16 pad, 8 u32 per-class list pointers) are
explained in Docs/LOOT_GENERATION.md. This mod writes new item lists into free space and points
the affected rows at them; the original lists stay untouched. Normal and hard rows (+50) alike.

- Crates/barrels (rows 4, 12): no "nothing" entry. Weapons, armour and accessories keep their
  weights; the rest is split evenly between gold and consumables (~44.1 % each).
- Wooden and iron chests: the gold entry is removed. The consumables (the vanilla ones plus the
  gold's 13.7 %, spread like the same tier's monster row) become, in wooden chests, only the
  best HP and SP item (same HP:SP split; normal rows Healing Drop and Goddess Tear, which loot.s
  turns into Herb in dungeons 1-5 and 18; hard rows Healing Water and Ray of Hope), and in iron
  chests only Angel Wing. The chest's novelty items (balloons, animals, letters) keep their
  weight. Enchant (= unidentified) chance: wooden 40 -> 49, iron 70 -> 100. The check is
  `value >= rand % 100`, so 49 is 50 % and 40 was 41 %.
- Monsters: gold, equipment, Valuing Scroll, Angel Wing and Grenade are removed and their weight
  goes to the other consumables (scaled proportionally); accessories and pastes keep theirs. That
  is the "generic" drop. Its chance (0x0805CCC8, by player count, out of 256; vanilla
  16/21/26/32 for 1-4 players, 1 in 16) is a Patch Manager option, 1 in 4 to 1 in 12, scaled per
  player count like vanilla; the .bps carries 1 in 4. The Valuing Scroll has its own roll
  (loot.s roll(), hooked at 0x0805CDD8) taken from the "nothing" share: SCROLL_T/65536 of all
  kills, an option from 1/16 to 1/32 (default 1/32). The monsters' own drop slots (cards, Goblin
  Axe) are not touched.
- Monster potions (loot.s wrap(), hooked on the roll's `bl gen` at 0x0805CE08): a generic drop of
  Herb/Healing Drop/Healing Water is re-picked uniformly among the allowed ones (hard mode all
  three; dungeons 1-5 and 18 Herb only; other maps Herb or Healing Drop), and Goddess Tear/Ray of
  Hope among Goddess Tear (normal) or both (hard).

Also writes the Patch Manager sidecar Patch_Manager/patches/loot_rebalance.json (the options).
"""
import hashlib, json, re, struct, subprocess, sys, tempfile
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
from base_roms import cn_baseline  # noqa: E402
from make_english_patch import assemble  # noqa: E402
from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB  # noqa: E402

CN_SHA = "45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989"
BASE = 0x08000000
LOOT = 0x084F4954
DATA, DATA_END = 0x09060000, 0x090A0000   # free space (zero-filled), lists go here
TOTAL = 65536
MONSTER = [1, 9, 15, 21, 26, 30, 34, 38, 43, 47]
WOODEN = [2, 10, 16, 22, 27, 31, 35, 39, 44, 48]
IRON = [3, 11, 17, 23, 28, 32, 36, 40, 45, 49]
CRATE = [4, 12]
CRATE_TIER = {4: 1, 12: 9}   # crate row -> monster row of the same tier
ENCHANT = {"wooden": (40, 49), "iron": (70, 100)}
# monster generic drop bonus by player count 1-4: address of the `adds r0,#imm` byte, vanilla value
BONUS = [(0x0805CDC0, 0x10), (0x0805CDC6, 0x15), (0x0805CDCC, 0x1A), (0x0805CDD2, 0x20)]
DROP_RATES = [4, 6, 8, 10, 12]              # "1 in N" choices; the first is the .bps default
SCROLL_RATES = list(range(32, 15, -2))      # Valuing Scroll "1/N" choices; the first is the default
MONSTER_DROPPED = {6, 12, 13}   # consumable codes removed from monster drops: Angel Wing, Valuing Scroll, Grenade
HP, SP = {0, 1, 2}, {3, 4}      # Herb, Healing Drop, Healing Water / Goddess Tear, Ray of Hope
BEST = {0: (1, 3), 50: (2, 4)}  # wooden chest HP and SP item: normal rows (Drop, Tear), hard rows (Water, Hope)
ANGEL_WING = 6
CODE, CODE_END = 0x080BC1E0, 0x080BC300    # zero gap before enemy_hp_bars
HOOK = 0x0805CE08               # monster drop roll: `bl 0x0805CBA4` (gen)
ROLL_AT = 0x0805CDD8            # monster drop roll: `cmp r5, sb; bls; movs r4, #1; cmp r4, #0; beq` (10 B)
CHEST_AT = 0x0802810A           # object break (crates, chests): `bl 0x0805CBA4` (gen)
SYMS = {"CODE": CODE, "GEN": 0x0805CBA4, "HARD": 0x0800C780, "RAND": 0x080008C8}
PATCHES = ROOT / "Patch_Manager/patches"


def bl(src, dst):
    off = dst - (src + 4)
    assert -0x400000 <= off < 0x400000 and not off & 1
    off &= 0x7FFFFF
    return struct.pack("<HH", 0xF000 | off >> 12, 0xF800 | (off >> 1) & 0x7FF)


def bonus(n):
    """Drop chance bytes for "1 in n" with one player, scaled per player count like vanilla."""
    return [round(256 / n * old / 16) for _, old in BONUS]


def scroll_t(n):
    return round(TOTAL / n)


def build_code(syms):
    """Assemble loot.s; returns (code, {label: address})."""
    with tempfile.TemporaryDirectory() as tmp:
        src, obj = Path(tmp) / "a.s", Path(tmp) / "a.o"
        src.write_text("".join(f".equ {k}, {v:#x}\n" for k, v in syms.items())
                       + (Path(__file__).parent / "loot.s").read_text())
        code = assemble(src, base=CODE)
        subprocess.run(["llvm-mc", "-triple=thumbv4t-none-eabi", "-mcpu=arm7tdmi", "-filetype=obj",
                        str(src), "-o", str(obj)], check=True)
        nm = subprocess.run(["llvm-nm", str(obj)], capture_output=True, text=True, check=True).stdout
    labels = {f[2]: CODE + int(f[0], 16) for f in map(str.split, nm.splitlines()) if len(f) == 3 and f[1] == "t"}
    return code, labels


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

    def real(e):
        """A real consumable (codes 0-14), not a novelty item (balloons, animals, letters)."""
        return e[0] == 1 and e[1] <= 14

    def wooden(lst, mon, hard):
        """Real consumables become the best HP and SP item, keeping their HP:SP split."""
        full = chest(lst, mon)
        cons = [e for e in full if real(e)]
        hp = sum(w for t, c, w in cons if c in HP)
        sp = sum(w for t, c, w in cons if c in SP)
        total = sum(w for t, c, w in cons)
        h = round(total * hp / (hp + sp))
        return [[1, BEST[hard][0], h], [1, BEST[hard][1], total - h]] + [e for e in full if not real(e)]

    def iron(lst, mon, hard):
        """Real consumables become Angel Wing."""
        full = chest(lst, mon)
        total = sum(w for t, c, w in full if real([t, c]))
        return [[1, ANGEL_WING, total]] + [e for e in full if not real(e)]

    def monster(lst, mon):
        kept = [e for e in lst if e[0] in (6, 9)]
        cons = [e for e in consumables(lst) if e[1] not in MONSTER_DROPPED]
        return scale(cons, TOTAL - sum(e[2] for e in kept)) + kept

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
               [(w, "wooden", lambda l, m: wooden(l, m, hard), m) for w, m in zip(WOODEN, MONSTER)] + \
               [(i, "iron", lambda l, m: iron(l, m, hard), m) for i, m in zip(IRON, MONSTER)]
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

    assert DATA + len(blob) <= DATA_END, len(blob)
    assert not any(cn[DATA - BASE:DATA - BASE + len(blob)]), "data area is not zero"
    end = DATA + len(blob) - 1

    writes = []
    for row, fam, new in row_writes:
        ra = row_addr(row)
        old = cn[ra - BASE:ra - BASE + 36]
        what = {"monster": "only consumables (no Valuing Scroll/Angel Wing/Grenade), accessories, pastes",
                "crate": "no empty result; gold and consumables ~44 % each",
                "wooden": "gold becomes consumables, which are only the best HP and SP item; "
                          "enchant (unidentified) 41 % -> 50 %",
                "iron": "gold becomes consumables, which are only Angel Wing; "
                        "enchant (unidentified) 71 % -> 100 %"}[fam]
        writes.append({"address": f"0x{ra:08X}", "offset": f"0x{ra - BASE:08X}",
                       "before_hex": old.hex(), "after_hex": new.hex(), "mode": "data",
                       "note": f"Loot row {row} ({fam}{', hard' if row > 50 else ''}): {what}; "
                               f"list pointers moved to {DATA:#010x}+."})
    for (addr, old), new in zip(BONUS, bonus(DROP_RATES[0])):
        pre = cn[addr - BASE:addr - BASE + 2]
        assert pre == bytes([old, 0x30]), (hex(addr), pre.hex())
        writes.append({"address": f"0x{addr:08X}", "offset": f"0x{addr - BASE:08X}",
                       "before_hex": pre.hex(), "after_hex": bytes([new, 0x30]).hex(), "mode": "thumb",
                       "note": f"Monster generic drop chance: `adds r0,#{old:#x}` -> `#{new:#x}` "
                               f"({old}/256 -> {new}/256 for that player count; Patch Manager option)."})
    wood = sum(1 << r for r in WOODEN)
    syms = dict(SYMS, SCROLL_T=scroll_t(SCROLL_RATES[0]), WOOD_LO=wood & 0xFFFFFFFF, WOOD_HI=wood >> 32)
    code, lab = build_code(syms)
    assert CODE + len(code) <= CODE_END, len(code)
    assert lab["wrap"] == CODE
    cs = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    targets = {int(i.op_str.lstrip("#"), 16) for i in cs.disasm(code[:lab["scroll_t"] - CODE], CODE) if i.mnemonic == "bl"}
    assert targets == {SYMS["GEN"], SYMS["HARD"], SYMS["RAND"]}, [hex(t) for t in targets]
    assert code[lab["scroll_t"] - CODE:][:4] == struct.pack("<I", syms["SCROLL_T"])

    def hook(at, old, new, note):
        pre = cn[at - BASE:at - BASE + len(old)]
        assert pre == old, (hex(at), pre.hex())
        writes.append({"address": f"0x{at:08X}", "offset": f"0x{at - BASE:08X}",
                       "before_hex": pre.hex(), "after_hex": new.hex(), "mode": "thumb", "note": note})

    hook(HOOK, bl(HOOK, SYMS["GEN"]), bl(HOOK, CODE),
         f"Monster drop roll: `bl 0x0805cba4` (gen) becomes `bl {CODE:#010x}` (wrap: gen, then re-pick "
         "HP/SP potions by mode and dungeon).")
    # 0x0805CD64 is `movs r0, #1; b <return>` (an own-slot drop's exit), 0x0805CE4E `movs r0, #0` (no drop)
    hook(ROLL_AT, bytes.fromhex("4d4500d90124002c35d0"),
         bl(ROLL_AT, lab["roll"]) + bytes.fromhex("0128c1d835d1"),
         f"Monster drop roll: `cmp r5, sb; bls; movs r4, #1; cmp r4, #0; beq 0x0805ce4e` becomes "
         f"`bl {lab['roll']:#010x}; cmp r0, #1; bhi 0x0805cd64; bne 0x0805ce4e` (roll: the generic drop as "
         "before, else the Valuing Scroll's own chance, which returns 1 with the scroll in out).")
    hook(CHEST_AT, bl(CHEST_AT, SYMS["GEN"]), bl(CHEST_AT, lab["chest"]),
         f"Object break (crates, chests): `bl 0x0805cba4` (gen) becomes `bl {lab['chest']:#010x}` (chest: gen, "
         "then a normal-mode wooden chest's Healing Drop becomes Herb in dungeons 1-5 and 18).")
    pre = cn[CODE - BASE:CODE - BASE + len(code)]
    assert not any(pre), "code area is not zero"
    writes.append({"address": f"0x{CODE:08X}", "offset": f"0x{CODE - BASE:08X}",
                   "before_hex": pre.hex(), "after_hex": code.hex(), "mode": "thumb",
                   "note": f"Allocation {CODE:#010x}..{CODE + len(code) - 1:#010x} ({len(code)} B, was zero; owner "
                           f"loot_rebalance): loot.s. wrap() {CODE:#010x}: monster potions by mode and dungeon. "
                           f"roll() {lab['roll']:#010x}: generic drop or the Valuing Scroll's own chance "
                           f"(u32 at {lab['scroll_t']:#010x}, out of 65536; Patch Manager option). chest() "
                           f"{lab['chest']:#010x}: wooden chest Healing Drop -> Herb in dungeons 1-5 and 18."})
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
        "allocations": [{"range": f"0x{DATA:08X}..0x{end:08X}", "fill": "zero", "what": "item lists"},
                        {"range": f"0x{CODE:08X}..0x{CODE_END - 1:08X}", "fill": "zero",
                         "what": f"loot.s code ({len(code)} B used)"}],
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

    def players(n):
        return ", ".join(f"{p}P {b}/256" for p, b in zip((1, 2, 3, 4), bonus(n)))
    side = {
        "name": "Loot rebalance",
        "description": "Crates are never empty, chests drop no gold (wooden: best HP/SP potion, iron: "
                       "Angel Wing), more unidentified gear, monsters drop consumables.",
        "options": [
            {"id": "drop_rate", "type": "dropdown", "label": "Monster drop rate",
             "description": "Chance per kill with one player; more players raise it in proportion, as "
                            "in vanilla (1 in 16). A monster's own drops, like cards, come on top.",
             "default": f"1 in {DROP_RATES[0]}",
             "choices": [{"label": f"1 in {n}",
                          "writes": [[f"0x{a:08X}", b, 1] for (a, _), b in zip(BONUS, bonus(n))]}
                         for n in DROP_RATES]},
            {"id": "scroll_rate", "type": "dropdown", "label": "Valuing Scroll from monsters",
             "description": "Its own chance per kill, on top of the drop rate.",
             "default": f"1 in {SCROLL_RATES[0]}",
             "choices": [{"label": f"1 in {n}", "writes": [[f"0x{lab['scroll_t']:08X}", scroll_t(n), 4]]}
                         for n in SCROLL_RATES]},
        ],
    }
    text = re.sub(r'\[\s+("0x[0-9A-F]+"),\s+(\d+),\s+(\d+)\s+\]', r"[\1, \2, \3]", json.dumps(side, indent=2))
    (PATCHES / "loot_rebalance.json").write_text(text + "\n")
    print(f"{out.relative_to(ROOT)}: {len(writes)} writes, {len(placed)} lists, {len(blob)} B at {DATA:#010x}..{end:#010x}")


if __name__ == "__main__":
    main()
