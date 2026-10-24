# Phase 1 build: first English ROM on the CN baseline (2026-10-10)

Phase 1 step 3 (build tooling) and a first pass of step 4 (smoke test) from
[../PLAN.md](../PLAN.md). The change list comes from [PHASE1_SURVEY.md](PHASE1_SURVEY.md).
One addition: the dialogue-window frame port (§3), found when the first build was tested.

**Status:** `runtime_verified` for the named scenarios below only. Input is
`ROMs/Shining_Soul_II_CN_Baseline.gba` (SHA-256 `45ac38bb…`) and the source is
`ROMs/Shining_Soul_II_USA.gba` (`b31c19d2…`). Save copy: `Savestates/Fixture_CN_English.sav`.
No user acceptance yet.

| Build | Output | SHA-256 | Patch SHA-256 |
|---|---|---|---|
| 1 | `Build/ss2-en-phase1.gba` | `123204b53ac417218959fb2d367c066d7827db91a1561b8bf20d9d94e69f7678` | `6c799e56…` |
| 1b | `Build/ss2-en-phase1b.gba` | `f391f348f970fff7204ec0cdd25b0ce8194b1223a9c517d4060021b429d4c7c2` | `dd753a43…` |
| 1c | `Build/ss2-en-phase1c.gba` | `0db73d94de4a1f0f5b58af2dd9e9a87a02c41c4798e109d223c10f8b0cc7bd3c` | `fb10e256…` |
| 1d | `Build/ss2-en-phase1d.gba` | `4343a9c7fa9b6f9889a5fd9e334b807ebf98e200729810e92108b27d9bb953cb` | `eb35dd35…` |

Build 1b adds §5 (identifier hard lock fix: frame port and centring). The user
reported build 1 playable in dialogue and item names, and the identifier window
garbling then hard-locking (2026-10-10). Build 1c adds §5b (item detail view, Select on an
item: crash on the Valuing Scroll, overlapping text on other items). Build 1d adds §5c
(enchanted equipment names showed the enchant first: "of FearBeret").

## Reproduce

```sh
# from the repo root; needs llvm-mc + llvm-objcopy (system LLVM) and Capstone (Tools/.venv)
Tools/.venv/bin/python Tools/Scripts/make_english_patch.py
cd Tools
.venv/bin/python -m ss2tools build ../ROMs/Shining_Soul_II_CN_Baseline.gba \
    ../Build/ss2-en-phase1.patch.json ../Build/ss2-en-phase1d.gba \
    --profile profiles/ss2-cn-baseline.json --allow-static-candidate \
    --bps ../Build/ss2-en-phase1d.bps
.venv/bin/python ../Tools/Scripts/smoke_phase1.py ../ROMs/Shining_Soul_II_CN_Baseline.gba base
.venv/bin/python ../Tools/Scripts/smoke_phase1.py ../Build/ss2-en-phase1d.gba en1d
.venv/bin/python ../Tools/Scripts/smoke_identifier.py ../Build/ss2-en-phase1d.gba en1d
# item detail view (§5b): Valuing Scroll, then Force Ring
.venv/bin/python ../Tools/Scripts/smoke_state.py ../Build/ss2-en-phase1d.gba \
    ../Savestates/Valuing_Scroll_Crash.ss0 detail "10 2:SELECT 60 120 2:B 60"
.venv/bin/python ../Tools/Scripts/smoke_state.py ../Build/ss2-en-phase1d.gba \
    ../Savestates/Valuing_Scroll_Crash.ss0 ring "10 2:UP 15 2:RIGHT 15 2:SELECT 90 2:B 40"
# enchanted names (§5c): Beret of Fear, then Light Flail of Bane+6 and its detail view
.venv/bin/python ../Tools/Scripts/smoke_state.py ../Build/ss2-en-phase1d.gba \
    ../Savestates/beret.ss0 beret "10 2:SELECT 60 2:B 30"
.venv/bin/python ../Tools/Scripts/smoke_state.py ../Build/ss2-en-phase1d.gba \
    ../Savestates/beret.ss0 flail "4 2:LEFT 12 2:LEFT 12 2:LEFT 12 2:UP 12 2:RIGHT 12 2:SELECT 60 2:B 30"
```

