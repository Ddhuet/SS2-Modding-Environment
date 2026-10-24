# Game performance notes (Shining Soul II, CN baseline / English ROM)

Started 2026-10-17. Measurement only; nothing in the ROMs or the existing project was changed.
The profiler lives in [`Tools/perf/`](Tools/perf/README.md).

**Units.** Everything is in **CPU cycles per frame**. One frame is **280,896 cycles**. The
percentage after a figure is its share of that frame budget, so "10,000 (3.6%)" means 3.6% of a
frame. If the total for a frame exceeds 280,896, the game drops that frame (slowdown).

## TL;DR

* **The game runs ROM code at slow settings, by accident.**
  * Init writes `WAITCNT = 0x4014` (ROM 3/1 wait states + prefetch buffer), then calls BIOS
    `RegisterRamReset(0xE0)` on the very next line, which clears it to 0. The flash-save code
    later ORs in its SRAM bits, so the game lives at `WAITCNT = 0x0003` (ROM 4/2, no prefetch).
  * Forcing what the developers intended (`0x4017`) in the emulator gives:

    | | Shipped | Forced `0x4017` |
    |---|---|---|
    | Average frame | 194,651 (69.3%) | 128,430 (45.7%) |
    | Peak frame | 230,661 (82.1%) | 154,817 (55.1%) |

    That is about **1.5× for the whole game**, with an identical final screen after 300
    frames. The patch is 14 bytes (R1), now `waitcnt_fix`. Hardware check pending.
* With 5 enemies **there are no lagged frames yet** (0 of 300). The peak frame uses
  230,661 (82.1%), leaving about 50,000 cycles spare.
* **Enemies:** about 7,700 per enemy when standing or fighting, about 15,000 when walking. The
  difference is the move-with-terrain-collision step.
* **Big fixed costs:**

  | Cost | Cycles/frame (% of frame) |
  |---|---|
  | Player task, even idle | 32,492 (11.6%) |
  | &nbsp;&nbsp;of which the equipment-stat rebuild, every frame | 9,481 (3.4%) |
  | Sound driver | 31,509 (11.2%) |
  | Other ~18 tasks | 29,195 (10.4%) |
  | VBlank copy queue | 16,221 (5.8%) |
  | Sprite build | 10,472 (3.7%) |
  | Scheduler | about 8,000 (2.9%) |

* **Your 9-patch modpack costs +10,772 (3.8%) in this scene, all from the HP bars mod.** The
  other 8 patches cost exactly 0 here.
* **The usual suspects:**
  * Thumb from ROM: **yes**, made much worse by the WAITCNT bug.
  * O(n²) collision: **not found**.
  * Redundant OAM/palette uploads: **small**, about 2,000 (0.7%).
  * BIOS division: **negligible**. All divides together cost about 6,500 (2.3%).

## Setup

| Item | Value |
|---|---|
| ROM under test | `Patch_Manager/Output_ROM/ss2-en-phase1d_9_patches_20261013-105606.gba`, sha256 `7af8d637…b74b7e` (English phase1d + counter_fix, enemy_hp_bars, guaranteed_fusing, normal_attack_charge_accuracy, persistent summons, respec, stackable_consumables_104b1_consumefix, status_resistance_overflow_fix, town_return_heal) |
| Control ROM | `Build/ss2-en-phase1d.gba`, sha256 `4343a9c7…53cb` (no mods) |
| State | `Savestates/5_mobs.ss0`, sha256 `96a8e959…624c`: jungle, 5 hostiles closing in. No input. |
| Emulator | the project's mGBA 0.10.5 core, HLE BIOS, `idleOptimization=ignore` |
| Window | load state, 2 unprofiled frames, 298 profiled frames |

All addresses here are identical in the CN baseline, the English ROM and the modpack. I checked
the bytes of the init sequence, scheduler, `0x0800AC18`, `0x08013864`, `0x0801DE28` and the
libgcc divides in all three. The only exceptions are the HP-bar hook and code (`0x08001208`,
`0x080BC300`, `0x0900xxxx`).

