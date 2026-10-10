# Translation plan and handoff

Start here in a new session. Read this file first, then [docs/TEXT_ARCHITECTURE.md](docs/TEXT_ARCHITECTURE.md).
Read [docs/HUGEAPPLEPACK_FINDINGS.md](docs/HUGEAPPLEPACK_FINDINGS.md) only when you need a
specific internal (RAM map, item format, hook lessons).

## Goal

An English ROM built from the **JP ROM**, the baseline the Chinese mod chain patches. Gameplay
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
1. **Font and glyph codes.** US English codes 0x01–0x51 are kana in the JP font.
   - Phase 1 (English only): replace the font banks the way US did. Simplest.
   - Phase 2 (coexist with Chinese): add Latin glyphs in free code space and re-encode.
2. **Renderer.** The US text renderer code differs from JP; US draws 8×16 half-width glyphs.
   That diff has to be ported into JP. It is the one real code port in phase 1.
3. **Space.** English is about 2× longer than Japanese (mean 99 vs 53 code units). Place the
   new tables in expansion space and repoint the slot-1 table.
4. **Baked-in graphics** (title, menus, banners) and anything US changed in code beyond text.

## Phase 1: plain English JP ROM (no CN mods yet)

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
   - Exact-input hash checks; never modify inputs; new output names only. Reuse `eu/ss2tools` patterns where they fit.
4. **Test** in isolated mGBA runs (reuse the `eu/` harness approach): title, new game, dialogue, menus, item names, shop, save/load.

## Phase 2: CN mod compatibility

1. Find how the CN chain inserts Chinese text and fonts. Does it overwrite slot 0 or add new tables and custom codes (e.g. `0x7F01`)? Is the font expanded? See `reference_data/汉字码表.txt` and the CN patch chain.
2. Decide the glyph-code layout so Latin and Chinese coexist. Optionally build a bilingual ROM with a language toggle.
3. Make a string-extraction workflow for each CN mod's custom text, plus an English terminology ledger. The pack's English feature guide and UI strings are a head start.
4. Apply a CN gameplay mod on top and verify it unchanged.

## Phase 3 (optional)

Widen EU French/German/Italian/Spanish text to 16-bit and place it in JP slots 2–5. Record
names would need extra fields, because JP records have only two name slots.

## Open questions for the user

- Phase 1 target: English only (replace the font like US), or keep Japanese/Chinese glyphs from day one?
- Which CN mod build or chain is the compatibility target (e.g. the `13243E94` final reference)?