`Build/` is git-ignored: the patch JSON (2.3 MB) and the BPS contain US text and
font bytes. Track the generator, not its output. `ss2tools build` refuses to overwrite, so
delete old outputs first. The generator is deterministic: same inputs and same `.s` give the same
patch. Each build's manifest (`<output>.manifest.json`) records its patch SHA-256.

## Files added

| Path | What |
|---|---|
| `Tools/profiles/ss2-us.json` | US ROM profile (`Archive/EU_Port/profiles` format; identity from `ss2tools identify`) |
| `Tools/Scripts/make_english_patch.py` | Generator. Hash-checks both ROMs and emits a `static_candidate` ss2tools patch for profile `ss2-cn-baseline`. |
| `Tools/Scripts/asm/render_glyphs.s` | New renderer glyph loop (ARMv4T Thumb; assembled with `llvm-mc -triple=thumbv4t-none-eabi`) |
| `Tools/Scripts/dialogue_frame.py` | In-place port of the US dialogue line-buffer enlargement. Run alone for a classification report. |
| `Tools/Scripts/smoke_phase1.py` | Two emulator scenarios. Writes screenshots and `checks.json` per run. |
| `Tools/Scripts/asm/center_width.s` | Centring width helper (tiles/2 for mixed CN/US codes), ARMv4T Thumb (§5) |
| `Tools/Scripts/frame_port.py` | Generic in-place port of US stack-frame enlargements; sp map derived from aligned code (§5) |
| `Tools/Scripts/centering.py` | Reviewed table of glyph-count call sites: 57 redirected, 13 kept (§5) |
| `Tools/Scripts/frame_scan.py` | Lists callers of a function whose CN and US stack frames differ (§5) |
| `Tools/Scripts/smoke_identifier.py` | Identifier scenario from the user's desktop state (§5) |
| `Tools/Scripts/frame_grow.py` | Reviewed growth of a CN-only stack layout (no US frame to copy); used for the item detail view (§5b) |
| `Tools/Scripts/smoke_state.py` | Replays `frames[:KEYS]` tokens from any user desktop state on any build, with screenshots (§5b) |
| `Tools/Scripts/trace_renderer.py` | Lists every renderer call (caller, string, x, row, glyph count) after replaying input from a state (§5b) |
| `Tools/Scripts/disasm_addr.py` | Thumb disassembly by CPU address range, one or more ROMs |
| `Tools/Scripts/asm/name_suffix.s` | Name bar: item name, space, enchant (US order), in place at CN `0x08060A20` (§5c) |

## 1. Patch contents (build 1: 1889 + 204 writes; build 1b adds 39 + 1 + 57, §5)

All writes carry full preimages and are checked by `ss2tools build`. Allocations are in the
translation-owned range `0x09400000..0x094FFFFF`. The baseline is zero-filled there; the generator
asserts this before each allocation. The patch's `allocations` block records:

| Address | Length | Contents |
|---|---|---|
| `0x09400000` | 0x98 | renderer glyph loop (code + literal pool) |
| `0x09400100` | 0x10040 | type-4 font section: count 9, offsets, US banks 0–1 as banks 7–8 at `+0x40`/`+0x8040` |
| `0x09420000` | 0x49B40 | slot-1 pointer table (1493 words) + re-encoded strings (4-byte aligned) |

Free after this build: `0x09469B40..0x094FFFFF`.

In-place writes (CN baseline addresses):

| Site | Change |
|---|---|
| `0x08001BA4` | `00 20` → `01 20`: language word init = 1 |
| `0x08006B8C` | slot-1 table pool word `0x083931AC` → `0x09420000` |
| `0x085286B8` | SSDT type-4 section offset `0x003B0E28` → `0x00ED7A60` (= `0x09400100 - root`) |
| `0x08019FCE` (10 bytes) | `ldr r3,[pc,#4]; bx r3; nop; .word 0x09400001` replaces the start of the glyph loop. The old loop body up to `0x0801A092` is now dead. |
| 1882 name slots | slot 1 (`record + 0x3E`) of every `name_tables.TABLES` record with a US name, re-encoded. Includes type 0x16 "Gold", whose CN slot 1 held the original Japanese. |
| 204 sites in `0x0805E8E4..0x0805F67A` | dialogue frame port (§3) |