## How a frame works

* **Cooperative tasks** (`0x08000274` create, `0x080002E0` scheduler loop, `0x080003F0`/`0x080003F4`
  yield, `0x08000420` wake-by-event).
  * Task records are linked lists: head `[0x030012D8]`, current `[0x030012D4]`, scheduler `sp`
    saved at `[0x030012E0]`.
  * Record fields: `+0` next, `+4` state (1 runnable, 2 running, 3 yielded, 4 waiting),
    `+0xC` resume `lr`, `+0x10` saved `sp`, `+0x14` wait key, `+0x18` prev.
  * The player, each enemy and many effects are tasks, each with its own stack. About 26 exist in
    this scene, with 22.6 yields per frame.
* **After all tasks have run, the scheduler calls `0x08001204` (end of frame).** Its steps:
  1. sprite build `0x08008B18` (hooked by HP bars via `0x080BC300`);
  2. `0x0800086C`;
  3. **`VBlankIntrWait`** (`0x080B9AA0`);
  4. after the wait: buffer clears, wake event 1, queue OAM shadow → OAM (1 KB), `0x0801A114`.
* **VBlank IRQ (the only IRQ): about 48,500 (17.3%).** It runs:
  * m4a sound (`0x080B870C` → `SoundMain 0x080B79F8` → IWRAM ARM mixer `0x030011C8..` and
    reverb `0x03000EF0..`);
  * the VRAM copy queue `0x08001394`. It walks the `{src,dst,ctrl}` entries queued by
    `0x08001348` and runs them with BIOS CpuFastSet/CpuSet.
* **Lag rule.** `VBlankIntrWait` waits for the *next* VBlank, so whenever tasks + frame end +
  IRQ exceed 280,896 cycles the frame is dropped. The IRQ steals its cycles from whatever is
  running.

## Results

### Load per frame

| | Modpack, as shipped | Modpack, WAITCNT=0x4017 (what-if) | English, no mods |
|---|---|---|---|
| Busy, average | 194,651 (69.3%) | 128,430 (45.7%) | 183,879 (65.5%) |
| Busy, peak frame | 230,661 (82.1%) | 154,817 (55.1%) | 219,889 (78.3%) |
| Lagged frames / 298 | 0 | 0 | 0 |

Other WAITCNT settings on the modpack, average busy:

| WAITCNT | Settings | Average busy |
|---|---|---|
| `0x0317` | 3/1, no prefetch | 156,000 (55.7%) |
| `0x4303` | 4/2 + prefetch | 165,000 (58.8%) |

Both halves of the setting matter.

### Where the cycles go

| Category | Modpack (shipped) | Modpack + WAITCNT 0x4017 | English, no mods |
|---|---|---|---|
| 5 enemy tasks | 54,693 (19.5%) | 32,112 (11.4%) | 54,693 (19.5%) |
| Player task (idle) | 32,492 (11.6%) | 19,523 (7.0%) | 32,492 (11.6%) |
| &nbsp;&nbsp;of which stat rebuild `0x0801DE28` | 9,481 (3.4%) | 5,640 (2.0%) | 9,481 (3.4%) |
| Sound driver (VBlank IRQ) | 31,509 (11.2%) | 27,587 (9.8%) | 31,508 (11.2%) |
| Other ~18 tasks | 29,195 (10.4%) | 17,948 (6.4%) | 29,195 (10.4%) |
| VRAM/OAM/palette copy queue (IRQ) | 16,221 (5.8%) | 13,414 (4.8%) | 13,631 (4.9%) |
| Sprite build `0x08008B18` | 10,472 (3.7%) | 5,942 (2.1%) | 10,448 (3.7%) |
| HP bars mod, own code | 8,161 (2.9%) | 4,801 (1.7%) | 0 |
| Scheduler + yields | 6,157 (2.2%) | 3,304 (1.2%) | 6,153 (2.2%) |
| Frame end, rest | 4,839 (1.7%) | 3,043 (1.1%) | 4,839 (1.7%) |
| Other IRQ | 982 (0.3%) | 812 (0.3%) | 982 (0.3%) |
| **Total busy, average** | **194,651 (69.3%)** | **128,430 (45.7%)** | **183,879 (65.5%)** |

