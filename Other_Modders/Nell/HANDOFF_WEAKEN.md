# Shining Soul II (USA) – Dragonute Break Armor rework: handoff

**Status:** the rules were tested in-game. This exact file was built but never booted.
- An earlier build with the same rules (v3, output `063A1673`) was tested in-game with a bridge logger, using both the axe and the flail, on normal enemies and on a boss (2026-10-17).
- This file (2026-10-18) only moves the shared boss code, so that it can be combined with the Weaken patch. The Break Armor bytes are otherwise identical to v3.

## Files in this folder
- `Shining_Soul_II_USA_Break_Armor.ips`: the patch (533 bytes, SHA-256 2210A1970CFC29E0FB0FCA946132C4B3970B0A984BA321362FECF01BAB8AB916).
- `disassembly_before_after.txt`: every patched range, with the original bytes, the new bytes and the new code.
- `HANDOFF.md`: this file.

No ROM is included. You need your own.

## Target ROM
- The patch is for Shining Soul II (USA), 16MB, CRC32 `4038E282`.
- IPS has no checksum, so check the CRC yourself before applying. Apply the patch to a copy, never to the original.
- Every byte is below 16MB, so the patch also applies to the 32MB-expanded USA ROM (the original plus 16MB of zero bytes).
- It also applies to a ROM with the Enhanced Edition core (core by 哇你是谁怎么傻乎乎). Every patched range holds the original bytes there. The patch works with the core's own Break Armor hooks (see below).

| Input ROM | Output CRC32 |
|---|---|
| USA 16MB `4038E282` | `87049070` |
| USA 32MB expanded `ECBC6C2B` | `8CF4896D` |
| Enhanced Edition core only `498F8CCF` | `29C76989` (not booted) |

## Original behaviour (static analysis, USA 4038E282)
- **Trigger:** every physical hit by a Dragonute with Break Armor queues the debuff. There is no chance roll (0x0801E5B2-0x0801E5EE).
- **Slots:** the slot writer at 0x0801D760 fills **every empty status slot** of the enemy (up to 8) with Break Armor, each lasting 120 frames. It never refreshes an existing entry. As a result, other statuses (poison and so on) often find no free slot.
- **Strength:** each entry cuts DEF by a flat 8 × level (axe) or 12 × level (flail). With 8 entries this wipes out most enemies' DEF.
- **Bosses:** Break Armor does nothing to a boss. The enemy status loop is skipped when actor +0x39A == 3 (0x0801C598). The slots are still written, but they never count down.

## What the patch does
- **One slot per Dragonute per enemy.** Only an empty slot is used, and other statuses are never overwritten, so the other 7 slots stay free.
- **DEF cut** = round(base DEF × percent × level / 100):

  | Weapon | Percent per level | Level 1 | Level 7 (counted as 8) |
  |---|---|---|---|
  | Axe | 5% | -5% | -40% |
  | Flail | 7% | -7% | -56% |

- **Duration:** full strength for 4 s (240 frames). Every hit resets the timer to 4 s and the value to the current level.
- **Bosses:** the cut is halved (level 7: axe -20%, flail -28%). The boss's Break Armor timers now count down, so entries expire.

Examples from the in-game logs (level 7):
- Axe on a normal enemy: base DEF 15 -> 9.
- Flail on a normal enemy: base DEF 12 -> 5.
- Flail on a boss: base DEF 18 -> 13.

