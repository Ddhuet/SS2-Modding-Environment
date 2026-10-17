# Text architecture: JP vs US vs EU

Question investigated (2026-10-10): for an English translation of the JP/CN base ROM, is the
**US** or the **EU** ROM the better source of English text and of a translation structure?

**Answer: US, by a wide margin.** The JP engine already contains a six-slot language system,
and the US localization simply fills slot 1 with English in JP's own format. EU re-engineered
the format (8-bit text, repacked data tables, one 256-glyph font) and its English is the US
English with about six wording edits. EU's extra languages could later be converted into JP's
spare slots, but EU's *structure* moves away from what the Chinese mods build on.

All facts below are static and were verified against the retail ROMs listed in
[ROMs/REQUIRED_ROMS.md](../../ROMs/REQUIRED_ROMS.md). Run
`python3 translation/tools/text_survey.py ROMs` to reproduce the tables and checks. "JP" means
`ROMs/Shining_Soul_II_JP.GBA`. **Despite its name, that file is not pristine Japanese.** It is
the 16 MiB Chinese localization on the JP cartridge (AU2J), byte-identical to
`eu/inputs/ss2-cn-source.gba`, so its slot-0 text and font are Chinese. The CN mods' actual
baseline is `eu/inputs/ss2-cn-baseline.gba` (`SS2_SC_bug_fixed.GBA`, 32 MiB, SHA-256
`45ac38bb…`). It is the same ROM with about 100 small changes: a few code fixes, revised
slot-0 text, and the upper 16 MiB zero-filled. Every address and table below is identical in
both files (checked). A pristine Japanese ROM is not in the repo. Nothing here has been
tested in an emulator yet.

## 1. Shared resource archive: SSDT

All three ROMs share one resource archive format: magic `SSDT`, version 1, header size `0x24`.
Resource IDs are `(type << 16) | index`, and the lookup dispatches on 23 types (0x00–0x16).

| | JP | US | EU |
|---|---|---|---|
| Main SSDT root | `0x085286A0` | `0x0856F954` | `0x08518938` |
| Lookup thunk (`id → ptr`) | `0x08006D98` | `0x08006E34` | `0x08007290` |
| Lookup core | `0x080069C0` | `0x08006A5C` | `0x08006EE0` |
| Second SSDT (shared, identical header) | `0x08DF31E4` | `0x08E1AB98` | `0x08E3FB54` |

- **Types 0–6** are archive sections (`root + root[2+type]`).
- **Type 4 is the font**, one 0x8000-byte bank per 256 glyphs. Section sizes: JP `0x38020` (7 banks, 1792 glyphs), US `0x1000C` (2 banks), EU `0x8008` (1 bank, 256 glyphs).
- **Types 0x0B–0x13 and 0x15** are fixed-stride typed data tables (items, equipment, monsters, …): `base + (id & 0xFFFF) * stride`.
- **Type 0x14 is text**, selected by a **language word** (see §2).
- **Type 0x16** is a single fixed pointer.

## 2. Language slots (resource type 0x14)

The type-0x14 handler reads a RAM language word and jumps through a per-language case table.
Each case selects a pointer table of messages.

| | Language word | Slots | Entries per slot |
|---|---|---|---|
| JP | `0x03003510` | 6 | `1493, stub, stub, stub, stub, stub` |
| US | `0x03003590` | 6 | `1493, 1493, stub, stub, stub, stub` |
| EU | `0x03003470` | 5 | `1493 × 5` |

- **The JP engine was built for six languages.** In the CN-on-JP ROM only slot 0 is filled, with Chinese that replaced the original Japanese. Slots 1–5 are three-entry stubs.
- **US keeps slot 0 and puts English in slot 1.** The US slot 0 still holds the original Japanese, even though the US font no longer contains kana. Only 114 of 1493 strings are byte-equal to the CN slot 0, as expected, since CN replaced Japanese with Chinese.
- **EU drops Japanese** and fills 5 slots. Slot 0 is English, slot 1 French; the remaining three are presumably German/Italian/Spanish, not individually checked.
- **Message IDs line up.** For JP slot 0 vs US slot 1:
  - name-placeholder (`0xFFFC`) presence agrees in 1475/1493 messages;
  - message lengths correlate at r = 0.991.
  - US slot 1 and EU slot 0 hold the same messages in the same order.

Language-table pointers:

| Slot | JP | US | EU |
|---|---|---|---|
| 0 | `0x08391260` | `0x0838F7C0` | `0x0838AFF0` |
| 1 | `0x083931AC` | `0x083D8D18` | `0x084009A4` |
| 2 | `0x083949B8` | `0x083DBC6C` | `0x08428C38` |
| 3 | `0x083951BC` | `0x083DC470` | `0x083D8AEC` |
| 4 | `0x083939B0` | `0x083DAC64` | `0x083B0B4C` |
| 5 | `0x083941B4` | `0x083DB468` | — |

## 3. String format