Re-encoding (survey §3): glyph `c` → `c + 0x700`; `0xFFxx` controls unchanged; the 2 header
halfwords and the 2 halfwords after `0xFFFE` unchanged. **One exception:** US message 240 has a
single code `0x201` before a page break. That code is outside the US font (banks 0–1 only), so in our
layout it would index bank 9 (unset RAM). It is dropped and counted as `stats.dropped_codes = 1`.

## 2. Renderer

`render_glyphs.s` reproduces the CN glyph loop (`0x08019FCE..0x0801A092`) and adds a width test on
the bank index: `(code-1)>>8 >= 7` takes the US cell. That cell is 2 tilemap entries, 0x40 bytes
queued, x+1, and tile counter +0x40. Everything else stays the CN cell. Glyph bytes still go through
the game's DMA queue `0x08001348` (src, dst, len): **it is not a memcpy.** It appends to a
400-entry queue at `0x030023F8`/`0x030023FC`, so direct VRAM writes would have bypassed it. The loop
returns through the original epilogue `0x0801A094`. Centering (glyph-count width helper `0x0801A1F4`)
was unchanged in build 1, so short half-width labels sat left of centre (e.g. ring-menu "Item").
Fixed in build 1b (§5).

## 3. Dialogue window frame (new finding, `static_verified` + runtime)

First build symptom: in the save dialogue, line 1 showed its first 18 glyphs, then line 2's
text. Line 2 ran past column 31 and wrapped onto the next tilemap row.

Cause: the dialogue window function **CN `0x0805E8E4`** (US `0x0805E1DC`) keeps its two visible
lines in **stack buffers of 0x24 bytes** (CN) and re-renders them each frame through `render()`
(`0x0805F636` loop, stride 0x24). Lines are copied in up to each `0xFFFF` with no bound. English
lines of more than 17 glyphs overflow into the next buffer and then into the frame above
(`sp+0x4C` is a live struct). US uses the same function with 0x3C-byte buffers.

`dialogue_frame.py` aligns the two instruction streams with difflib on mnemonics. It accepts only
these changes and refuses if any other byte difference is unclassified:
- **sp offsets** (177 rewritten instructions, including the frame `sub sp`): `< 0x4C` same, `0x4C..0xAB` +0x30,
  `0xAC..0x104` +0x34, frame `0x108 → 0x13C`. The map is consistent at all 197 aligned US
  sites. It is applied to every sp-relative instruction of the CN function outside literal pools,
  including the CN-only "A"-prompt block at `0x0805F61C`.
- **line stride** 0x24 → 0x3C: `adds #0x24` (`0x0805E93E`, `0x0805F656`), `strh [r0,#0x24]`
  (`0x0805F368`), and ten `lsls #3; adds` → `lsls #4; subs` pairs (9x·4 → 15x·4) plus two dependent
  `adds r0,r7,r2` → `subs` (`0x0805EFEE`, `0x0805F1CE`).
- `mov rX,sp; adds rX,#0x80/#0x94` → `#0xB0/#0xC4` (buffer addresses), and the message-0x4DF
  copy limit `cmp r5,#0xa` → `#0xc` (`0x0805EB50`, `0x0805EB74`; that buffer grew by 4 bytes).

Kept CN on purpose:
- BL targets, literal pools and jump tables (74 data/BL differences).
- Actor-struct arithmetic: CN stride 0x154 (shifts) vs US 0x158 (`muls`).
- Player-name copy limit `cmp r5,#7` (US `#9`; CN name fields are CN-sized).
- Register-allocation differences in the render loop.
- "A" prompt draw order: CN draws it before the lines at x=0x1B, US after them at x=0x1C.
- **`0x0805EAC4: ldrh; adds r0,#0xEF; strh` (US `adds r0,#0x41`).** This is a `candidate` for the
  dialogue **number→glyph conversion** (survey §7). CN digit base `0xF0`, US `0x41`; our digits would
  be `0x741..0x74A`, which does not fit an imm8. Dialogue numbers stay full-width CN digits for now.