These rows sum to the total within 0.1%.

Code location, by share of busy cycles:

| Code | Share of busy cycles |
|---|---|
| ROM Thumb `0x08…` | 75% |
| ROM `0x09…` (HP bars) | 3.7% |
| IWRAM ARM (sound mixer) | 12.3% |
| BIOS (copy loops, IRQ dispatch) | 9.3% |

### Enemies

Per-enemy cost over time, shipped WAITCNT (`perfreport.py timeline`):

| Frames | `0x03004380` | `0x03004358` | `0x03004308` | `0x03004330` | `0x030042E0` |
|---|---|---|---|---|---|
| 0–59 | 14,499 | 9,976 | 15,034 | 14,835 | 8,302 |
| 60–119 | 9,807 | 7,881 | 14,735 | 14,844 | 8,176 |
| 120–179 | 7,668 | 9,966 | 12,823 | 14,732 | 8,556 |
| 180–239 | 8,499 | 7,888 | 13,094 | 15,004 | 7,972 |
| 240–297 | 7,682 | 9,198 | 11,788 | 11,486 | 8,825 |

* **Baseline, about 7,700 per enemy.** The AI coroutine (resumes at `0x08017D40`; one huge
  function using `bl` as a far jump into `0x08018D1E`, `0x08018BD6`) plus the following, with no
  single hot loop:
  * `0x08016968` (about 2,000);
  * `0x0801C540` (about 1,400, an 8-slot loop);
  * `0x08017924`, `0x080176B8`;
  * `0x08066110 → 0x0805A1E4`;
  * `0x08007378`;
  * record lookups `0x08006D98 → 0x080069C0` (about 250 each).
* **Walking adds about 7,000 per enemy.** That is `0x08013864`, *move actor with terrain
  collision*, about 5,700 per call (decompiled: `Docs/Analysis/historical_decompilation/decompiled/08013864_FUN_08013864.c`).
  * It turns speed + direction into dx/dy from tables, with y scaled by `__divsi3(…, 0x130)`.
  * It then calls **`0x0800AC18`, a terrain probe (about 2,200 per call)**. The probe reads the
    3×3 map tiles around the target into a stack array, then dispatches on the tile type via a
    14-way jump table.
  * If blocked, it tries the next direction, up to 3 probes per move.
* **Not O(n²).** No actor-vs-actor loop is hot, so per-enemy cost should grow linearly with
  enemy count.
* **Lag at 6+ enemies.** You report bad lag depending on enemy type. Expected costs per extra
  enemy: 8,000–15,000 (AI), +1,800 (HP bar), more for enemies that cast, shoot or spawn effect
  tasks, plus about 5,000 per extra sound playing. A state from a laggy fight would pin it down:
  `ss2prof` marks every dropped frame, and `perfreport.py tasks`/`timeline` show who used the
  cycles.

### Player task (idle, no input): 32,492 (11.6%)

* `0x0800F8D0` (12,014), which leads to:
  * `0x08010FA4` (5,254);
  * `0x080136C0` (2,314);
  * `apply_pending_player_damage_and_test_lethal` (1,221).
* `0x0801DB74 → 0x0801DE28` (9,481): the full stat rebuild every frame (next section).
* `0x0800CEA4` self 3,538, `0x08013610` 1,308, `0x0805DA4C` 848.

### Equipment-stat rebuild: why it runs every frame, and what feeds it

`0x0801DE28` (called every frame from `0x0801DB74` in the player task) calls
`rebuild_player_equipment_status` `0x0801B690` unconditionally. It then clamps HP to the new
max, and refreshes the HUD if the max-HP fields `+0x6C`/`+0x6E` changed.

