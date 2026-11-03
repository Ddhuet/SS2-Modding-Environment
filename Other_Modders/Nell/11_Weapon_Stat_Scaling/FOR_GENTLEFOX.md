# For Gentlefox: Nelly's JP ports, space update (2026-11-02)

Hi Gentlefox. Your `loot_rebalance` (commit 1dcdd4e) claims `0x09020000..0x0903654F`, and some of our ports had put their far code at `0x09020000..0x09020ACB`. We moved ours out of the way, so the two can now be stacked.

## Space we use (please add to the AGENTS.md space table)

| Range | Owner |
|---|---|
| `0x080BC340..0x080BC48B` | Nelly's ports: near stubs / veneers (inside your "known zero gap" `0x080BC1B6..0x080BC48C`, after `slash_shock_paralysis` `0x080BC320..0x080BC337`) |
| `0x09040000..0x0904FFFF` | Nelly's ports: far code / data (used so far: `0x09040000..0x090400A7`, `0x09041000..0x09041ACB`) |

Both are zero on your English ROM (221AFD61) and the CN baseline (AFCFC96D). We checked them against commit 1dcdd4e: the translation spans, your space table, every definition and every shipped .ips / .ips32 / .bps. Nothing overlaps. No code in either ROM points into them. Seven code-area words read as `0x09048808`, but they're the instruction pair `ldrh r0,[r1]; lsrs r4,r0,#4`, not pointers.

## What changed
- **05-10 moved:** far code went from `0x0902xxxx` to `0x09041xxx` with the same layout (+ 0x21000). Nothing else changed: we compared every write, and the only bytes that differ are the far pointers, each + 0x21000. Please replace any copy of 05-10 from before 2026-11-02.
- **01-04 unchanged:** these use near space or game code only.
- **11 is new:** Weapon Stat Scaling. Rods use INT for the Sorceress / Dark Wizard and bows use DEX for the Archer, instead of STR. A charged bow shot adds DEX / 4.

| # | Patch | English + mod CRC32 | Far range | Replaces (old CRC32) |
|---|---|---|---|---|
| 05 | `spell_angles` | 35AA0320 | `0x09041000..0x0904100F` | 23AC363C |
| 06 | `dragonute_weaken_percent` | 628201D5 | `0x09041010..0x09041180` | 3810062D |
| 07 | `dragonute_break_armor` | A2CD226F | `0x09041010..0x09041239` | 234B048F |
| 08 | `dragonute_breath_aim` | 157A30C7 | `0x09041280..0x0904133F` | 76700DDC |
| 09 | `archer_squirrel_knockback_pig_slow` | 772AC70F | `0x09041400..0x090417FF` | 7FA8BAE8 |
| 10 | `second_acce_slot` | 068C1B9E | `0x09041800..0x09041ACB` | B49413DE |
| 11 | `weapon_stat_scaling` | 785B7173 | `0x09040000..0x090400A7` | new |

06 and 07 share their boss code at `0x09041010..0x0904117B` (same bytes), so the two definitions stack. CN + mod CRCs are in each folder's HANDOFF.md.

## Status
All static analysis only. Nothing has been tested in-game, and the patched ROMs haven't been booted. Each folder has the `en\` / `cn\` .bps, your definition JSON format and an English test ROM.

Credit: Nelly.
