# walk_angles: true 45° diagonals (US → CN port)

Source: Nell's US patch `Nell_Stuff/ss2-usa-walk-angles.ips` and `Nell_Stuff/ANGLES_HANDOFF.md`.
Definition: `patches/custom/walk_angles.json`. Status: `runtime_verified` (not yet `user_accepted`).

## What it does
The shared step routine `step(speed, pos*, dir 0-7, flags)` turns a direction into an angle
with a u16 table (256 = full turn). The diagonals in that table are 109/147/237/19, about 27°
from horizontal instead of 45°. The patch points the routine's 4 table literals at a new table
`64, 96, 128, 160, 192, 224, 0, 32`. Straight directions are unchanged, and so is the step length.

Everything that moves through that routine is affected: player walking, the main enemy movement,
two other enemy kinds, and knock-back (caller list in `Nell_Stuff/ANGLES_HANDOFF.md`). The other
26 readers of the original table (`0x08440B26`, mostly in `0x0806A000..0x0809A000`, probably
skills/projectiles) are left alone, as in the US patch.

## Port (US AU2E rev0 → CN baseline; English ROM same addresses)
| | US | CN |
|---|---|---|
| step routine | `0x08013900` | `0x08013864` (−0x9C; same 0x240 bytes except BLs and literals) |
| angle table | `0x08487DDA` | `0x08440B26` (same 16 bytes, unique hit) |
| table literals | `0x08013968`, `0x08013A14`, `0x08013AB0`, `0x08013B18` | `0x080138CC`, `0x08013978`, `0x08013A14`, `0x08013A7C` |
| new table | `0x0833B5F0` | `0x09003000` |

Found by searching both ROMs for the table bytes and its pointer: CN has 30 aligned references,
US has 30, and the 4 step-routine literals sit at identical offsets (+0x68, +0x114, +0x1B0,
+0x218) from the routine start in both. A masked comparison of the whole routine showed only
BL/literal differences.

## Allocation
`0x09003000..0x0900300F` (16 B, was zero, no aligned pointer to it anywhere), owner `walk_angles`.

## Checks
- `mod_conflicts.py --defs patches/custom`: ok.
- `combine_patch.py` with all 18 official singles + all custom mods: no overlap.
- Build: `translation/build/ss2-en+walk_angles.gba`, SHA-256 `df6cb706…72f7`.

## Runtime (headless mGBA, entry/return of `0x08013864` traced, pos delta per call)
Test script: scratch `angles.py` (runs `run_until 0x08013864`, reads `r1` = pos, `r2` = dir, then
runs to `lr` and diffs x/y). English phase1d vs English+walk_angles:

| State / caller | English | English + walk_angles |
|---|---|---|
| Post_Boss, hold DOWN+RIGHT, player (call 0x0800F90A) | (356, 179) → 27° | (282, 282) → 45° |
| Post_Boss, hold UP+LEFT, player | (−356, −179) → 27° | (−282, −282) → 45° (plus wall slides) |
| 5_Mobs, 300 frames idle, enemies (call 0x080181DA) | (−142, 71) → 27° | (−113, 113) → 45° |
| 5_Mobs, knock-back (call 0x08013AE4) | 27° | 45° |

Straight moves are unchanged (160 horizontal, 134 vertical for enemies). Also passes in a build
with `enemy_pathing` + `waitcnt_fix`: enemies 45°, straight unchanged.