## 4. Smoke test (`runtime_verified`, scenarios as named)

Run directories are under `Build/runs/` (`base-*`/`en-*`, scenario `save-dialogue` and
`item-menu`). Contact sheet: `Build/phase1-smoke.png` (top baseline, bottom
English): file select, ring menu, two save-dialogue pages, item menu.

| Check | Baseline | English |
|---|---|---|
| Boot, title, file select, Normal Mode, load into the inn | ok | ok |
| Language word `0x03003510` | 0 | 1 |
| Font bank RAM `0x03005D60..` at scenario end | 7 entries, `0x03005D7C..0x03005D9F` zero | 9 entries: CN `0x088D94E8..0x089094E8` + `0x09400140`, `0x09408140`; rest zero |
| File-select prompts | Chinese | "Please select a file.", "A:Continue, SELECT:Delete", "Normal Mode", half-width |
| Ring menu labels | 道具/颜色/记录 | Item/Window/Save |
| Save dialogue (message 982), 2 lines per page | ok | ok after the §3 port (first build garbled) |
| "A" page prompt | shown | shown |
| Item name box (Herb) | 药草 | Herb |
| Save from the English dialogue (run copy only) | — | "Data saved.", returns to title |

Font RAM capacity: banks 7–8 (`0x03005D7C..0x03005D83`) still held the right pointers at the end of
both scenarios, and in the baseline the range up to `0x03005D9F` stayed zero. So nothing else
visibly uses it on these paths. It was checked at scenario end only, not watched on every write.

Seen but not fixed:
- **Title logo, "press start" banner and 单机模式 graphics** stay Chinese: baked-in graphics (survey §6).
- **Player name** shows 陈 (CN codes from the save; survey §7).
- Short labels are not centred (§2). Fixed in build 1b (§5).
- The item-name box did not change while the cursor moved in our input sequence; only one name
  (Herb) was compared. Equipment, shop and status-screen names are **not yet checked**.
- Not exercised: new game, a story dialogue with portraits, shops, number display, save/load
  persistence across reboot.

## 5. Identifier window hard lock (build 1b)

User report on build 1, with a desktop mGBA state `Savestates/Pre_Identifier_Woman.ss0` (untracked,
local) taken below the item identifier in town: talking to her garbles the screen and hard-locks
the game (music continues, no input). Reproduced in the native Session from that state
(`smoke_identifier.py`, sidecar written by the script; state romCrc32 `0xA7B2D640` = build 1).

Cause, two faults in the identifier window code (CN `0x080839A0`, US `0x08082FC4`; its second
window CN `0x08083C9C`, US `0x080832C4`), both `static_verified`:
- **Stack line buffers sized for Chinese.** CN `0x080839A0` builds lines in `sp+0x38` and
  `sp+0x60`, 0x28 bytes each (19 glyphs); `sp+0x88` is a live flag and the saved registers
  follow. US has 0x40 each (frame 0x8C → 0xBC). CN `0x08083C9C` has a typed-line buffer at
  `sp+0xA0` of 0x28 bytes, US 0x3C (frame 0xE0 → 0xF4). A 24-glyph English line overruns them.
- **Centring assumes full-width glyphs.** The renderer x is `15 - count(line)`, with
  `0x0801A1F4` counting glyphs. English lines longer than 15 glyphs give a negative x, and the
  renderer writes before the tilemap shadow `0x03005800`. Note that the shadow is only rows 0–19
  (0x500 bytes); `0x03005D14` (tile counter) and `0x03005D60` (font table) follow it. US calls
  the same counter (`0x0801A1C8`) and adds `lsrs r0,r0,#1`.

