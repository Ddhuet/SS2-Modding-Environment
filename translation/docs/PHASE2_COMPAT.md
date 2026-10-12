# Phase 2: CN mod compatibility (2026-10-11)

Phase 2 from [../PLAN.md](../PLAN.md): do the CN mod definitions in `patches/definitions/` apply
to the English build, and what Chinese text do they bring? All facts are **CN baseline**
(`eu/inputs/ss2-cn-baseline.gba`, SHA-256 `45ac38bb…`) unless tagged otherwise. The
translation side is build 1d (`translation/build/ss2-en-phase1.patch.json`, SHA-256 `eb35dd35…`).

**Summary.** No mod writes a byte the translation writes or allocates. Every mod's preimages hold
on build 1d. The released and beta mods add **no Chinese messages, no font changes and no new glyph
codes**. Their only Chinese-text effects are one weapon rename, some glyph-variant fixes, and a
full-width "×N" suffix. The `all_17_released` and `all_18_beta` bundles combined with the
translation boot and show English in the smoke scenarios (`runtime_verified`, §4). The plan's
expected text-heavy ladder rungs (`world_map_warehouse`, `soul_ring`,
`shared_character_warehouses`) turned out to carry no Chinese strings (§2).

## 1. Static conflict check (`static_verified`)

`python3 translation/tools/mod_conflicts.py [--json translation/build/mod_conflicts.json]`

The tool works at three levels:
1. **Byte level.** It intersects each definition's write ranges with the translation's writes, its
   allocation blocks, its reused dead code (`0x08019FD8..`), and the whole translation-owned range
   `0x09400000..0x094FFFFF`. **Result: no overlap for any of the 20 definitions.**
2. **Function level.** It flags mod writes inside a code function that the translation also changes.
   Function starts are Thumb BL targets plus `push {..,lr}`. BL targets alone merged functions that
   are only called through pointers. Hits (all reviewed):

   | Function (CN) | Mod writes | Translation writes | Verdict |
   |---|---|---|---|
   | `0x080606CC` name bar | `stackable_consumables`: hooks `0x080606DC` (saves r2/r3 into `sl`/`[sp,#0x58]`) and `0x08060D04` (appends ×N at the terminator) | name order `0x08060A20..0x08060A8F`, centring BL `0x08060D10` | Compatible. The hook runs after our name build and before our centring helper, which handles mixed CN/US codes. Runtime check in §4. |
   | `0x0807B070` (stat-point screen) | `per_character_attribute_caps` `0x0807B32A..0x0807B407`, `respec` `0x0807B662..0x0807B695` | centring BLs `0x0807B8C0`, `0x0807BA18` only | Independent instructions. The frame is unchanged. |
   | `0x08082E44` | `shared_character_warehouses` (beta) BL hooks `0x080836F8`, `0x080838A8` | centring BLs `0x080834B0`, `0x080836C8` | Independent. The hooks return to `0x080838AD`/`0x0808397B`, outside the frame-ported `0x080839A0`. Not exercised at runtime yet. |
3. **Region level.** Each mod write is classified as code, slot-0 messages, CN font, name slot n,
   record data, or expansion. **No definition writes the slot-0 message table, its strings or the CN
   font.**

Where the mods put their code and data (none of it is ours):
- Zero-filled caves inside the 16 MiB: `0x0833C94C..0x0833D3xx` (stackable_consumables,
  soul_return_auto_revive) and `0x08F00170` (soul_ring).
- Expansion: `0x09000100..0x090004E8` (level_250 EXP table) and `0x09001000..0x09001F18`
  (shared_character_warehouses code and tiles).
- four_digit_ui_display edits HUD tilemaps and tile graphics inside SSDT section 0
  (`0x08528F88..0x0852D7xx`, `0x0855BBF4..0x0855BE2C`). These are graphics, not glyph text.

Injected code calls neither the renderer (`0x08019F30`) nor the glyph counter (`0x0801A1F4`). No
literal pool references the language word `0x03003510`. That was checked by listing every BL
target and every IWRAM/ROM-code literal inside the mod-written blocks.

Preimages: all 20 definitions (5,000+ writes in total) match byte for byte on build 1d. The two
bundles applied to the baseline reproduce the CN registry hashes (`dcdb1e04…`, `ba7223dd…`).

## 2. Chinese text the mods bring (`static_verified`)

`python3 translation/tools/mod_text_scan.py [DEF_ID ...] [--min 3]` applies each definition in
memory. It decodes changed slot-0 names with `reference_data/汉字码表.txt` and scans the written
blocks for glyph-code runs. Most runs it prints are numeric data that decode as surname glyphs
(codes 2–0x51); judge each one by its decode.

