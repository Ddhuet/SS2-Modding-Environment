# Shining Soul II (USA) – who uses the walking angle table: callers of the step routine (handoff)

Research notes, not a mod. They go with the walk-angles patch (`direction_angles_handoff`): that patch changes the angles used by one shared routine, and this tells you **what moves through that routine** — player, enemies, knock-back.

Evidence labels: **static** = found by reading the code only; **counter run** = measured in play with the diagnostic ROM below.

## Files in this folder
| File | What it is |
|---|---|
| `HANDOFF.md` | this file |
| `ss2-usa-step-caller-counters-DIAGNOSTIC.ips` | diagnostic test patch (walk angles + a counter on every caller). 342 bytes, SHA-256 CCD4BCCA876DCA0503E9C0858E755DA5F40FDB2B6C6ED24EC291A45DA6E7C18B. **Test ROM only, not for play.** |
| `tools/build_step_caller_counters.py` | builds the same diagnostic ROM from a clean ROM (needs `build_direction_tables.py` beside it) |
| `tools/build_direction_tables.py` | builds the spell-angles / walk-angles IPS |
| `tools/mgba_step_caller_logger.lua` | mGBA script: reads the counters every frame -> `step_callers.csv` |
| `tools/mgba_enemy_move_logger.lua` | mGBA script: logs enemy + player positions every frame -> `enemy_log.csv` |
| `tools/analyze_enemy_moves.py` | counts the movement angles in `enemy_log.csv` |
| `results/step_callers.csv` | the counter run (town + whole first dungeon, 19746 frames with hits) |
| `results/enemy_log.csv` | the enemy movement log (first dungeon, walk-angles ROM) |

No ROM is included. Python 3 scripts, no extra packages. The Lua scripts need official mGBA 0.10+ (Tools > Scripting > File > Load script). They write the CSV to mGBA's current folder unless you put a full path in `OUT` at the top.

## Target ROM
Shining Soul II (USA), 16MB, CRC32 `4038E282`. The diagnostic IPS gives `C941C9E2` (checked by applying). All addresses below are GBA addresses (file offset + 0x08000000) in that ROM.

## The step routine 0x08013900
`step(speed, pos* {x, y as s32, 1/256 pixel}, dir 0-7, flags)` (static):
- angle = u16 table `0x08487DDA[dir]` (original 64, 109, 128, 147, 192, 237, 0, 19; 256 = full turn). The walk patch points the routine's 4 literals (file 0x13968, 0x13A14, 0x13AB0, 0x13B18) at its own table instead.
- sin table 0x080B9174 (s16, 256 = 1.0; cos = angle + 0x40). x += speed × cos / 256, y += speed × sin / 256. For dir 0 / 4 (straight down / up) y divides by 304 (0x130) instead, so straight vertical movement is about 84% speed — on purpose.
- Walls: after each try it calls 0x0800ACB4(dir, newY, newX, flags). A non-zero result r becomes the new dir (r − 1) and the step is retried, up to 3 tries. That is how the game slides along walls.
- Direction order 0-7: down, down-left, left, up-left, up, up-right, right, down-right.

## All 16 callers
A scan of the whole ROM for `bl 0x08013900` found 16 callers. No pointer to the routine (0x08013900 / 0x08013901) exists anywhere in the ROM, so there are no indirect calls (static).

| # | Call address | Position passed | Speed / direction from | Counter run |
|---|---|---|---|---|
| 1 | 0x08014610 | player actor | speed + actor +0x4C (walking speed), dir +0x26 | never ran |
| 2 | 0x08014B5E | player actor | speed + actor +0x4C, dir +0x26 | never ran |
| 3 | 0x08015442 | player actor | speed/2 + actor +0x4C, dir +0x26 | never ran |
| 4 | 0x0800EDCA | r5 | dir from r8 − 1, flag actor +0x3C & 0x20 | never ran |
| 5 | 0x0800F9B2 | r5 | dir +0x26, flag +0x3C & 0x20 | **player walking** |
| 6 | 0x08013B4C | actor +0x98 | speed +0xD8, dir +0xD6 | player push (probably knock-back) |
| 7 | 0x08013B80 | actor +0x98 | speed +0xDE, dir +0xDC | second player push (probably knock-back) |
| 8 | 0x08014D90 | r5 | computed speed, dir +0x26 | never ran |
| 9 | 0x08014E7A | actor +0x98 | computed speed, dir +0x26 | never ran |
| 10 | 0x08018180 | object +0x14 | speed +0x80, dir +0x7E | rare enemy / object move |
| 11 | 0x080181FE | object +0x14 | table speed, dir +0x08 | **main enemy movement** |
| 12 | 0x08097166 | object +0x14 | dir +0x08 | one enemy kind's movement |
| 13 | 0x080971B8 | object +0x14 | dir +0x08 | never ran |
| 14 | 0x08097DBE | object +0x14 | speed 0x40, dir +0x08 | one enemy kind's movement |
| 15 | 0x0805BA82 | sb | speed / 10, flags 4 | never ran |
| 16 | 0x0805BAA0 | sb | speed / 10, flags 0 | never ran |