There is **no existing "stats changed" flag or event**. The game is built around recomputing
every frame. A few one-off callers exist: new-character init `0x0801A8B4` → `0x0801AE24`, the
player task's own init (`0x0800CDC4`), the equip menu preview (`0x0807ACBE`, `0x0807BB30…`,
`0x08081A1A…`). None of them covers combat changes.

**Inputs of the rebuild** (static reading of the historical decompile; addresses
re-verified only for the call sites):

| Input | When it changes |
|---|---|
| 6 equipped items (weapon by bag slot `+0x70`, armour/shield/helm/accessories/ring at save `+0x10A`/`+0x11A`/`+0x12A`/`+0x13A`/`+0x14A`), each with enchant/option (`+0x7C`…) and present/broken bytes (`+0x80`/`+0x81`, `+0x110`, `+0x120`, `+0x130`) | menus/shops/bank; **death drops one piece**; broken flags may flip in combat |
| Base stats block (save `+0x18..+0x34`), class/level (`+0x10`, `+0x12`) | level-up, stat allocation, respec |
| Weapon-skill levels (`0x0801DEB0`, `0x0801DC54` per weapon kind) | skill level-up in combat |
| **8 attached-effect slots** at actor `+0x3C` (stride 0x28). An effect can point at another actor (0..3) and dispatch on that actor's **current state** (`+0x12`, flag `0x2000` at `+0x38`). | **any frame in combat**: buffs and debuffs from party, summons or enemies starting, ending, or the source actor changing state |
| Incapacitated / pending-death state (`0x0801DD8C`) | dying, being revived |

So equipment is only part of it. The effect slots read **live state of other actors**, which is
probably why the developers recompute every frame.

Options, from safest:

1. **Input signature.** Each frame, build a small signature: the equipped item ids and options,
   base-stats block, level, skill levels, the 8 effect slots minus their timers, the referenced
   actors' `+0x12`/`+0x38`, and the death flag. Rebuild only if it differs from last frame's.
   * The compare costs maybe 800–1,500 in ROM Thumb (much less in IWRAM ARM). That saves
     roughly 8,000 (2.8%) shipped, 4,500 (1.6%) after R1, in the common case.
   * The risk is missing an input. It needs a careful pass over `0x0801B690` and the jump-table
     cases (`0x0801BB7A`, `0x0801BEC8`, `0x0801C2F2`) plus a runtime A/B. The A/B compares
     outputs `+0x40..+0x5F`/`+0x60..+0x8F` every frame across long play, with buffs, death,
     level-ups and equip changes.
2. **Every Nth frame.** Simpler, but buffs and death take effect up to N frames late. It has
   the same hidden risk: some other code might write into the output block and rely on the
   rebuild resetting it each frame. Check this before either option.

### Sound driver (m4a): 31,509 (11.2%). Is there performance to save?

SoundInfo `[0x03007FF0] = 0x03006540`:
* 10,512 Hz mixing, 176 samples per frame;
* up to 8 PCM channels;
* reverb on (value 49).

About 3 channels were playing in this window.

| Part | Cycles/frame | Note |
|---|---|---|
| IWRAM ARM mixer `0x030011C8..0x03001230` | ~18,000 | about 29 cycles per sample per channel, so **about 5,000 per active channel**. It reads samples from ROM, so it gets cheaper with R1. |
| Reverb pass `0x03000EF0..0x03000F28` | ~4,700 | measured by poking SoundInfo `+0x05` (`0x03006545`) to 0 |
| MPlayMain-like `0x080B8084` and `0x080B914C` (sequencer, 4 players, ROM Thumb) | ~7,000 | |

**Verdict: it's normal for an m4a game, and the mixer is already ARM in IWRAM.** The
driver is not wasteful; any saving trades away sound:
* **Reverb off:** −4,700 (1.7%). The audible change is subtle (less echo). This is the cheapest
  real saving.
* **Lower max channels**, e.g. 8 → 6: caps the worst case in big fights at −5,000 per channel
  not mixed. Some sounds would cut out under load.