| Mod | Text effect | English action |
|---|---|---|
| `weapon_balance_rework` (also in both bundles) | type 0x0B #255 斗魂之爪 → 斗魂之刀 (`+0x06`: `0x0191` → `0x06D4`). Its class byte `+0x174` changes from 6 (claw) to 8 (knife, 小刀). | Slot-1 name "Combat Claw" (US) → **"Combat Knife"**, via the ledger (§3) |
| `equipment_set_balance_rework` | 15 records. Glyph variant `0x0653` → `0x046C` (both decode as 待) and leftover bytes zeroed after the terminator | None. The Chinese is unchanged, so the US names stand. |
| `stackable_consumables` | Appends CN `Ｘ` (`0x00C8`) and CN digits (`0x00EF`+n) to consumable names (code `0x0833CEEC`) | None for now. Shows as "Herb×1" with a full-width ×1, like the CN `+N` the translation keeps. Optional polish: half-width `x`/digits (`0x738`, `0x741+`) need the 16-bit constants in the mod's own code. |
| `shared_character_warehouses` (beta) | Its own 4bpp tiles at `0x09001958..0x09001EB7` | None. The tiles are Latin: "P", "W1"…"W8", digits, arrow. |
| all others | none | — |

The "custom codes (`0x7F01`)" in the old plan come from the HugeApplePack's **US port**. They are
not in these CN definitions. No CN mod here expands the font, so step 2 of the phase (glyph-code
layout) needs nothing beyond the phase-1 layout: CN glyphs `0x001..0x700`, Latin `0x701+`.

## 3. Building translation + mod (`translation/tools/combine_patch.py`)

```sh
python3 translation/tools/combine_patch.py all_17_released     # or all_18_beta, or one id
cd eu && .venv/bin/python -m ss2tools build inputs/ss2-cn-baseline.gba \
    ../translation/build/ss2-en+all_17_released.patch.json ../translation/build/ss2-en+all_17_released.gba \
    --profile profiles/ss2-cn-baseline.json --allow-static-candidate \
    --bps ../translation/build/ss2-en+all_17_released.bps
```

The combiner merges the translation patch with the definitions unchanged (same addresses,
preimages and bytes), refuses any overlap, and records both inputs' SHA-256 in
`source_provenance`. **Terminology ledger:** [`translation/mods/ledger.json`](../mods/ledger.json).
A `names` entry replaces the translation's slot-1 write for a record when the combined mod writes
change that record's slot-0 bytes, so bundles that include the mod pick it up automatically. The
ledger also lists the reviewed "no English change" items. Follow the CN README: build bundles from
the baseline, and don't stack single definitions.

| Build | Output SHA-256 |
|---|---|
| `ss2-en+all_17_released.gba` | `fca44af9773cc8972dee8c19692dac752cb9e21feea69c63021391e4d9da477d` |
| `ss2-en+all_18_beta.gba` | `8788645bfdfbd25131ead2ba00451d57a00c17cec29ef670f67330d835d61de6` |

Both carry "Combat Knife" at `0x08403E2E` (checked by decoding the built ROM). For comparison runs,
`translation/build/cn+all_17_released.gba` / `cn+all_18_beta.gba` are the CN bundles alone
(registry hashes above).

## 4. Runtime (`runtime_verified`, named scenarios only)

Native Session, CN save copy (`workspace/input/光明之魂2.sav`). Contact sheets:
`translation/build/phase2-smoke.png` and `translation/build/phase2-namebar.png`.

- `smoke_phase1.py` on `cn+all_17`, `en+all_17` and `en+all_18`. English boots and shows the file
  select, ring menu, save dialogue (message 982, both pages) and item menu. The language word is 1
  and 9 font banks are loaded. The four-digit HUD ("1797G") is active in all three. The item name
  bar shows "Herb×1" (stackable_consumables) next to the CN "药草Ｘ1".
- `smoke_state.py … beret.ss0` (the user's state, made on build 1c; diagnostic load) on `en+all_17`
  and `en+all_18`: "Beret of Fear", "Light Flail of Bane+6" and its detail view. Identical to
  build 1d.

Not covered yet: any mod feature exercised in English, for example a respec or stat-point
allocation (`0x0807B070`), the warehouse page UI (beta), the soul ring, a level-cap or EXP check
past 99, a stackable stack above 9, the temple fusion screens, or save/reload with a mod's state.
No user acceptance.

## Next

1. Feature scenarios for the mods that touch shared UI: stat-point screen (respec/attribute caps),
   warehouse UI (beta), stackable ×N ≥ 10, and the "Combat Knife" in a bag or shop. User states
   are the fastest way to reach them.
2. Optional polish: half-width ×N for stackable_consumables, as a translation-side companion that
   would rewrite the mod's constants at `0x0833CF04..0x0833CF32`. That would need the companion
   patch to own those bytes, so decide first whether binary-unchanged mods matter more.
3. Phase 2 step 3 is reduced to the ledger. New CN definitions: run `mod_conflicts.py` and
   `mod_text_scan.py`, then add ledger entries.