## What it changes
| USA file offset | Original | New | Meaning |
|---|---|---|---|
| 0x1C598 (12 B) | `14 4a b0 18 00 78 03 28 00 d1 5c e1` | `1f f3 f2 f8 00 28 01 d1 5d e1 c0 46` | boss test -> `bl 0x0833B780` (shared boss routine); 0 = skip the normal loop |
| 0x1C612 (4 B) | `e7 20 40 00` | `05 20 04 e0` | axe effect: percent 5, go to the shared call |
| 0x1C61E (8 B) | `e7 21 49 00 72 18 e8 88` | `07 20 1f f3 36 f9 05 e0` | flail effect: percent 7; `bl 0x0833B890` (DEF routine); then the game's floor-at-0 code at 0x0801C632 |
| 0x1D754 (10 B) | `04 1c 8c 34 00 25 01 23 5b 42` | `1d f3 f4 fd 00 28 00 db 8d e0` | slot writer setup -> `bl 0x0833B340` (refresh check); found = no new entry |
| 0x1D766 (2 B) | `0f d1` | `10 d1` | "slot not empty" -> moved loop step |
| 0x1D77A (2 B) | `78 20` | `f0 20` | timer 120 -> 240 frames |
| 0x1D788 (12 B) | `01 35 28 34 07 2d e7 d9 73 e0 00 00` | `77 e0 01 35 28 34 07 2d e6 d9 72 e0` | exit after one write; loop step; exit in the old padding |
| 0x33B340-0x33B379 (58 B) | zeros | new routine | refresh check: a live kind-4 entry from this Dragonute -> timer 240, value = level |
| 0x33B780-0x33B88B (268 B) | zeros | new routine | shared boss routine: non-boss -> 1; boss -> count down the Dragonute entries, apply Break Armor / Weaken at half strength, return 0 |
| 0x33B88C-0x33B8B7 (44 B) | zeros | new routine | DEF routine: entry 0x33B88C boss (÷200), 0x33B890 normal (÷100); uses BIOS Div |
| 0x33B8B8-0x33B8E3 (44 B) | zeros | new routine | ATK routine for the Weaken patch. This patch includes it, but nothing uses it unless flag 0x33B8FA = 1 |
| 0x33B8FB (1 B) | `00` | `01` | Break Armor flag for the boss routine |

The flag byte 0x33B8FA (Weaken on bosses) is left at `00` by this patch. It is set by the separate Weaken percent patch, which uses the same shared routines.

### Enhanced Edition core (static analysis, core-only ROM)
- The core hooks the same path:
  - kind-4 effect 0x0801C606 -> 0x09416300;
  - writer tail 0x0801D77E -> 0x09415100;
  - class dispatch 0x0801C5C4 -> 0x09415700.
- The core's code then jumps back to 0x0801C613 (axe) and 0x0801C61F (flail), and returns to 0x0801D789. These are exactly the spots this patch rewrites, so the core runs the new code.
- The core stores a weapon marker in the high half of the level register and in slot byte +5 (0xA9 axe, 0xAA flail, 0xAB none). The new routines read only the low half of the level and handle the marker byte.

## Combining with other patches
- **Weaken percent** (Dragonute, `4038E282 -> 319F268B`): fine in either order; together they give `DA746CCB`. Both write identical shared routines; each sets its own flag.
- **Do NOT combine with the older Break Armor v3 file (`063A1673`) or with "Weaken on bosses" v1 (`B027EE87`).** Those use the older layout at 0x33B780.
- **Other mods:** this patch clashes with any other mod that uses 0x33B340-0x33B379 or 0x33B780-0x33B8FB, or that rewrites the instructions at the offsets above. Clashes were checked only against this project's own patches.

## Limits
- **Link play:** each Dragonute keeps its own entry on the enemy (keyed by player id 0-3). This was not tested with two players.
- **Player-vs-player copy:** there is a second copy of the writer at 0x0801D718 that keeps the old 120 frames. It was left alone.
- **Rounding:** on very low base DEF a level 1 cut can round to 0. For example, base 8 × 5% = 0.4, which gives 0 (seen in the log).
- **Not tested:**
  - this exact file in-game;
  - the axe on a boss (should be -20%);
  - an Enhanced Edition core ROM;
  - other statuses landing while Break Armor is active.

## What still needs doing
1. Boot the patched ROM on a copy of a save (official mGBA 0.10+). Then check, at Break Armor 7:
   - **Axe, normal enemy:** DEF drops about 40% and comes back 4 s after the last hit.
   - **Flail:** DEF drops about 56%.
   - **Boss:** the cut is halved.
   - **Other statuses:** there should never be more than one Break Armor entry per enemy (slots at enemy actor +0x8C, 8 × 0x28 bytes; kind byte +4 = 4), and other statuses should still land.
2. Test on a core ROM.
3. If it works, re-issue the patch as a BPS against the 16MB USA ROM so that it carries a checksum.
