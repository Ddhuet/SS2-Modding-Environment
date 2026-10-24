# Shining Soul II (USA) – Archer forest summon AI: handoff

**Status:** built and played by the user step by step (2026-10-19). Each step was added after the previous one was played: double hit, faster wall give-up, leash, faster follow. The last step, the orbit refresh, was added to fix a bug found while playing. **This exact file (v2, output `3A53E3E1`) has not been booted yet.** The earlier steps were judged by feel in normal play ("the changes feel good", "feels kinda good"). There was no logger run and no measured test. Everything else here is from reading the code (static analysis).

## Files in this folder
- `Shining_Soul_II_USA_Archer_Summon_AI.ips`: the patch (236 bytes, SHA-256 03D0F7CABFC335931B77EFE7C8FFDECD0D24D8206D4289F4CB80F6574517DD01).
- `disassembly_before_after.txt`: every patched range, with the original bytes, the new bytes and the code before and after.
- `build_archer_summon_double_hit.py`: the script that made the IPS. It needs Python 3 and capstone. Run it on a clean 16MB USA ROM; it checks the CRC and the original bytes.
  - The IPS was built with `--giveup30 --leash 150 --orbit-div 3 --orbit-refresh --out-ips <file>` (hover 60 is the default).
  - Without `--out-*` it is a dry run and only prints the disassembly.
- `mgba_summon_stuck_logger.lua`: a read-only mGBA script that logs the summon every frame (phase, position, tile under it, counter, hits, target). Change `OUT_DIR` at the top to a folder of your own.
- `HANDOFF.md`: this file.

No ROM is included. You need your own.

## Target ROM
- The patch is for Shining Soul II (USA), 16MB, CRC32 `4038E282`.
- IPS has no checksum, so check the CRC yourself before applying. Apply the patch to a copy, never to the original.
- Every byte is below 16MB, so the patch also applies to the 32MB-expanded USA ROM (the original plus 16MB of zero bytes).
- Every patched range holds the original bytes on the Enhanced Edition core builds below too (core by 哇你是谁怎么傻乎乎). On those, only the CRC was checked; nothing was booted.

| Input ROM | Output CRC32 |
|---|---|
| USA 16MB `4038E282` | `3A53E3E1` |
| USA 32MB expanded `ECBC6C2B` | `6F80A1A9` (not booted) |
| Enhanced Edition core only `498F8CCF` | `CAB3414D` (not booted) |
| Other modder's full English USA ROM `3D2356A8` | `BE1F9B2A` (not booted) |

## How the stock summon works (static analysis of the routine 0x08070EC8-0x08072180)
Positions are in 1/256 px. 60 frames = 1 second.
1. **Cast:** hits = the skill's value (5 in our test). The hit count also picks the orbit radius: 16 px with 0-2 hits left, 32 px with 3 or more.
2. **Orbit:** it circles the owner and moves toward its spot on the circle at **0.8 px per frame**, with no wall check. After every return there is a 60-frame wait. During that wait the circle centre is **not updated**, so it keeps circling where the owner used to be. After the wait it searches every 6th frame.
3. **Search:** it picks the nearest live enemy within **100 px of the owner**.
4. **Chase:** 3 px per frame toward the target.
   - It hits when any enemy is within 7 px.
   - On a blocked wall tile it does not move. After **121 blocked frames** (about 2 s) it gives up and returns. It does not use a hit when it gives up.
   - There is **no distance check to the owner** during the chase.
5. **Hit:** it does the damage.
   - A killing blow does not use a hit.
   - Otherwise hits -1, and it **always** flies back after one hit.
6. **Return:** 3 px per frame to the owner, with no wall check. Within 7 px it goes back to the orbit (step 2).
7. **End:** the summon ends when the hits run out (and on some other end conditions not traced here).

Seen in a stock log (in-game, with the logger): the summon gets stuck in a loop on an enemy behind a wall. Each cycle is circle 67 frames, chase about 130 frames (frozen 121 of them), then return. It repeated 36 times in about 2 minutes and did no damage.

## What the patch does
| Change | Stock | Patched | Where |
|---|---|---|---|
| Hits per trip | 1, then return | 2: hit, hover in place 60 frames, chase and hit the same target again, then return. A killing first hit returns at once. | 0x71E78, 0x717B8, 0x719EC + new code |
| Wall give-up in the chase | 121 blocked frames | 31 (about 0.5 s) | 0x71B70 `78 28` -> `1e 28` |
| Leash | none | more than 150 px from the owner during the chase or the hover: return (no hit used) | in the hook at 0x719EC + new code |
| Follow speed in the orbit | 0.8 px per frame | about 2.7 px per frame (sin x 8 / 3) | 0x71508 and 0x71520 `0a 21` -> `03 21` |
| Circle centre during the 60-frame wait | where the owner was before the chase | the owner's current position (search timing unchanged) | 0x712B2 + new code |