* **Lower mix rate**, e.g. 10,512 → 7,884 Hz: about −25% of mixer and reverb cost
  (roughly −5,500). Audibly duller.
* **R1** already removes about 3,900 from the driver for free.

Worth noting for the lag hunt: the driver cost **varies**. A fight with 6–7 sounds at once
costs about 15,000–20,000 more than this scene.

### VBlank copy queue: 16,221 (5.8%), about 8.9 KB per frame

| Data | Size per frame | Calls per frame | Note |
|---|---|---|---|
| Sprite tiles ROM → OBJ VRAM | 3,389 B | 6.6 | animation frames streamed every frame |
| Palettes IWRAM → PAL | 2,048 B | 2 | both 1 KB banks, every frame |
| IWRAM fills | 1,152 B | 3 | |
| OAM | 1,024 B | 1 | |
| **HP bar tiles EWRAM → OBJ VRAM** | **640 B** | **5** | **HP bars mod only** |
| BG bits | small | | |

### HP bars mod: +10,772 (3.8%)

* Own code: 8,161. That is a fixed scan of 5 records (about 1,700), `0x09004512` about 1,200 per
  bar, and helpers.
* Extra uploads: +2,590 in the copy queue.

**Does the bar have to be redrawn every frame?** Three separate things happen:

1. **Positioning the bar:** one OAM entry (x, y, tile number) per bar. It must happen every
   frame because the enemy moves, but it is cheap, a few dozen cycles. The game rebuilds the
   whole OAM shadow every frame anyway.
2. **Drawing the bar's pixels:** filling 128 bytes of 4bpp tile data with the right amount of
   bar. The mod **already caches this**: the fill routine `0x09004810` keeps the last drawn width
   per pool slot (`[0x030023FC]` heap block) and skips the fill when it is unchanged. In the
   5_mobs run the fill path (`0x0900482E..0x090048C4`) executed **0** cycles.
3. **Uploading the pixels:** a 128-byte EWRAM → OBJ VRAM copy per bar, every frame. The diff of the
   copy logs (modpack vs English) shows about 5 per frame. Their **VRAM address changes from frame
   to frame** (`0x06010C00`, `…0E00`, `…1000`, …): the mod takes tile space from the game's
   per-frame OBJ allocator (counter at `[0x03002958]`), which hands it out again every frame, so
   the upload cannot be skipped.

Where the 8,161 own cycles actually go: `0x09004512` (bounds checks, OAM entry, queue call) about
4,150 self (about 830 per bar), the queue wrapper `0x0900450E` about 1,100, the 5-record scan, the fix-1 helper and
the HP ratio divide. That is all ROM Thumb in `0x09xxxxxx`, so `waitcnt_fix` cuts it too.

**Verdict (2026-10-17): no HP-bar patch.** The only remaining saving is the upload (about 2,600)
plus a little overhead. Getting it needs fixed, reserved OBJ tile slots that the game's
allocator never reaches, i.e. an audit of every OBJ VRAM user. If that audit is wrong, the result
is exactly the kind of sprite artifact we want to avoid. That's not worth about 1% of a frame.
Skipping the pass when no hostile is live saves nothing in fights, which is when it matters.

### Scheduler: about 8,000 (2.9%)

* List walk `0x080002EE..0x08000300`: about 57 cycles per task node from ROM.
* Each yield/resume costs about 300 cycles.
* "Mark all runnable" (`0x08000338`) and `wake(1)` (`0x08000420`) each walk all ~26 tasks.
* It scales with task count.

### Division

| Routine | Calls per frame | Cost per call | Total per frame |
|---|---|---|---|
| BIOS `Div` (SWI 6) | 8.3 | ~120 | 1,011 |
| BIOS `ArcTan2` (SWI 0x0A) | 7.7 | ~130 | 1,018 |
| libgcc `__divsi3` `0x080BA8A4` (ROM Thumb) | 8.2 | ~350 | 2,924 |
| `0x080BAAF4` (`__modsi3`/`__udivsi3`?) | 2.8 | ~900 | 2,586 |

