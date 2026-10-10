# Phase 1 survey: CN baseline vs US, text path (2026-10-10)

Phase 1 steps 1 and 2 of [../PLAN.md](../PLAN.md). Everything here is **`static_verified`**:
it comes from byte and disassembly checks against `eu/inputs/ss2-cn-baseline.gba`
(SHA-256 `45ac38bb…`, "CN") and `ROMs/Shining Soul II (USA).gba` (SHA-256 `b31c19d2…`,
"US"). Nothing has run in an emulator yet. Addresses are CPU addresses; each fact is tagged
with its ROM.

## Summary

The JP engine already does almost all of the language switching. An English build on the CN
baseline needs:

| Piece | CN change | Effort |
|---|---|---|
| Language word init | `0x08001BA4`: `00 20` (`movs r0,#0`) → `01 20` (`movs r0,#1`), the exact US instruction | 1 halfword |
| Message table, slot 1 | `0x08006B8C`: pool word `0x083931AC` (3-entry stub) → new 1493-entry table in expansion space | 1 word + data |
| Record names | copy US name slot 1 into CN slot 1 for 2473 records in 14 tables (already empty in CN) | data only |
| Font | relocate the type-4 font section header to expansion space with 9 banks: CN 0–6 unchanged plus US 0–1 as banks 7–8 | 1 word + data |
| Glyph codes | re-encode US English glyph codes as `code + 0x700` | scripted |
| Renderer | `0x08019F30`: half-width path when the code is ≥ `0x701` | small code port |

Runtime-generated glyph codes (player names, numbers) are the main open risk; see §7.

## Tools added (all read-only)

| Tool | Purpose |
|---|---|
| `translation/tools/thumbdis.py` | Thumb disassembly by CPU address; continues past data; annotates literal-pool loads |
| `translation/tools/xref.py` | Finds `ldr rX,=VALUE` loads of a 32-bit literal, with context |
| `translation/tools/align.py` | Anchor alignment of two ROMs → matched runs + gaps (JSON) |
| `translation/tools/classify_gaps.py` | Splits gaps into relocation-only vs real changes |
| `translation/tools/func_diff.py` | Function-level comparison (BL-target functions, mnemonic shapes, pointer words masked) |
| `translation/tools/func_pair_diff.py` | Unified diff of one CN/US function pair |
| `translation/tools/resource_diff.py` | Per-entry SSDT resource comparison |
| `translation/tools/name_tables.py` | Verified inventory of name-slotted record tables (`0 problems` expected) |

Reproduce (from the repo root; `eu/.venv` has Capstone):

```sh
python3 translation/tools/align.py eu/inputs/ss2-cn-baseline.gba "ROMs/Shining Soul II (USA).gba" --json /tmp/align.json --min-gap 0x10
eu/.venv/bin/python translation/tools/func_diff.py eu/inputs/ss2-cn-baseline.gba "ROMs/Shining Soul II (USA).gba" /tmp/align.json --tsv /tmp/funcs.tsv
python3 translation/tools/resource_diff.py
python3 translation/tools/name_tables.py
```

## 1. Language word (CN `0x03003510`, US `0x03003590`)

- **Initialization [CN, US]:** boot code stores a constant once at `0x08001BA2..0x08001BA6`
  (`ldr r1,=lang; movs r0,#N; str r0,[r1]`). CN has `N=0`; US has `N=1` at the **same
  address**. No other literal-based store to the word exists in either ROM's code region (a store through some other base register cannot be ruled out statically).
- **Uses [CN]:** 21 literal loads. One is the init. One is the type-0x14 text switch
  (`0x08006B4C`, 6 cases, `bhi` default for >5). The other 19 all compute
  `record + lang*0x3E` (`lsls #5; subs; lsls #1`) to pick a record name slot. US has the same
  21 sites in the same order.
- So with the word set to 1, the game reads text slot 1 and name slot 1 everywhere.
  No code path assumes slot 0 when the word is 1 (no other compares of the word exist).

Text switch [CN]: case table at `0x08006B68`; each case is `ldr r1,=table; b`. Pool words:
slot 0 `0x08006B84` (`0x08391260`), **slot 1 `0x08006B8C` (`0x083931AC`)**, slot 2
`0x08006B94`, slot 3 `0x08006B9C`, slot 4 `0x08006BA4`, slot 5 `0x08006BB8`. The message
pointer is `table[id & 0xFFFF]`.

## 2. Record name slots

**Correction to TEXT_ARCHITECTURE.md §4:** records have **six** name slots, not two.
Every name-bearing record starts with 6 × 0x3E bytes (one per language word value), and data
starts at `+0x174`. The type-0x16 record (Gold) shows it plainly: JP filled all six slots
with the Japanese name; CN replaced slot 0 only. In all other tables JP left slots 1–5 empty,
and US filled slot 1 only.

`name_tables.py` lists the 14 tables (CN base, US base, stride, record range). They were found
from the resource dispatcher (types 0x0B–0x13, 0x15, 0x16) and from the literals around the
19 name-slot sites (tables A, B, equipment sets). For each record it checks that `+0x174..stride`
is byte-identical CN↔US, that CN slots 1–5 are empty, and that the US slot 1 is a clean string.
2473 records, 0 problems.