Why the last row is needed: with the leash and the faster follow, the stale centre was up to about 150 px away. After each leash return the summon flew there and back at 2.7 px per frame, through walls. The user saw this as "running all over the screen erratically and thru walls". At the stock 0.8 px per frame the drift was at most about 48 px, so it was hard to notice.

### Edits (file offsets; GBA address = offset + 0x08000000)
| Offset | Original | New | What |
|---|---|---|---|
| 0x712B2 | `3c 28 74 d9` | `c9 f2 11 ff` | bl orbit_refresh_stub (0x0833B0D8) |
| 0x71508 | `0a 21` | `03 21` | follow speed, x |
| 0x71520 | `0a 21` | `03 21` | follow speed, y |
| 0x717B8 | `00 24 a1 46` | `c9 f2 56 fc` | bl skip_contact_stub |
| 0x719EC | `18 9a 03 2a` | `c9 f2 44 fb` | bl leash_and_hover_stub |
| 0x71B70 | `78 28` | `1e 28` | give-up 121 -> 31 frames |
| 0x71E78 | `4b 46 46 24 6c 44 23 80 11 a8 03 80` | `c9 f2 e4 f8 00 28 01 d0 74 e4 c0 46` | bl hit_stub; beq return; b chase |
| 0x33B044-0x33B0E1 | `FF` x 158 (blank) | new code | see disassembly_before_after.txt |

### State the new code uses
- Stack slot sp+0x88 of the summon routine holds the trip state. Stock uses it only as the orbit's every-6th-frame search counter and sets it to 0 at orbit entry and before each search.
  - 0 = first hit pending.
  - 0x100 + n = second hit pending, with n hover frames left.
- Leash: the owner's position is read from player actor 0x03003E00 + owner x 0x158, at +0x98 (x) and +0x9C (y). The test is (dx² + dy²) > 150² px. It only runs when the owner is a player (sp+0x7C <= 3); an enemy can own a summon too. When it fires, the code jumps to the stock give-up path 0x0807173C.
- The leash distance is the literal at file 0x33B0CC (`E4 57 00 00` = 22500 = 150²).

### Tunable values (stock offsets)
| What | Stock | Bytes |
|---|---|---|
| Search range round the owner | 100 px | 0x71304 `64 21` (max 255) |
| Wait after a return before searching | 60 frames | 0x712B2 is now a hook; the value 60 is in the stub at 0x33B0D8 (`3c 28`) |
| Search every Nth frame | 6 | 0x712F2 `05 28` (N - 1) |
| Orbit radius | 16 / 32 px | table 0x541000, 8 x s16, indexed by hits left; only the summon reads it |
| Chase contact | 7 px | 0x71818 `07 28`, 0x71828 `07 29`, 0x71A66 `07 28` |
| Chase speed / return speed | 3 px per frame | `48 00 40 18` at 0x71B3C + 0x71B4E (chase) and 0x71FBA + 0x71FCC (return). 2 px = `48 00 c0 46`, 4 = `88 00 c0 46`, 5 = `88 00 40 18` |
| Return "arrived" distance | 7 px | 0x71F00 `07 28` |
| Pause between the two hits | 60 frames | script `--hover N` (1-255) |

## Combining with other patches
- **Archer summon persist** (0x71E70 `01` -> `00`, the summon never uses up hits): combines. That byte is not touched, and the hit stub reads the hit count after it. The combination has not been tested.
- **The other modder's full English USA ROM `3D2356A8`** (which includes its own Archer movement mod): every range this patch writes still holds the stock bytes there, so it does not overlap any of that ROM's mods.
- **Free space:** 0x33B044-0x33B0E1 was blank (`FF`) in all four input ROMs above. Check it against any other patch you add.

## How to test
1. Apply the IPS to a copy of the clean USA ROM (expect `3A53E3E1`). Use a copy of your save.
2. Cast the summon near enemies. It should hit, hover in place about 1 s, hit again, then fly back. If the first hit kills the enemy, it should fly back at once.
3. With an enemy behind a wall, it should give up after about half a second.
4. Run away while it chases or hovers. At about 150 px it should turn back, then circle you right away. It should not fly off to the old spot.
5. Walk and run around. It should keep up and circle you without twitching.
6. Optional: load `mgba_summon_stuck_logger.lua` (once) and read its CSV. The hook stubs never yield, so the phase names in the log are unchanged. During the hover it shows as "chase" with no movement.

## Known limits / ideas not built
- After a wall give-up it still picks the nearest enemy again. An enemy behind a wall therefore gives a short loop (about 1.5 s per cycle) instead of being skipped.
- Return and orbit still go through walls, as in stock.
- Not traced: the end conditions other than running out of hits (probably owner down, map change or menu).
