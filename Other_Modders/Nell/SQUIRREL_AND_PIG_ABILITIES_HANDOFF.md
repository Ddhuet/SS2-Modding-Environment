# Shining Soul II (USA) – Archer summon: squirrel knockback + pig slow (handoff, 2026-10-23)

Two Archer forest-summon add-ons, on their own (no Summon Behavior AI changes, no WAITCNT fix):

1. **Squirrel knockback** (summon level 1): squirrel hits knock the monster back with axe strength 15, minus the monster's knockback resistance.
2. **Pig slow** (summon level 5): each pig hit slows the monster's walking by 40% for 3 s (180 frames), and every hit refreshes it. Bosses are immune. Freeze, Paralysis and the Brawler's Stun take priority. A blue-sand hourglass is drawn over a slowed monster (sand falling / half / drained), 2 px above the Enhanced Edition HP bar and in front of walls.

## Files

| File | What |
|---|---|
| `ss2-usa-squirrel-knockback-pig-slow_from-plain-usa.bps` | Shining Soul II (USA).gba 16MB **4038E282** -> 32MB **5B2C3058** (nelly builder default build + both add-ons). 2.6 MB because it carries the whole Enhanced Edition core. |
| `ss2-usa-squirrel-knockback-pig-slow_from-nelly-default.bps` | nelly builder default build 32MB **75EB3809** -> **5B2C3058** (1 KB: only the two add-ons). |
| `ss2-usa-archer-squirrel-knockback15-only.ips` | Knockback alone, IPS. Plain USA 16MB 4038E282 -> B8B8CFE2. Its targets are all inside the first 16MB, so it also applies to 32MB builds whose bytes there are stock. |
| `build_archer_squirrel_knockback.py` | Builds the knockback (`<rom> [--strength N] [--level N] [--pre-ips X] [--out-rom R] [--out-ips I]`). Needs capstone. |
| `build_pig_slow.py` + `thumb_asm.py` | Builds the pig slow (`build_pig_slow.py [--ips X ...] <core base rom> <out rom>`). Checks the original bytes at every hook and that 0x1E00000-0x1E0063F is zero. Won't overwrite the output. |
| `disassembly.txt` | Hooks, the knockback stub and the pig slow code from the 5B2C3058 ROM (capstone), with the table entries, the hourglass header and the tiles. |

All BPS files were round-trip checked: applying each one gives exactly 5B2C3058. Compared with the earlier test 6 ROM (38A037D9), 5B2C3058 differs only in the WAITCNT fix (0x61C-0x629) and the Summon Behavior v6 ranges (0x712B2-0x71E83, 0x33B044-0x33B0E1).

To rebuild 5B2C3058 from the nelly default build:
```
python build_pig_slow.py --ips ss2-usa-archer-squirrel-knockback15-only.ips <nelly default 75EB3809> <out.gba>
```

## Status
- **This exact ROM (5B2C3058) has not been booted.** The same code has run in other builds:
  - Pig slow: played in-game by the user on earlier test ROMs (slow, hourglass look and position, the wall/priority fix). Tested together with Summon Behavior and, from test 5, with WAITCNT.
  - Squirrel knockback: **never played** (untested; static analysis only). It was built into test 6 38A037D9 and into the v3 test ROM 9BD544C9, but neither has been reported on.
- The user reported the in-game save failing on the test 5/6 builds. The cause is unknown and it may have nothing to do with these patches. Test on a copy of the save.
- Measured with the bridge (test 4): with all 5 monsters slowed and showing hourglasses, 3 frames were lost in 811. So the pig slow costs almost nothing.

## ROM space used (file offsets)

| Range | Size | Use |
|---|---|---|
| 0x689FA-0x689FF | 6 B | knockback hook |
| 0x33B220-0x33B27F | 96 B | knockback stub (blank 0xFF in 4038E282, 3D2356A8, 498F8CCF; 0x33B216-0x33B291 free) |
| 0x181E4-0x181F3 | 16 B | pig slow: walk speed hook |
| 0x68A9C-0x68AA7 | 12 B | pig slow: skill hit hook |
| 0x1C704-0x1C707 | 4 B | pig slow: status kind 1 table entry |
| 0x18F58-0x18F5B | 4 B | pig slow: draw switch entry |
| 0x1E00000-0x1E001E3 | 484 B | pig slow code + literal pools |
| 0x1E00200-0x1E0027F | 128 B | hourglass sprite header |
| 0x1E00280-0x1E003FF | 384 B | hourglass tiles |

Total: knockback 102 B, pig slow 1,060 B. The pig slow block is past 16MB, so it needs a 32MB build. The script reserves and checks 0x1E00000-0x1E0063F.