**Correction:** the type-0x0F stride is **0x18C** and the type-0x10 stride is **0x184**. The
earlier table had them swapped. Verified from the handler arithmetic (`0x08006AC0`: `99x<<2`;
`0x08006ADC`: `97x<<2`) and from the data identity check. `text_survey.py` is fixed. EU strides
for these two types were not re-checked.

Resource counts from the count switch (`0x08006C6C`, CN = US): 0x0B 747, 0x0C 158, 0x0D 150,
0x0E 183, 0x0F 96, 0x10 100, 0x11 40, 0x12 145, 0x13 89, 0x14 1493, 0x15 5.

Phase 3 consequence: FR/DE/IT/ES names fit slots 2–5 without new fields.

## 3. Message format and control words

- **Container:** two parameter halfwords, then codes, then `0xFFFD`. The parameters are not
  always `0000 0001` (e.g. `(33,1)`, `(48,7)`); they look like speaker/portrait and window
  parameters. UI callers skip them (`ptr + 4`, e.g. CN `0x08082C08`). CN and US agree on them.
- **`0xFFFE` (page break)** is followed by **two parameter halfwords** of the same kind
  (US: values 0–48 and 1–15). Never re-encode these.
- Interpreter [CN] around `0x0805EBCA..0x0805F300`:
  - `0xFFFF` line break; `0xFFFA`/`0xFFF9`/`0xFFF8` text speed or pause, no argument.
  - `0xFFFC` inserts the player name from a buffer.
  - `0xFFF6`/`0xFFF4`/`0xFFF3`/`0xFFF2` insert names from RAM `0x03003D82`/`0x03003ED6`/
    `0x0300402A`/`0x0300417E`, i.e. actor `+2` for actors 0–3 (stride 0x154).
  - `0xFFF5`/`0xFFFB` insert from stack buffers (numbers).
  - Codes ≥ `0x8000` end a run in the renderer.
- The dialogue interpreter function pair matched at shape ratio ≥ 0.95, so US did not change
  it structurally.
- **Re-encoding rule for US slot 1:** copy the 2 header halfwords; for each code,
  copy `0xFFxx` controls (and the 2 halfwords after `0xFFFE`) unchanged; otherwise
  `code + 0x700`. US glyph codes reach `0x201` at most, so they land in `0x701..0x901`.

## 4. Renderer (CN `0x08019F30`, US `0x08019F44`)

`render(str, x, row)`, 84 callers in each ROM. It is the only function that reads the font
bank table (CN `0x03005D60`, US `0x03005DF0`), so all text goes through it. The two
versions are identical except for the per-glyph cell:

| | CN (full-width) | US (half-width) |
|---|---|---|
| Tilemap entries per glyph | 4: (x,row), (x+1,row), (x,row+1), (x+1,row+1); palette 0xF | 2: (x,row), (x,row+1) |
| Glyph bytes copied to VRAM `0x0600B000 + counter` | `0x80` (4 tiles, order TL TR BL BR) | `0x40` (2 tiles, top then bottom) |
| Tile counter (CN `0x03005D14`) step | `+0x80` | `+0x40` |
| x step | 2 | 1 |

- **Correction:** the cell-occupancy loop over RAM (CN `0x03005D00`, US `0x03005D90`) is in
  **both** versions; US did not add it.
- Glyph address in both: `bank[(code-1)>>8] + ((code-1)&0xFF)*0x80`.
- Plan: one branch per glyph. If `code ≥ 0x701`, take the US cell path; otherwise keep the CN
  path. The tile counter only needs 32-byte alignment, so mixing steps is fine.
- Width helper CN `0x0801A1F4` (= US `0x0801A1C8`, identical) returns the **glyph count**.
  Callers center with `15 - count`, which is correct for full-width glyphs only; US English
  centering is already off by half. This is cosmetic; it can optionally be ported later.

## 5. Font banks

- Setup CN `0x0801A2E4` (= US `0x0801A2B8`, identical): `n = count(type 4)`, then
  `bank[i] = lookup(0x40000|i)` into RAM CN `0x03005D60`. No code references the bank data
  directly (28 literal hits in that range are inside graphics data).
- **RAM capacity (`candidate`):** the next RAM literal above the table is `0x03005DA0`, so the
  table has room for 16 banks (`0x03005D60..0x03005D9F`). Confirm at runtime that
  `0x03005D7C..0x03005D83` (banks 7–8) is not used by anything else.
- CN font section: `0x088D94C8` = root `0x085286A0` + header word at `0x085286B8`
  (`0x003B0E28`). Layout: count 7, seven u32 offsets relative to the section, banks at
  `+0x20 + i*0x8000`. It is immediately followed by the type-5 section, and bank 0 starts right
  after the offset table, so it cannot grow in place.
- **Plan:** write a new section in expansion space (count 9; offsets 0–6 point back to the
  original banks via unsigned wrap-around; offsets 7–8 point to the copied US banks) and
  change the header word at `0x085286B8`. The lookup adds offsets unsigned
  (`sec + off`, CN `0x08006C56..0x08006C5C`), so backward offsets work.