About 7,500 (2.7%) in all. Not a main culprit.

### The other WAITCNT writer at `0x08FE00xx`

This is **dead devkit code: Nintendo's IS-AGB debugger / AGBPrint stub**, not part of the
game.

* It sits at `0x08FE0000..~0x08FE1600` in **all** ROMs: US, JP/CN 16 MiB, the CN baseline, the
  modpack.
* Its literals point at the IS-AGB debugger's hardware window (`0x09FE20F8` AGBPrint struct,
  `0x09FE2FFE` protect register, `0x09FE2000…`), which does not exist on retail carts.
* Nothing in the game's code (`0x08000000..0x080BFFFF`) calls it or holds a pointer to it.
  The handful of `0x08FExxxx`/`0x09FExxxx` values elsewhere are inside graphics/data.
* **Runtime check:** cold boot from the CN save → title → file select → inn → *Save* (the flash
  library ran about 640,000 instructions) → soft reset to the title, 4,372 frames. **Zero**
  instructions executed in `0x08FE0000..0x08FEFFFF`, and WAITCNT stayed `0x0003` throughout.

It can be ignored for R1.

## Recommendations (ranked by value for risk)

1. **R1: Fix WAITCNT.** **Done: `Patches/Definitions/Custom/waitcnt_fix.json`, `Docs/mods/waitcnt_fix.md`
   (runtime_verified in mGBA, hardware not_run).** Measured −66,221 average (−23.6% of a frame), −75,844 at the peak.
   * **Bytes (CN = English = modpack):** at `0x0800061C` the code is
     `ldr r1,=0x04000204; ldr r2,=0x4014; adds r0,r2,#0; strh r0,[r1]; movs r0,#0xE0; bl 0x080B9A98`
     (14 bytes, `3d493e4a101c0880e020b9f037fa`; literal `0x4014` at `0x08000718`).
   * **Fix:** reorder to `movs r0,#0xE0; bl …; ldr r1,…; ldr r2,…; strh r2,[r1]; nop`,
     re-encoding the pc-relative loads and the BL. The code after it does not use r1/r2. The
     literal can stay `0x4014`: the flash routines (`0x080B9D4A`, `0x080B9E12`, …) do
     `WAITCNT = (WAITCNT & 0xFFFC) | 3` and keep the ROM bits, ending at `0x4017`.
   * **Why it should be safe:**
     * The developers chose 3/1 + prefetch, so the cart ROM is rated for it.
     * Flash carts and emulators handle it.
     * Game logic was unchanged in mGBA (identical final frame).
   * **To check:**
     * Real hardware or your flash cart, including saving.
     * GBATEK documents that real-BIOS `RegisterRamReset` bit 7 also clears WAITCNT, as mGBA
       does.
     * The `0x08FE00xx` writer is dead code (above).
   * **Effect:** peak headroom in this scene goes from about 50,000 to about 126,000 cycles.
2. **R2: Sound reverb off.** −4,700 (1.7%), a small audible change. Lower max channels or a
   lower mix rate only if needed.
3. **R3: Stat rebuild on input change** (signature approach above). About −8,000 (2.8%)
   shipped, about −4,500 after R1. Medium risk; needs the input audit and long A/B.
4. **R4: HP bars.** Dropped (see the HP bars section): pixels are already cached; only the
   upload (about −2,600) is left, and it needs a VRAM reservation with artifact risk.
5. **R5: Hot leaf routines to IWRAM as ARM** (typically 2–4× on these):
   * the terrain probe `0x0800AC18` (7,551, scales with walking enemies);
   * `__divsi3`/`__modsi3` (5,500);
   * the scheduler walk (about 8,000).

   **Blocker:** free IWRAM is not established. There are about 9.8 KB of zero runs in a
   snapshot, the largest `0x03002C28` (1.5 KB) and `0x030003A0` (1.25 KB), but zeros are not
   proof of free. It needs a write-watch audit. These gains shrink after R1.
