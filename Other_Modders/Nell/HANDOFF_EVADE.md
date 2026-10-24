# Shining Soul II (USA) – Brawler Evade fix (4% per level): handoff

Status: **built, never tested in-game.** Treat it as a candidate, not a working mod.

## Files in this folder
- `Shining_Soul_II_USA_Brawler_Evade_4pct.ips` – the patch (102 bytes, SHA-256 0AD6375B03464EFECB5402070F459E7D577CC713ABB5CF29CD27D54A247CFAE1).
- `disassembly_before_after.txt` – every changed instruction, original vs patched.
- `HANDOFF.md` – this file.

No ROM is included. You need your own.

## Target ROM
- Shining Soul II (USA), 16MB, CRC32 `4038E282`.
- IPS has no checksum, so check the CRC yourself before applying. Apply to a copy, never the original.
- Both changes sit inside the first 16MB, so the IPS also applies to the 32MB-expanded USA ROM (CRC32 `ECBC6C2B`, the original plus 16MB of zero bytes).

| Input ROM | Output CRC32 |
|---|---|
| USA 16MB `4038E282` | `331058DA` |
| USA 32MB `ECBC6C2B` | `8E9844F1` |

## Why it exists
In the original game the Brawler's Evade skill does nothing. The game decides whether an enemy's attack hits the player with this formula:

chance to hit = 125 × (enemy hit + 10) / (enemy hit + player evade + 20)

The attack lands if that chance is at least `random % 100`. The "player evade" value here is the actor's evade stat (actor +0x46), which equals DEX. The Evade skill level is never read anywhere in this check. This is static analysis of USA 0x080208D6–0x0802091C, and it was confirmed in play:
- With the skill at Evade 1 and Evade 7, the evade stat stayed at 17 (= DEX).
- At Evade 7, 8 of 20 enemy attacks missed, which is what DEX alone predicts.

## What the patch does
It adds a flat dodge chance of **Evade level × 4%** against enemies' normal attacks:

| Evade level | Dodge chance |
|---|---|
| 1 | 4% |
| 7 | 28% |

This roll comes after the game's own DEX roll and only runs when that roll has already let the attack through. A dodge goes to the game's own miss path, so it looks and sounds exactly like a normal miss.

The routine only dodges if all three of these hold:
- the target is a Brawler (actor +0x16 == 5);
- the player character is a Brawler (player record [0x03003600] +0x14 == 5);
- Evade (record +0x48, raw level 0–7) is above 0.

If any of them fails, or the roll fails, it calls the original `rand`, and the game carries on as before.

## What it changes
| USA file offset | Original | New | Meaning |
|---|---|---|---|
| 0x020924 | `DF F7 D0 FF` | `1A F3 EC FE` | `bl 0x080008C8` (rand, the start of the block roll) -> `bl 0x0833B700` |
| 0x33B700–0x33B74F | 80 zero bytes | new routine | the dodge roll (see the disassembly file) |

To change the strength, edit the byte at file offset **0x33B71A**. It is the immediate of `movs r0,#N`, the percent per level: `04` = 4%. Any value from 1 to 14 keeps the chance at level 7 under 100%.

Game routines called by the patch (unchanged themselves):

| Address | Role |
|---|---|
| 0x080008C8 | rand |
| 0x080B9054 | unsigned modulo (r0 % r1) |
| 0x08020B6C | the hit check's own miss path (marks the attack as done, plays sound 0x55) |

## Limits (static analysis)
- **Covered:** normal enemy melee only, through the hit check at 0x08020808.
- **Not covered:**
  - a second hit check at 0x080203B4, used for projectiles (not yet confirmed);
  - about 17 monster special attacks that never roll to hit;
  - magic.
- **Link play:** the Evade level is read from the local player's record. With two Brawlers, both use the local player's level.
- **Raw level:** the patch uses the raw level, so 7 gives 7 × 4%. It does not use the skill reader's boosted value.
- **Clashes:** checked only against this project's own patches. Other mods that use file offset 0x33B700–0x33B74F, or that change the instruction at 0x020924, will clash.

## What still needs doing
1. **Test it.** Use official mGBA 0.10+, on a copy of the ROM and a copy of a save.
   - Play a Brawler with Evade 7.
   - Count the misses over 20 or more normal enemy attacks.
   - Unpatched, about 8 in 20 miss at DEX 17. Patched, the miss rate should be clearly higher: roughly 8 + 0.28 × 12 ≈ 11 in 20.
   - Regression: other classes should miss exactly as before, and a Brawler with Evade 0 should miss as before.
2. Check whether the 0x080203B4 path (projectiles?) should get the same roll.
3. If it works, re-issue as a BPS against the 16MB USA ROM so the patch carries a checksum.