Fix (build 1b):
- `frame_port.py`: for each listed function it aligns CN and US (difflib on mnemonics) and
  derives the sp map from every aligned sp-relative pair. It refuses if the map is not a
  function, the delta decreases, or a CN offset lies between offsets with different deltas.
  Every other difference must be a BL, branch displacement, pool word or reviewed `keep`/`blocks`
  entry. Maps: `0x080839A0` `0x60→0x78`, `0x88→0xB8`, frame `0x8C→0xBC` (8 writes);
  `0x08083C9C` `0xC8..0xE0 → +0x14`, frame `0xE0→0xF4` (31 writes). Kept CN: the end-of-line
  cursor glyph (CN code 1 vs US 0xFF), the typewriter end test (`bhs` vs US `bhi`), and
  register allocation.
- `center_width.s` at `0x08019FD8` (0x20 bytes incl. literal): the old CN glyph loop
  `0x08019FD8..0x0801A093` is dead after the renderer hook. No branch or literal in the ROM
  targets it (scanned on build 1). It is the only free code within BL range (±4 MiB) of all
  callers, and it is recorded under `allocations.reused_dead_code`. It returns `tiles/2`:
  codes ≤ 0x700 count 2, ≥ 0x701 count 1. For pure English that is US's `count >> 1`, and
  for CN codes it is CN's count.
- `centering.py`: all 70 CN `bl 0x0801A1F4` sites were paired with US by hand (US partner
  recorded) and are re-checked on every run. 57 sites, where US halves, become `bl 0x08019FD8`.
  13 are kept: count compares, the typewriter index, and pixel widths identical in US. The one
  CN-only site, `0x08004B08` (`0x78 - count*4`), is kept as a `candidate`. Every site must be
  listed or the tool refuses. Small difference left: at CN `0x08080978`, US changed
  `16 - n` to `15 - ceil(n/2)`; we give `16 - floor(n/2)`, at most 2 tiles right.

Runtime (`runtime_verified`, build 1b, user state):
- Talk → "I've been expecting you." centred in the box. Item cursor shows "Herb" centred.
  B leaves the window, and the player walks in town afterwards.
- The game keeps running (frames and input). The same input on build 1 shows the garbage
  screen.
- `smoke_phase1.py` on build 1b: unchanged dialogue, and language word and 9 font banks as
  before. Ring-menu labels (Item/Window/Save) and the item-name box are now centred (§2 item
  closed).