6. **R6: Palette upload only when dirty.** About −1,500. Low value.

**Not worth it:**
* replacing BIOS divides;
* reworking OAM (1 KB per frame is fine);
* chasing O(n²) collision, which isn't there.

## Cost guide for writing new patches (shipped WAITCNT 0x0003)

* **Budget.** In this 5-enemy scene the average frame is 194,651 and the peak 230,661, so about
  **50,000 spare at the peak**. With R1: average 128,430, peak 154,817, about 126,000 spare.
* **Thumb from ROM (shipped):**

  | Instruction | Cycles |
  |---|---|
  | ALU | ~3 |
  | taken branch | ~11 |
  | `ldr` literal or ROM data | ~7–14 |
  | load/store to IWRAM | +1–2 |
  | load/store to EWRAM | +3–6 |

  A 100-instruction routine run once per enemy costs about 300–500 per enemy per frame.
* **ARM in IWRAM:** about 1 per instruction (+ memory).
* **Calls and division:**

  | Operation | Cycles |
  |---|---|
  | BIOS SWI round trip | ~60–100 + work |
  | `__divsi3` | ~350 |
  | BIOS Div | ~120 |
  | ArcTan2 | ~130 |
  | `bl`+`push`/`pop` | ~40–60 |
  | record lookup `0x08006D98` | ~250 |
  | `0x08013864` move + collision | ~5,700 |
  | `0x0800AC18` terrain probe | ~2,200 |

* **Per-frame work per enemy:** keep it to a few hundred cycles. One extra terrain probe per
  enemy per frame is +2,200 each.
* **Per-frame VRAM uploads:** go through the queue (`0x08001348`). About 1–2 cycles per byte
  from EWRAM/IWRAM, more from ROM.

## Open questions / next steps

* Profile a state from a laggy 6+ enemy fight (which enemy types?) to see what pushes it over.
* Hardware check of R1.
* Measure the player moving and attacking. This run had no input; movement adds `0x08013864`
  calls for the player too.
* Input audit of `0x0801B690` if R3 is pursued; IWRAM free-space audit if R5 is.
* Identify `0x0800F8D0`, `0x08010FA4`, `0x08016968`, `0x08013BF0` and the ~18 small tasks
  (29,195 together).

## Reproduce

```sh
Tools/perf/build.sh
ROM=Patch_Manager/Output_ROM/ss2-en-phase1d_9_patches_20261013-105606.gba
Tools/perf/build/ss2prof --state Savestates/5_mobs.ss0 $ROM Tools/perf/runs/mod
Tools/perf/build/ss2prof --state Savestates/5_mobs.ss0 --waitcnt 0x4017 $ROM Tools/perf/runs/mod-wc
Tools/perf/build/ss2prof --state Savestates/5_mobs.ss0 --poke 0x03006545=0 $ROM Tools/perf/runs/mod-noreverb
Tools/perf/build/ss2prof --state Savestates/5_mobs.ss0 Build/ss2-en-phase1d.gba Tools/perf/runs/en
python3 Tools/perf/perfreport.py summary Tools/perf/runs/mod Tools/perf/runs/mod-wc Tools/perf/runs/en
python3 Tools/perf/perfreport.py timeline Tools/perf/runs/mod 60
python3 Tools/perf/perfreport.py copies Tools/perf/runs/mod
# 0x08FE check: cold boot through a save (see Tools/perf/README.md for --save/--seq)
```

Evidence:
* `runtime_verified`, for this state and these ROM hashes only:
  * per-frame, per-task and per-function numbers;
  * the reverb and WAITCNT what-ifs;
  * the HP-bar upload diff;
  * the `0x08FE00xx` never-executed check.
* `static_verified` + `runtime_verified`: the WAITCNT cause. Stepping shows `0x4014 → 0` at
  the SWI 1 call from `0x08000626`, then `0 → 3` at `0x080B9FD6` on frame 6 of a cold boot.
* `candidate`: the stat-rebuild input list (historical decompile), and function roles written
  with "?" or "-like".
