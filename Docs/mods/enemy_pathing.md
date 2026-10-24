# enemy_pathing: enemies path around walls (flow field)

Definition `Patches/Definitions/Custom/enemy_pathing.json` (7 writes, built by `Patches/enemy_pathing/build.py` from
`Patches/enemy_pathing/src/enemy_pathing.c`). Shipped as `Patch_Manager/patches/enemy_pathing.ips32` (348 records,
3576 B, against the English ROM). English + waitcnt_fix + enemy_pathing:
`Build/ss2-en+waitcnt_fix+enemy_pathing.gba`, sha256 `a3b5d716…601d79` (ss2tools build from
the CN baseline; byte-identical to the test ROM).

Status: `runtime_verified` for the scenarios below. `user_accepted`: not yet.

## What changes for the player

- An enemy chasing you **without line of sight** (judged on the game's 8×8 px collision cells)
  follows a breadth-first-search distance field around walls instead of walking straight into
  them. With line of sight nothing changes: the game's own chase, range check and attack run.
- Enemies **don't attack you through walls** any more: an enemy without line of sight keeps
  walking instead of starting an attack. Casters only fire once they can see you, so they waste
  less SP on walls.
- An enemy that is following a path is **not culled** for leaving the game's 480×320 box around
  you, provided its path to you is ≤ 80 cells (640 px) and for at most 600 frames. Vanilla would
  despawn it, often to respawn on the wrong side of the wall again.
- Difficulty goes up noticeably in mazes and jungles: enemies that used to be stuck now arrive.
  In the test states an idle player is killed where vanilla left them alone.

Not handled (unchanged vanilla): multiplayer (a field serves one target; enemies chasing the other
player use vanilla when it is not theirs), summons/allies, enemies targeting other enemies, spawn
placement, wander/idle states, bosses (arenas are open, so vanilla anyway).

## How vanilla enemies move (English ROM = CN baseline addresses; traced in mGBA)

Enemy pool `[0x030057B4]`, 5 × `0x454`, used mask `0x030057BC`.

| Field | Meaning |
|---|---|
| `+0x00` u16 | slot |
| `+0x04` u16 | **virtual d-pad**: 0x10 R, 0x20 L, 0x40 U, 0x80 D (OR'd for diagonals), 0 stop |
| `+0x08` u16 | facing 0..7 (0 D, 1 DL, 2 L, 3 UL, 4 U, 5 UR, 6 R, 7 DR), from `+4` at `0x08017F30` |
| `+0x0C` u16 | update state (1 walk, 0 idle, 2 melee, 9 cast, 14/15 spawn-in, …) |
| `+0x14/+0x18` s32 | position, 24.8 fixed-point px |
| `+0x24/+0x28` s32 | target point, whole px (set by `0x08016780`) |
| `+0x44` u16 | chase timer; > 180 frames forces `+4 = 0` |
| `+0x7A` u16 | flags: 0x20 forces `+4 = 0` (after the chase call), 0x40 never culled |
| `+0x1FC` u8 | high nibble: target player index |
| `+0x201` u8 | bit0 start attack, bit1 target is another enemy |

Per frame, enemy task `0x08017D40`:

1. Think `0x08016968` → in chase states `0x08016780(e, approach_dist)` (calls at `0x0801736E`,
   `0x080173BA`; distances from the type block `+0x3C0/+0x3C2`).
2. `0x08016780`: target = player pixel position (actor `0x03003D80 + idx*0x154`, `+0x150` → u16
   x/y in 1/16 px). Only when `[0x030023E4] % 25 == slot*5` it calls
   `0x080166C8(x, y, tx, ty, approach_dist)` → `+4`.
3. `0x080166C8`: Euclidean distance ≤ approach_dist → 0, else BIOS ArcTan2 rounded to 8 d-pad
   codes. Straight line, no wall test.
4. Back in think: `+4 == 0` → `+0x201 |= 1` → attack.
5. Mover `0x08013864(speed, &pos, facing, 0)` probes `0x0800AC18(dir, x, y, flags=2)` and slides
   by trying the neighbouring direction. `0x080176B8` separates overlapping actors.

Other users of `0x080166C8`: `0x080174C0` (wander around a point), `0x08019DF8` (a clone of
`0x08016780` for another actor kind), `0x0800D0A8` (player side). Not hooked.

### Collision grid

Map struct `0x03003210`: `+0x68` grid (EWRAM, u16/cell), `+0x78/+0x7A` width/height in cells
(maps seen: 30×40 … 90×60), `+0x6C/+0x74/+0x76` an alternate ROM grid (probe flag bit0).
Cells are 8×8 px: `cx = x >> 11`, `cy = (y + 0x200) >> 11` (24.8). Bits 8..11 = class (0 open,
1 solid, 2..13 slope/partial shapes); with probe flag 2 (enemies) a low byte of 1 ORs 1 into the
class: an enemy-only barrier. Out of bounds = solid. The mod treats a cell as open for enemies
when `(v & 0xF00) == 0 && (v & 0xFFF) != 1`; slopes count as walls for the field (conservative).

### Culling and spawning

- `0x08017924(e)` (called `0x08018DD4`): 1 = keep, when `+0x7A & 0x40` or a player is inside the
  480×320 box `0x08021EF0` (literal `0x014001E0`). 0 → `0x08017BEA`, the task ends at `0x080196AE`
  and clears the mask bit at `0x080196FE`.
- Spawn `0x08015E54(desc)` (only caller `0x080162E8`): position = desc cell × 8; desc `+0xE` = 1 →
  state 15 (sparkle). Mages that "teleport" in the test state are culled + respawned, not teleporting.

### EWRAM heap (needed for the RAM reservation)

Whole EWRAM is one heap: init `0x08001404` (called `0x080006B8`), ring head `0x03002410`
(`+0` last block, `+4` first block, `+8/+0xC` free list tail/head, `+0x10/+0x14` base/size for the
free range check). Block header 16 B: `+0` prev block | bit31 used, `+4` next block, `+8/+0xC`
free-list links. `malloc 0x08001494` (first fit, splits at the bottom), `malloc_high 0x08001638`
(splits at the top of a block), `free 0x08001538` (merges free neighbours). The end sentinel
address comes only from the literal at `0x08001488`.

Vanilla quirk found in user states: the last free block's `next` gets damaged by stray game writes
(`0x0203FF01` instead of `0x0203FFF0` in Warrior_Pathing; `0xFFFFFFFF` in Dragon_JIC). The game
survives because the allocator only does arithmetic on it and its stores through it are aligned.

## Design

Code: one freestanding C file compiled with `clang --target=armv4t-none-eabi -mthumb -O2` into a
relocation-free blob (no division, no `.rodata`, game functions through absolute pointers), plus a
hand-written ARM BFS loop that runs from IWRAM.

- **Hook `pf_approach`** (replaces both calls to `0x08016780`): run the original, then if the enemy
  targets a player and has no cell line of sight (Bresenham; diagonal steps need both side cells
  open), steer. Line of sight and steering are cached per slot and refreshed every 4 frames
  (staggered) or when the enemy changes cell; the cached d-pad code is reapplied every frame.
- **Field**: BFS (4-neighbour, Manhattan) from the target cell, over a band of full-width map rows
  (stride = map width, ≤ 6 KB; 90×60 fits whole) with guard rows and the edge columns forced
  blocked. Cells are classified lazily (only touched cells read the grid). One field step per
  frame, shared by all enemies: frame 1 clears (BIOS CpuFastSet) and seeds, then 256 cells/frame.
  Distances are final once written, so enemies already steer while it is being built (others keep
  their last code). Rebuilt when the target has moved ≥ 2 cells or after 90 frames; used while the
  seed is within 4 cells of the target and ≤ 120 frames old. A sampled grid checksum (32 cells,
  once per frame) resets it on map/floor changes.
- **Steering**: walk the field downhill up to 6 cells (diagonals only if both sides are open), take
  the farthest cell in line of sight and aim at it with the game's own `0x080166C8` (ArcTan2 → 8
  ways); fall back to the first step. This keeps diagonal corridors and stairs from flickering
  between two directions.
- **Hook `pf_keep`** (replaces the call to `0x08017924`): if the game would cull an enemy that
  path-stepped in the last 30 frames and whose field distance (best of its cell and 8 neighbours,
  because enemies stand on slope cells) is ≤ 80, keep it, at most 600 frames in a row.
- **Hook `pf_boot`** (replaces the call to heap init): run it, then zero the control block and write
  the magic `PFP2`.

### RAM and why savestates still work

The heap end literal moves `0x0203FFF0 → 0x0203CFF0`, so after power-on `0x0203D000..0x0203FFFF`
is never heap. Savestates made with the old layout have no magic there: on the first chase
(checked every 64 frames) the mod **adopts** the range if it lies in the heap's free tail, by
splitting that free block exactly like `malloc` does and keeping the tail as a used block that is
never freed. If something lives there, the mod stays dormant until the next power-on. Adoption
worked in all 6 user states that have chasing enemies.

## Allocations (owner enemy_pathing)

| Range | Size | Fill before | Contents |
|---|---|---|---|
| `0x080BB220..0x080BB237` | 24 B | zero | 3 far stubs `ldr r3,=entry|1; bx r3` (boot, approach, keep) |
| `0x09010000..0x09010F4B` | 3916 B | zero | code (owned to `0x09010FFF`; ARM loop first, copied to IWRAM) |
| hooks `0x080006B8`, `0x0801736E`, `0x080173BA`, `0x08018DD4` | 4 B each | BL | BL → stubs |
| `0x08001488` | 4 B | `0x0203FFF0` | heap end literal → `0x0203CFF0` |
| EWRAM `0x0203D000..0x0203FFFF` | 12 KB reserved | heap | uses `..0x0203F0FF`: control 0x100, field 6 KB, queue 2 KB |
| IWRAM `0x03007800..0x0300791F` | 288 B | unused | ARM BFS loop copy |

IWRAM evidence: the highest IWRAM global referenced by code is `0x030077B0`; the main stack starts at
`0x03007E60` and never went below `0x03007CDC` in any state or run (death and map loads included).
Enemy tasks run on their own EWRAM stacks. The copy is checked (3 words) before each use and
recopied if damaged.

Heap budget: the free heap at the top was ~50 KB in every user state; the reservation takes 12 KB.

## Evidence

Tools (`Patches/enemy_pathing/`, scratch): `common.py` (state loading, heap walker), `run_mod.py` (tracks + mod
state log + heap check), `render_track.py`, `dirlog.py`, `states.py`, `coldboot.py`, `iwcheck.py`,
`calltrace.py`, `watch*.py`, `jumps.py`, `find_bl.py`, `proto.py` (the Python prototype).
Profiles: `Tools/perf/build/ss2prof --waitcnt 0x4017` (the desktop `.ss0` loads with WAITCNT 3).

- **Warrior_Pathing.ss0, 600 frames, no input** (English+waitcnt vs +mod, no diagnostic writes):
  vanilla: the three casters walk into the hall lip forever and the spider sticks on a corner
  (none reach the player in 1500 frames). Mod: all five reach the player; casters go left along the
  lip, down the stairs, along the corridor; no culls (leash peaks 20-31 frames); they cast only once
  in line of sight. Track images: `Patches/enemy_pathing/runs/mod*/track.png`.
- **16 user states × 900 frames** (scripted walk L/U/R/D + attack): no crash; heap chain intact; the
  mod adopts and builds fields in the 6 dungeon states and stays dormant in towns. Boss_HP_bar_no_boss
  (jungle): the knight paths round trees and reaches the player at f60 (vanilla: stuck).
- **Cold boot** from `Savestates/Fixture_CN_English.sav` (`Patches/enemy_pathing/coldboot.py`): magic written, heap ends at
  `0x0203CFF0`, same 59 heap blocks and highest used address as vanilla; 16 screenshots through boot,
  ring menu and item menu byte-identical to vanilla.
- **All 18 official + 6 custom mods stacked** (`combine_patch.py`, no overlap; ss2tools build):
  Warrior_Pathing behaves the same, HP bars draw normally.
- **Cost** (cycles/frame, frame = 280,896): mod code 1.0-4.8k average over 900 frames in the dungeon
  states (≤ 1.7%); a field build adds ~28k on its frames (~5 frames for the 90×60 map); the BFS runs
  ~100 cycles/cell from IWRAM. No lag frame came from mod code (the ones seen are player death and
  map loads, which also lag in vanilla).
- Static: `mod_conflicts.py --defs Patches/Definitions/Custom` ok (code:6, expansion:1); all preimages checked by
  `build.py` and ss2tools.

not_run: real hardware; multiplayer; summons (see summon_ai); boss fights; long play sessions across many maps
(heap headroom in the biggest maps); soft reset.

## Shared core (2026-10-21)

Everything except the three entry points moved to `Patches/enemy_pathing/src/pf_core.h`, which `summon_ai`
(`Docs/mods/summon_ai.md`) also includes. Under the same compiler the split is byte-identical to
the old single file. Note: the committed source no longer reproduces the shipped blob with the
current clang (23.1.3: 3,854 B vs the shipped 3,916 B); the shipped definition was not rebuilt.
Rebuilding `enemy_pathing` would change its bytes (and Patches/summon_ai/build.py's check of the 72 IWRAM
words would then need the new trailing words). summon_ai uses `PF_BASE + 0xC0..0xFF` of the
control block (`struct pf` ends at 0x74) and drives the same field while a summon is out.

## Tuning knobs (`Patches/enemy_pathing/src/enemy_pathing.c`)

`BFS_CELLS` (cost per frame vs build time), `LOOKAHEAD`, `LOS_EVERY`, `REBUILD_MOVE`,
`SEED_SLACK`, `FIELD_MAX_AGE`, `LEASH_CELLS`, `LEASH_FRAMES`, `STEER_FRESH`. Rebuild with
`python3 Patches/enemy_pathing/build.py --rom Patches/enemy_pathing/test.gba` (writes the definition too), then
`python3 Tools/Scripts/make_ips_set.py --defs <folder with only enemy_pathing.json>`.

## History of this session's dead ends (so nobody repeats them)

- Compiled-C BFS inner loop: ~270 cycles/cell (Thumb-1 register spills). Hand Thumb from ROM:
  ~206 (ROM branch refills). ARM from IWRAM: ~100.
- Eager classification of the whole window per build: ~5,400 grid reads for 1,500 open cells.
- Two field buffers (14.6 KB) overlapped a live heap block at `0x0203F2A0` in 9 of 16 user states;
  the single buffer + steering cache needs 8.25 KB and fits below it.
- The zero "hole" at `0x0201ECBC` is inside a used 128 KB heap block, not free RAM.
