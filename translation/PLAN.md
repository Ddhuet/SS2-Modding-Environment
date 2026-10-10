# Translation plan and handoff

Start here in a new session. Read this file first, then [docs/TEXT_ARCHITECTURE.md](docs/TEXT_ARCHITECTURE.md).
Read [docs/HUGEAPPLEPACK_FINDINGS.md](docs/HUGEAPPLEPACK_FINDINGS.md) only when you need a
specific internal (RAM map, item format, hook lessons).

## Goal

An English ROM built from the **CN mod baseline**: `eu/inputs/ss2-cn-baseline.gba`
(`SS2_SC_bug_fixed.GBA`, 32 MiB, SHA-256 `45ac38bb…`), the exact input every CN patch
definition in `patches/definitions/` targets. It is the Chinese localization on the JP cartridge
plus small fixes. `ROMs/Shining_Soul_II_JP.GBA` is the 16 MiB Chinese localization, not
pristine Japanese; the repo has no pristine Japanese ROM, and none is needed. Gameplay
code and data offsets then stay JP-identical, so CN mods apply with (near) binary
compatibility. Mod-added Chinese strings are translated separately.

Decision context (2026-10-10):
- The user chose this over continuing JP→EU/US ports.
- The repo is now private; branch `translation`.
- `HugeApplePack/` is a local-only, untracked reference folder. Never edit it.

## Why a fast first version looks feasible

From TEXT_ARCHITECTURE.md (static facts, verified against the ROMs):
- JP has a 6-slot language system for its 1493 messages (language word `0x03003510`). US
  English is the same 1493 messages in JP's own 16-bit format, sitting in slot 1.
- JP data records (items, equipment, …) already contain an empty English name field at
  `+0x3E`. US fills it, and all ten typed tables keep JP's strides.

So **phase 1 is mostly data copying, not porting.**

The real work is in four places:
1. **Font and glyph codes (decided: keep the Chinese glyphs).** Space is not the problem;
   **code space** is. A glyph code is an index, `bank[(code-1)>>8] + ((code-1)&255)*128`, so
   US English codes 0x01–0x51 point at the same slots the CN font already uses. Plan:
   - add Latin glyph bank(s) after the CN banks;
   - re-encode the transplanted English into those new codes (scripted, so cheap);
   - confirm the bank-pointer table and renderer accept more banks.
   Do not replace the font the way US did.
2. **Renderer.** The US text renderer code differs from JP; US draws 8×16 half-width glyphs.
   That diff has to be ported, and made conditional on the glyph code range, so Latin is
   half-width while hanzi stay full-width. It is the one real code port in phase 1.
3. **Space.** English is about 2× longer than the Chinese slot-0 text (mean 99 vs 53 code units). Place the
   new tables in expansion space and repoint the slot-1 table.
4. **Baked-in graphics** (title, menus, banners) and anything US changed in code beyond text.

## Phase 1: English text on the CN baseline (no CN mods yet)

**Status (2026-10-10):** steps 1 and 2 (first pass) done; see
[docs/PHASE1_SURVEY.md](docs/PHASE1_SURVEY.md). It gives the concrete change list (language
word init, slot-1 table pointer, 14 name tables, font section relocation, `+0x700` glyph
re-encode, renderer half-width branch) and the open runtime-glyph risks (names, numbers).

1. **Survey, read-only:**
   - Where JP initializes the language word.
   - How the item/record name renderer chooses `+0x00` vs `+0x3E` (language-gated in JP already, or a US code change?).
   - The JP vs US diff of the text renderer (JP around `0x08019F90`, US `0x08019F62`, plus the font bank setup near US `0x0801A280`).
   - Diff the type-4 font section and the second SSDT archive (JP `0x08DF31E4`, US `0x08E1AB98`).
2. **Inventory everything US changed vs JP.** Use function-level byte similarity and region deltas. Classify each change as text/font/graphics/data versus other code.
3. **Build tooling under `translation/`:**
   - Extract US slot-1 messages and the `+0x3E` name fields.
   - Write them into a copy of JP in expansion space.
   - Repoint the JP slot-1 table, set the language word to 1, and port the renderer and font.
   - Exact-input hash checks; never modify inputs; new output names only.
   - Add a US ROM profile, e.g. `translation/profiles/ss2-us.json`, in the `eu/profiles/*.json` format.
   - Prefer emitting a declarative patch that `eu/ss2tools build` applies to the CN baseline profile, so preimages are checked and IPS/BPS come for free. See the tooling section of the root `AGENTS.md`.
4. **Test** in isolated runs of the native mGBA `Session` (`eu/emulator/`), with copies of the CN
   save `workspace/input/光明之魂2.sav`, baseline vs translated. Check title, new game, dialogue,
   menus, item names, shop and save/load. Put scenario scripts under `translation/` (adapt from
   `eu/scripts/game_fixture.py`; the CN owner pointer is `0x03003580`).

## Phase 2: CN mod compatibility

1. Find how the CN chain inserts Chinese text and fonts. Does it overwrite slot 0 or add new tables and custom codes (e.g. `0x7F01`)? Is the font expanded? See `reference_data/汉字码表.txt` and the CN patch chain.
2. Decide the glyph-code layout so Latin and Chinese coexist. Optionally build a bilingual ROM with a language toggle.
3. Make a string-extraction workflow for each CN mod's custom text, plus an English terminology ledger. The pack's English feature guide and UI strings are a head start.
4. Apply a CN gameplay mod on top and verify it unchanged.

## Phase 3 (optional)

Widen EU French/German/Italian/Spanish text to 16-bit and place it in JP slots 2–5. Record
names fit too: records have six name slots, and slots 2–5 are empty (PHASE1_SURVEY.md §2).

## Decisions (2026-10-10)

- **Keep Chinese glyphs from day one;** see "Font and glyph codes" above.
- **Compatibility target:** the CN patch definitions in `patches/definitions/`, all built
  against the `45ac38bb` baseline. Climb a ladder from no-text mods to text-heavy ones:
  0. **Static conflict check first.** Intersect the translation's write set with each definition's
     write ranges. Any overlap is a real incompatibility to resolve before testing.
  1. **No text:** e.g. `status_resistance_overflow_fix`, `level_250`, `respec` (confirm respec
     writes no strings). These should apply unchanged and act as the control group.
  2. **Numerals / item-name path:** `stackable_consumables` (appends ` xN` in the item-name
     renderer, the exact place where the `+0x00`/`+0x3E` name-field choice matters) and
     `four_digit_ui_display` (HUD digits).
  3. **Real Chinese strings:** `world_map_warehouse`, `soul_ring`, `shared_character_warehouses`;
     then the `all_17_released` bundle. These exercise the string-extraction and translation workflow.