- The CN font is full: 29 blank slots of 1792 (codes `0xFF`, `0x4BF–0x4C0`, `0x4C5–0x4D6`,
  `0x4DA–0x4E0`, `0x700`). CN slot-0 text uses codes up to `0x6FF`.
- US banks: `0x08928E9C`, `0x08930E9C`. Glyphs use the first 64 bytes of each slot (8×16).
  Some slots from `0x71` up also have bytes in the second half; the half-width path never
  copies them.

## 6. Resources (main SSDT CN `0x085286A0`, US `0x0856F954`)

`resource_diff.py` output, summarized:
- **Second SSDT** (CN `0x08DF31E4`, US `0x08E1AB98`): all sections identical.
- Main types 2 and 3: identical.
- Main type 0: 5 entries differ (#10, #18, #23, #24, #55), and US adds #74, #75.
- Main type 1: 7 entries differ (#0, #2, #3, #8, #10, #16, #22); US adds #23.
- Main type 5: #70 differs. Main type 6: #0, #2, #4, #12, #14, #140, #141 differ.
- These are the candidates for baked-in text graphics (title, menus). Not decoded yet.

## 7. Glyph codes produced at runtime (open)

These do not come from the message tables, so `+0x700` re-encoding does not reach them:
- **Player names** (`0xFFFC`, actor names `0xFFF2–0xFFF6`): stored as glyph codes in RAM and
  the save. Names typed on the CN name-entry screen are CN codes and will render full-width
  Chinese. An English name-entry grid needs the US name-entry code and data. Not located yet.
- **Numbers** (`0xFFF5`, `0xFFFB`, HUD, shop prices): the digit-to-glyph code is not located.
  CN digits will render full-width until it is changed. `four_digit_ui_display` touches the
  HUD digits, so coordinate with phase 2.
- **Dialogue numbers, `candidate` (PHASE1_BUILD.md §3):** `0x0805EAC4 ldrh; adds r0,#0xEF;
  strh` in the dialogue function is `adds r0,#0x41` in US, which looks like digit → glyph.
- **Dialogue line buffers** (found at runtime): 0x24-byte stack buffers per line in
  `0x0805E8E4`; ported to US 0x3C in the phase-1 patch (PHASE1_BUILD.md §3).
- Any other code that builds strings from constants (e.g. item-count suffixes in
  `stackable_consumables`).

## 8. Code inventory (step 2, first pass)

- `align.py`: 8518 matched runs. The code region (`0x08000000..~0x080BC000`) has many small
  gaps: shifted IWRAM literals (CN→US mostly +0x80, actor stride 0x154→0x158), struct offset
  shifts, and BL/pointer relocations.
- `func_diff.py`: 1207 CN / 1212 US BL-target functions; 1199 paired; 901 identical in
  mnemonic shape; 130 below ratio 0.95. "US-only" functions above `0x080BC682` are sound data
  that happens to decode as BLs, not code.
- Of the changed functions, 22 touch text (renderer calls, resource lookup, type-0x14 ids,
  language word, font table). Read so far:
  - `0x08019F30`: the renderer change (§4). Real.
  - `0x0800496E` and `0x08059738`: compiler noise (larger stack frame, different struct
    stride, a function appended at the boundary). Not text logic.
  - The other 19 are still to read.
- Noise sources to expect in the rest: register allocation, stack-frame constants, actor and
  owner struct strides, and jump tables decoded as code.
- Caveat: CN baseline = JP + CN localization + CN fixes. Without a pristine JP ROM, a CN↔US
  difference cannot be attributed to US or to CN. `eu/inputs/ss2-cn-source.gba` vs the
  baseline isolates the CN fixes.

## 9. Expansion space and CN mod overlap

- The CN baseline already writes `0x09000000..0x0900005F` (a small hook). The rest of the
  upper 16 MiB is zero.
- CN patch definitions write high addresses `0x08F00060..` (all_17/all_18, soul_ring) and
  `0x09000100..0x09001F18` (level_250, shared_character_warehouses, bundles).
- **Proposal:** the translation owns `0x09400000..` (zero fill); record every allocation in
  the build manifest.
- Name slots: CN mods write **slot 0** of some records (`equipment_set_balance_rework`,
  `weapon_balance_rework`, bundles: 28 records), never slots 1–5. No byte conflict, but those
  mod renames will not show in English. That is a phase-2 translation item.

## Next steps

1. Build tool: emit a declarative `ss2tools` patch for the CN baseline profile (items in the
   summary table), with a US profile under `translation/profiles/`.
2. Write the renderer half-width branch (ARMv4T Thumb, hook or in-place rewrite; the US
   function is 64 bytes shorter, so an in-place rewrite may fit).
3. Runtime: confirm the font RAM table capacity, then boot, title, dialogue, menus and item
   names in the native mGBA session, with the CN save copy.
4. Locate name entry and number formatting (§7).
5. Read the remaining 19 text-related changed functions; decode the changed graphics resources.