Not fixed, seen in the state: BG0 row 11 holds text map entries (`0xF182…`) that are not in the
tilemap shadow. They show current glyph tiles as a ghost line ("…I look…you…" in town, "I've been
expecting" behind the identifier grid) and were drawn before the talk, by build 1. The state's
VRAM came from build 1, so the source is unknown. It is likely the "VRAM bleed" the user plans to
report, and possibly one of the functions below.

Other renderer callers whose US stack frame is larger (`frame_scan.py Build/align_cn_us.json
0x08019F30`, heuristic pairing). These are suspects for the same overflow class, not yet ported.
Their diffs also show text-layout changes (line limit `cmp #0xf` → `#0x1f`, row stride
`lsls #5` → `#6`, digit glyph constants), so each needs a per-function review:

| CN | US | Frame CN → US |
|---|---|---|
| `0x08005708`, `0x08005BC0` | `0x0800579C`, `0x08005C58` | 0xD0 → 0xF0 |
| `0x0802A7D0` | `0x0802A500` | 0x8C → 0x10C |
| `0x080606CC` | `0x0805FFC0` | 0x7C → 0xA4 (also the digit sites `adds #0xEF`/`#0x41`) |
| `0x08081D0C` | `0x080812D8` | 0x3C → 0x50 (ported in build 1c, §5b) |
| `0x08082BF4` | `0x08082214` | 0x3C → 0x64 (ported in build 1c, §5b) |
| `0x08087C68` | `0x08087258` (pairing unsure) | 0x114 → ? |
| `0x0800B808` | `0x0800B8A4` | 0x168 → 0x160 (smaller; probably compiler noise) |

User check: on 2026-10-10 the user played build 1b and reported the identifier "works". That makes the
identifier window fix `user_accepted`, for that window only.

## 5b. Item detail view (Select on an item; build 1c)

User report (build 1b): Select on the Valuing Scroll crashes. Other items' detail views show
overlapping or cut-off lines (a WindLong Sword+1: "e to flying" cut at the left, "+1 50% Dam" past
the right edge). State: `Savestates/Valuing_Scroll_Crash.ss0` (user-made, desktop mGBA,
romCrc32 `0xA2FE09B2` = build 1b, cursor on the Valuing Scroll in the item menu; untracked).

Headless replay of that state on build 1b did **not** hard-lock: B still left the view. But
`trace_renderer.py` showed why it can crash. The detail view is drawn every frame by CN
`0x08081EC8` (US `0x08081498`). Its helpers:

1. **CN `0x08081D0C` (US `0x080812D8`): one formatted line with number fields.** The line is
   built at `sp+0` in a 0x28-byte buffer, with x and row saved at `sp+0x2C`/`sp+0x30`. The
   Valuing Scroll's line 1 ("Used to appraise ? items", 24 glyphs + `0xFFFF`) overwrote them. The
   renderer was called with `x = 0x721` and `row = 0xFFFDFFFF` (glyph codes), so it wrote outside
   the tilemap into arbitrary RAM. That is the crash; where it lands depends on state, so it does
   not always lock. US grew the buffer to 0x3C. **Fix:** a frame_port spec (13 writes). Its sp map
   matches US for every offset, including the stack argument `sp+0x5C → 0x70`. Kept CN: the
   number→glyph base `adds #0xEF` / `cmp #0xEF` (CN digit glyphs; US `#0x41`).
2. **Description lines in CN `0x08081EC8` itself (CN-only layout).** CN keeps the two description
   lines on the stack at `sp+0x20C` and `sp+0x234` (stride 0x28, 19 glyphs), split at `0xFFFF`
   with no length bound. Line 2 ends at `sp+0x25C`, the saved item pointer. US has no such stack
   buffers. It uses a static IWRAM buffer `0x03000200` (2 × 0x40), which CN removed, so every US
   IWRAM address after it is +0x80 (survey §8). Force Ring: line 1 (24 glyphs) ran into line 2,
   lost its terminator, and was drawn as 48 glyphs at `x = -9`. Line 2 (28 glyphs) wrote over
   `sp+0x25C..`.
   **Fix (`frame_grow.py`, 94 writes):** the frame goes from 0x278 to 0x2A8. Lines move to
   `sp+0x20C`/`sp+0x24C` with stride 0x40, as US. Locals `0x25C..0x274` move by +0x30. Hand edits:
   - the three split loops' `adds r2,#0x28` → `#0x40`;
   - the terminator index `r8*0x28` → `lsls r0,r2,#6` (US uses the same);
   - the first loop's `adds r6,#0x28` → `#0x40`;
   - the epilogue `movs r3,#0x9e` → `#0xAA`;
   - the line-init block at `0x08081F6C`. Its `strh r1,[r0,#0x28]` cannot encode `#0x40`, so it
     is rewritten as `add r0,sp,#0x20c; add r3,sp,#0x2a0; ldrh r3,[r3]; strh r3,[r0];
     adds r0,#0x40; strh r3,[r0]; nop`. r0, r1 and r3 are dead afterwards.

   The tool refuses any sp offset outside the reviewed map. It also refuses any `add rd,sp,#a`
   followed by `[rd,#k]` that crosses a region boundary, unless that access is a listed edit.
   The CN and US offset histograms match one for one (CN `0x25C..0x274` ↔ US `0x20C..0x224`).
3. **CN `0x08082BF4` (US `0x08082214`): name/description window.** The name buffer is at
   `sp+0x14`. Its copy loop allows 31 glyphs, but CN has 0x28 bytes before the saved registers.
   US grew the frame from 0x3C to 0x64. **Fix:** a frame_port spec (2 writes: `sub/add sp`). It
   needed a reviewed jump table (`tables`). frame_port now accepts a table only when every CN word
   aligns to the US word at the same index. This function was not reached in the scenarios below.

Not changed: CN `0x080606CC` (US `0x0805FFC0`, 0x7C → 0xA4) draws the item name bar (row 18).
Its name buffer at `sp+0` has 0x54 bytes (41 glyphs) before the first local, which is enough
for English names. The function also differs in digit/symbol glyph constants (`0xA3`/`0x4C`,
`0xEF`/`0x41`, `0xB7`/`7`) and a jump table, so it needs its own review. It is a `candidate` for
the number-glyph work.

Runtime (`runtime_verified`, build 1c, the user's state):
- Valuing Scroll: "Used to appraise ? items" / "Many items are listed in it". The renderer gets
  `x = 3, row = 7`. B returns to the item menu.
- Force Ring (Up, Right, Select): "Generates Shining Force~" / "Cooperate for greater power!"
  (24 and 28 glyphs, `x = 3` and `x = 1`). B returns.
- Angel Wing, Prison Key, Red Shoe views open and close normally.
- `smoke_phase1.py` and `smoke_identifier.py` on build 1c: same results as 1b.
- Screenshot: `Build/detail-view-fix.png`.

Not covered in 1c: equipment detail views with stat lines (the user's sword screenshot). No weapon
or armour sits in the bag in this state. Covered in 1d from the beret state (§5c): the Light
Flail view draws cleanly on build 1d, whose only change from 1c is the name bar.

## 5c. Enchanted equipment names (build 1d)

The user reported (2026-10-11, state `Savestates/beret.ss0`, made on build 1c) that an
enchanted item shows as "of FearBeret" in the name bar (row 18; also the bar under the detail
view).

Cause (`static_verified`): the name bar builder CN `0x080606CC` (US `0x0805FFC0`) builds the line
at `sp+0` as icon, marker, then **enchant, then name** (Chinese puts the modifier first). The
enchant is a type-0x13 record (`[sp,#0x60]`, loaded through `bl 0x08006D98` with
`(item[+4]-1) | 0x130000`); its string is `record + lang*0x3E`. US copies the **name, then a
space (US code `0x51`), then the enchant** (US `0x08060314..0x08060391`). The US text for the
enchant already starts with the "of" ligature (code `0x12E`, ours `0x82E`), so only the order and
the space were missing.

Fix (`static_verified`): `Tools/Scripts/asm/name_suffix.s` replaces CN `0x08060A20..0x08060A8F`
(0x70 bytes, exactly the CN enchant copy plus the name copy) in place. The generator checks the
CN preimage of the whole range. The only branches into the range come from inside it, plus
`0x08060A12 beq 0x08060A20` to its start. It keeps the registers' meaning at the exit
(`0x08060A90 adds r0,r4,r5` = total glyphs), CN's 16-glyph name cap, and reads the language word
through CN's existing pool word `0x08060AF4`. Space is `0x751`, added only when the enchant
string is not empty. Longest English enchant: 8 glyphs (type 0x13 slot 1), so the line stays
within the 0x54-byte buffer (at most 1 + 1 + 16 + 1 + 8 + 3 + terminator = 31 glyphs). The
`+N` part (CN plus glyph `0xA3`, CN digits `0xEF+`) is unchanged.

Runtime (`runtime_verified`, build 1d, the user's beret state):
- Beret: "Beret of Fear" in the bag bar and under the Select detail view; B returns.
- Light Flail: "Light Flail of Bane+6" (20 glyphs, `x = 4`). Its detail view draws "Requires
  Flail …" and "Critical hit +4" with sane x/rows, and B returns.
- Other bag items (Shining Aura, Herb, empty slots) unchanged.
- `smoke_phase1.py`, `smoke_identifier.py`, and the §5b Valuing Scroll replay on 1d: same as 1c.
- Screenshot: `Build/name-suffix-fix.png`.

US prints a space before `+N` in some places; CN draws "Bane+6". Left as CN.

User (2026-10-11): confirmed the enchant order fix in play on build 1d and reported no remaining
bugs in their playthrough (`user_accepted` for the §5c name bar; the user also saw some smaller,
unreported issues disappear with the 1b–1d fixes).

## 6. Working notes for the next session

- **Desktop states.** The user's desktop mGBA `.ss0` files are PNGs with a zlib `gbAs` chunk. The
  ROM CRC32 is at offset 8 of the decompressed state. Load one in the Session by copying it into
  the run directory and writing an `ss2-mgba-state-v1` sidecar (see `smoke_identifier.py`).
  This is a diagnostic load: the state's VRAM/RAM came from whichever build the user ran.
- **Finding which code draws a string.** `trace_renderer.py ROM STATE "PRE-SEQ" FRAMES` calls
  `Session.run_until(0x08019F30)` in a loop. `run_until` stops on its 10M-instruction budget as
  well as on a hit, so check `r["hit"]`/`r["stop"]` rather than the PC (an early version stopped
  at the first budget stop and reported no calls). A garbage x or row (glyph-code values such as
  `0x721` or `0xFFFD....`) means a line buffer overflowed into the caller's saved arguments.
- **Replaying a user state.** `smoke_state.py ROM STATE TAG "10 2:SELECT 60 2:B 40"` takes
  `frames[:KEYS]` tokens (KEYS joined with `+`). There is one screenshot per token longer than one
  frame. Use one replay per item when sweeping a menu: moving onto an empty slot makes Select do
  nothing, and B then closes the menu.
- **CN-only stack layouts.** When CN's frame is larger than US's and the extra space is CN's own
  buffer, `frame_port.py` cannot copy US. Use `frame_grow.py` with a reviewed map and edits (§5b).
  Look for `adds rX,#0x28` strides, `lsls #2; add; lsls #3` (×0x28) indexing, and
  `[rd,#0x28]` accesses through a pointer to the buffer.
- **Stack frames.** `frame_scan.py` lists them; `func_pair_diff.py` diffs one pair;
  `frame_port.py` ports one once its `keep`/`blocks` are reviewed. Add a SPECS entry, run the
  tool alone until it stops refusing, then rebuild. The align file is
  `Build/align_cn_us.json` (git-ignored). To regenerate it:
  `python3 Tools/Scripts/align.py ROMs/Shining_Soul_II_CN_Baseline.gba "ROMs/Shining_Soul_II_USA.gba" --json Build/align_cn_us.json`.
- **Glyph-count call sites.** These are `bl 0x0801A1F4` in CN and `bl 0x0801A1C8` in US. Order-based
  pairing went wrong in `0x08004B08..0x0800C0EC` and `0x08026xxx..0x08066xxx`, so those pairs
  were fixed by hand in `centering.py`. A new CN site makes the tool refuse.
- **BG layout in the identifier window (CN, build 1b, from VRAM).**
  - DISPCNT `0x1D40`: mode 0, BG0/2/3 and OBJ on.
  - BG0 = text: char base `0x06008000`, map `0x0600E000`, glyph tiles from `0x0600B000` (tile `0x180`+), palette 15.
  - BG2 = picture: char base 0, map `0x0600D000`, 32x64.
  - BG3: map `0x0600F800`.
  - The tilemap shadow `0x03005800` covers BG0 rows 0–19 only. RAM after it is not tilemap
    (`0x03005D14` tile counter, `0x03005D60` font table), so a text row ≥ 20 or a negative x
    corrupts game state.
- **Dead code.** `0x08019FD8..0x0801A093` holds the centring helper (0x20 bytes). The rest, up to
  `0x0801A093`, is still free code space within BL range of the main code.
- **Scratch.** Session scratch scripts are not needed. Everything reusable is in `Tools/Scripts`.

## Next

1. Port the remaining frame-changed functions in the §5 table (with `frame_port.py` plus a
   per-function review), each with a scenario that reaches it. Find what draws BG0 row 11.
   Equipment detail view: one weapon checked (§5c); armour and the user's sword not yet.
2. More scenarios: new game intro dialogue, shop, equipment and status names, reload after save.
3. Number glyphs: confirm `0x0805EAC4` at runtime (message with `0xFFF5`/`0xFFFB`), then find the
   HUD/shop digit code. Codes `0x741+` need a register constant, not an imm8.
4. The other text functions in survey §8. The dialogue frame was one of them; re-run
   `func_diff.py` and cross off `0x0805E8E4`.