- **Container (all versions):** `0x0000 0x0001` prefix, then codes, then a terminator.
- **Control words:** `0xFFFD` end, `0xFFFF` line break, `0xFFFC` player name. Others seen in US English: `0xFFFE` (2651 uses), `0xFFF7`, `0xFFF6`, `0xFFFA`, `0xFFF8`; semantics not yet mapped.
- **US English** uses JP's 16-bit code units: A–Z `0x01–0x1A`, a–z `0x21–0x3A`, 0–9 `0x41–0x4A`, space `0x51`, `.` `0x4F`, `,` `0x50`, `!` `0x3B`, `?` `0x3C`, `'` `0x20`.
  - 151 messages also use glyph codes above `0xFF` (second font bank).
- **EU** uses the same code values narrowed to single bytes, with control words narrowed too (`0xFF`, `0xFD`, `0xFC`, …).
  - Accented letters occupy other byte codes (e.g. `é` = `0x54`).
  - After narrowing, **1336 of the 1342 comparable messages are identical to US English**. Example edits: "Power Wine"→"Power Potion", "Sorceress"→"Wizard".
- **JP and CN** use the same container with 16-bit codes over a 1792-glyph font. The CN mods add custom codes (e.g. `0x7F01`, per the HugeApplePack notes) and halfword glyph IDs.

## 4. Typed data tables (names inside records)

> **Corrected 2026-10-10 by [PHASE1_SURVEY.md](PHASE1_SURVEY.md) §2:** records have **six**
> 0x3E-byte name slots (`+0x00..+0x173`, one per language word value), not two; the 0x0F/0x10
> strides were swapped in this table (fixed below; EU row not re-checked); and 14 tables, not
> only the typed ones, carry names.

Strides per resource type:

| Type | 0x0B | 0x0C | 0x0D | 0x0E | 0x0F | 0x10 | 0x11 | 0x12 | 0x13 | 0x15 |
|---|---|---|---|---|---|---|---|---|---|---|
| JP | 0x19C | 0x194 | 0x194 | 0x198 | 0x18C | 0x184 | 0x188 | 0x17C | 0x188 | 0x180 |
| US | 0x19C | 0x194 | 0x194 | 0x198 | 0x18C | 0x184 | 0x188 | 0x17C | 0x188 | 0x180 |
| EU | 0xC4 | 0xB8 | 0xB8 | 0xB8 | 0xB4 | 0xAC | 0xB0 | 0xA4 | 0xB0 | 0xA8 |

Type 0x0B, record 0 (Short Sword), as an example:

- **CN-on-JP:** Chinese name (u16) at `+0x00`: two glyphs (`0x0190 0x0166`) and a `0x0000` terminator, followed by leftover bytes of the original Japanese 「ショートソード」. A second 0x3E-byte name field at `+0x3E` is **present but empty**. Data from `+0x174`.
- **US:** same layout. Original Japanese name at `+0x00`, English name at `+0x3E`; data at `+0x174` is byte-identical to CN-on-JP.
- **EU:** five inline 20-byte, 8-bit names (EN/FR/DE/IT/ES) at `+0x00..0x63`, then repacked data. Every typed table is shorter, so every record offset differs from JP.

So the JP data format already reserves an English name field per record, and the US fills it
without moving anything. Gameplay data offsets used by CN mods (e.g. the template effect-table
offsets 0x188/0x180/… quoted in the pack) are therefore the same in US and JP records, and
different in EU. That supports the HugeApplePack's +4 RAM shift being a RAM/allocation matter,
not a ROM-table one.

## 5. Font and renderer

- **Glyph format (all versions):** 128 bytes per glyph slot, 4bpp.
- **US:**
  - The renderer copies 64 bytes, i.e. an 8×16 half-width cell with 8-px advance.
  - Bank pointers are cached at RAM `0x03005DF0`.
  - Font banks are `0x08928E9C` and `0x08930E9C` (resource `0x40000+i`).
  - Only about 85 glyphs are defined; the kana slots are blank.
- **EU:** the same Latin glyph bitmaps sit in its single bank, plus accented letters. Its text renderer contains the US instruction sequence (signature at EU `0x0801A4A4`), so EU inherited the US renderer changes.
- **Corrected by [PHASE1_SURVEY.md](PHASE1_SURVEY.md) §4:** the renderer is CN `0x08019F30` / US `0x08019F44`; CN draws 16×16 full-width cells, US 8×16; the occupancy loop is in both.
- **JP (original note):** the renderer around `0x08019F90` differs structurally from US `0x08019F62` (US adds a cell-occupancy loop over RAM `0x03005D90` and changes the copy sizes). JP's exact glyph width has **not yet been confirmed**. Treat "US changed the renderer for half-width Latin" as the working hypothesis.
- **Glyph-code collision:** English codes `0x01–0x51` index the same font slots that the JP/CN font uses for its own glyphs, and font banks are global, not per-language. US resolved this by replacing the font, which broke its own Japanese slot. A JP-base English build that must coexist with Chinese should instead put Latin glyphs in free code space (or a language-conditional bank) and re-encode the transplanted English. That is easy because the transplant is scripted.

## 6. Conclusions for the translation project

1. **Use US English as the source text.** It matches JP's format, code unit width, control words and message IDs. EU English is the same text in a lossy 8-bit form.
2. **Transplant into language slot 1 instead of overwriting slot 0.** Chinese stays in slot 0 and English goes in slot 1, selected by the language word (`0x03003510` in JP). A bilingual CN/EN ROM with a language toggle looks structurally possible. To verify: where JP initializes the language word and whether any code assumes slot 0.
3. **Item and other record names:** copy the US `+0x3E` name fields into the empty JP fields. Also check how the name renderer picks `+0x00` vs `+0x3E`; probably by the language word.
4. **Fonts:** port the US half-width renderer change and add Latin glyphs without destroying JP/CN glyphs (see §5).
5. **EU stays useful for languages, not structure.** JP has 6 slots: JP/CN plus five more. EU's FR/DE/IT/ES text could be widened back to 16-bit and placed in slots 2–5 later. Record names would need extra fields, because JP records have only two name slots.
6. **Not yet checked:**
   - graphics with baked-in text (title, menus);
   - the second SSDT archive;
   - how the CN mod chain inserts Chinese text and font: slot 0 overwrite vs new tables (see `reference_data/汉字码表.txt` and the CN build chain);
   - US/JP gameplay code differences outside text.