Mistake worth knowing: callers 1-3 read the walking-speed field (+0x4C), so they looked like player walking (static guess). In play they never ran; player walking is caller 5.

## Counter run (measured)
Diagnostic ROM `C941C9E2`, the game played through town and the whole first dungeon, `results/step_callers.csv`:

| # | Call | Hits | Frames | Max per frame | Reading |
|---|---|---|---|---|---|
| 5 | 0x0800F9B2 | 14513 | 14513 | 1 | player walking (the player was moving in 95% of its frames) |
| 11 | 0x080181FE | 17063 | 9669 | 5 | main enemy movement (up to all 5 enemy slots per frame; also runs in town) |
| 12 | 0x08097166 | 1696 | 1696 | 1 | one enemy kind (always with an enemy moving) |
| 14 | 0x08097DBE | 854 | 854 | 1 | one enemy kind (always with an enemy moving) |
| 10 | 0x08018180 | 236 | 204 | 2 | rare enemy / object move |
| 6 | 0x08013B4C | 208 | 208 | 1 | player push (probably knock-back when hit) |
| 7 | 0x08013B80 | 36 | 36 | 1 | second player push (probably knock-back) |
| 1-4, 8, 9, 13, 15, 16 | | 0 | | | never ran in this run |

The readings come from which frames had movement. Which monsters belong to callers 12 and 14 is not known.

## Enemy movement log (measured)
Walk-angles ROM `5A4C70FC`, first dungeon, `results/enemy_log.csv` (7220 lines), counted with `analyze_enemy_moves.py`:
- Of 4759 frames where an enemy moved: 1097 horizontal, 959 vertical, 2681 at 45°, 1 at ~27°, ~20 other (turns / pushes). So enemies move only in the 8 table directions, and with the walk patch their diagonals are 45° too.
- Step sizes: straight 160, diagonal 113 / 113 (= 160 × 0.707). The original table would give 142 / 72.
- Enemy slot fields: list pointer 0x03005844, slot mask 0x0300584C, 5 slots × 0x454. In a slot: +0x14 / +0x18 = x / y (s32, 1/256 px), +0x08 = direction 0-7 (order above).
- Player: actor 0x03003E00, +0x98 x / +0x9C y (s32, 1/256 px), facing +0x26.

## How the diagnostic patch works
Each of the 16 `bl 0x08013900` is redirected to a 6-byte stub that loads its caller number and jumps to a shared tail. The tail adds 1 to the counter byte at EWRAM `0x0203FF00 + (number − 1)`, then jumps on to 0x08013900 with lr, sp and r0-r5 unchanged (r12 is used for the jump). The logger script reads and clears the 16 bytes every frame. Code sits at file 0x33AF40-0x33AFBF (blank in the original). EWRAM 0x0203FF00-0x0203FFDF was all zero in a town savestate, but it is not proven unused, so use this ROM for tests only.

To repeat: apply the IPS to a copy of `4038E282` (or run `python build_step_caller_counters.py <clean ROM> <out folder>`), load the ROM in mGBA, load `mgba_step_caller_logger.lua`, play, then close mGBA or unload the script (the file is flushed every 60 frames).

## Still open
- Callers 1-4, 8, 9, 13, 15, 16 never ran in the first dungeon. Later dungeons, bosses, skills and link play may use them.
- Which monsters use callers 12 and 14.
- Callers 6 and 7 being knock-back is a guess from when they ran.
- Five other readers of the shared table 0x08487DDA (literals at file 0x17498, 0x17590, 0x19EF8, 0x5B720, 0x98B44; functions 0x0801699C, 0x08019E9C, 0x0805B5E4, 0x0809888C) are not identified.