## Squirrel knockback – how it works
- The summon's damage routine 0x08068838 (skill id 7, local-owner path) calls 0x08029A54(enemy id, element, damage, level, [sp] strength, [sp+4] direction). Stock code passes strength = direction = 0: at 0x080689FA, `00 24 00 94 01 94` (movs r4,#0; str r4,[sp]; str r4,[sp,#4]).
- The hook replaces those 6 bytes with `d2 f2 11 fc c0 46` (bl 0x0833B220; nop). 0x080689FA is also reached from the skill-id-4 path (b at 0x080689AC), so the stub checks the id itself.
- What the stub does (r6 = task, r5 = enemy):
  - It always does the stock stores first.
  - Then, only when task +0x0C == 7 and task +0x14 (level) == 1:
    - resist = enemy +0x384. 0xFF means immune. s = 15 - resist, and s <= 0 means no push. This is the same rule as player melee (0x080206A4-0x080206E8).
    - direction = u8 table 0x08486184[(atan 0x080B7FE0(dx, dy) << 16) >> 28], with dx/dy = enemy - summon in px. The summon's position is at the damage routine's sp+8 / sp+0xC, in 1/256 px. This copies player melee (0x080206EA-0x0802070A).
    - It writes [sp] = s and [sp+4] = direction.
- 15 is what an axe hit sends; it was logged in-game (enemy +0x82 = 15, +0x80 = 1024, +0x7C = 2, +0x7E = direction).
- Every summon pet runs the same routine 0x08070EC8, so `--level N` picks the pet.

## Pig slow – how it works
- **Status:** a monster status slot (8 slots at enemy +0x8C) set to {timer 180, source 100, kind 1, value 0x5A0F}. No other game code writes kind 1, and the 0x5A0F value marks our slot: any other kind-1 slot still takes the original case 0x0801C7B8. The core hooks the slot loop (source 100 -> 0x09412B00; kind high byte 0xA0-0xAB = core tags) but still dispatches through table 0x0801C704.
- **SPEED** (hook 0x080181E4, 16 B `469bbe24640018190021405e409a1041` -> `ldr r2,=0x09E00001; bx r2` + nops): walk speed = monster record +0x17C (1/256 px per frame; the record copy sits at enemy +0x204, i.e. [sp+0x118]). While a live slow slot exists it becomes x 154/256 (-40%). Then the original shift runs and it returns to 0x080181F4. The speed is read by the main enemy movement routine 0x08017A9C (step call 0x080181FE).
- **APPLY** (hook 0x08068A9C, 12 B `2a1c5a321188484608431080`; the common end of every skill hit on a monster; r5 = enemy, r6 = hit task):
  - Acts only on skill id 7 at level 5, never on bosses (+0x39A == 3) or dying monsters (+0x0C == 0xB).
  - Refreshes our slot, or takes the first empty one (timer -1).
  - Then runs the 6 original instructions and returns to 0x08068AA8.
- **STATUS** (kind 1 table entry 0x0801C704: 0x0801C7B8 -> 0x09E000B8, no Thumb bit, like the stock entries):
  - If a live slot holds Paralysis (100/kind 2), Freeze (100/kind 3) or Brawler Stun (player source, kind 6, player class 5): clears the slow slot (timer -1) and skips the countdown (0x0801C855).
  - Otherwise sets +0x62 = 11 and runs the normal countdown (0x0801C843).
- **DRAW** (draw switch entry for +0x62 = 11, 0x08018F58: 0x0801930C (draw nothing) -> 0x09E0011C):
  - Draws the monster sprite as case 9 does, then the hourglass every frame through 0x08007414, using its own header 0x09E00200 and tiles 0x09E00280. Ends at 0x08019340.
  - The picture follows the slot timer: > 120 sand falling, > 60 half, else drained.
  - The hourglass is drawn on layer 0 (OBJ priority 0) so walls never cover it. Monsters normally pass their map layer (r8 from 0x0800B648), which is why walls hid it in test 2.
  - The piece is 16x16 at (-8, -54) from the feet. The core's HP bar is a 32x8 sprite at feet - 40 whose first row is blank, which leaves a 2 px gap.
- **Hourglass data:** 3 pictures, 1 animation, frame list 3 x 60, in the format of the game's sprite set 0x50088. Tiles 0/4/8, OBJ palette 7 (the game's palette; nothing is added).
- **Not covered:** the two special-kind movers 0x08097166 / 0x08097DBE (their speed doesn't come from +0x380), and knockback speed. The few monsters that use those movers aren't slowed.
- **Bridge test:** write {180, 100, 1, 0x5A0F} into a slot at enemy +0x8C to force the slow on any monster.

## Notes for porting to another build
- Both scripts check the original bytes before patching. If a core or another mod has changed a hook site, the script refuses instead of patching.
- The pig slow is written for the Enhanced Edition core: the hourglass Y is set against the core's HP bar, and it relies on how the core's status loop behaves. On a ROM without the core, the 0x1E00000 block would also need to be moved inside the ROM.

## Credits
- 哇你是谁怎么傻乎乎 – Enhanced Edition core (in the plain-USA BPS)
- nelly (with Claude) – squirrel knockback, pig slow, the nelly builder default fixes
