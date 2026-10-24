# enemy_hp_bars: the CN modder's enemy HP bars, standalone

Definition: `Patches/Definitions/Custom/enemy_hp_bars.json`. Shipped as `../SS2_Web_Patcher/patches/enemy_hp_bars.bps`
(made with `Tools/Scripts/make_bps.py enemy_hp_bars` against the English ROM `ss2-en-phase1d.gba`;
patch sha256 `3ac534da…`, result ROM `2b22a323…` = `Build/ss2-en+enemy_hp_bars.gba`).
Before fix 3: `.bps` `24791e5c…`, ROM `96ac676f…`. The retired `Patch_Manager/patches/enemy_hp_bars.ips32` gives the same ROM.
The definition is generated: `python3 Patches/enemy_hp_bars/make_enemy_hp_bars.py` (modder bytes + our fixes).

## Source (CN baseline, not a port)

This is the modder's `field_living_character_hp_display`, taken from his repo `Other_Modders/SS2_GBA_HACK/`.
His baseline is our CN baseline (sha256 `45ac38bb…c989`), so no conversion was needed.

- Code writes: `Other_Modders/SS2_GBA_HACK/rom/tools/current_optional_menu_builder_payloads.json`, feature
  `field_living_character_hp_display` (implementation `a4d6624c`, payload `2026-09-14.1`,
  condition `enhanced_edition=false`, `requires=[]`). Bytes are copied verbatim, not re-assembled.
  Source: `rom/mods/features/field_living_character_hp_display/optional_menu_builder/` (base.asm +
  the `optional_guard.py` and `display_rules.py` transforms).
- Image: `ui.boss_label.white_black` 1.0.0 (128 B) from `rom/tools/current_image_resource_payload.json`.
- **Why this variant:** his catalog's main version (`patch_menu.asm`, 0.3.0-beta1) requires his
  `custom_function_menu`. The optional-builder variant first checks his menu entry at
  `0x09009BF0`. That entry is zero in our ROMs, so the check fails and the bars are always on.
- His tested standalone ROM (`73273d60…`) was built with an older image bundle and does not
  hash-match a rebuild here. The code writes are identical to his.

## Writes and allocations (CN baseline = English ROM)

| Range | What |
|---|---|
| `0x08001208` (4 B) | hook: `bl 0x08008B18` → `bl 0x080BC300` (Thumb) |
| `0x080BC300..0x080BC31F` | near stub `push {r0-r7,lr}; ldr r3,=0x09004401; bx r3` + zero pad |
| `0x09004400..0x09004BFF` | Thumb code + literals (2048 B incl. zero tail) |
| `0x09004B00..0x09004B1B` | fix 1 helper (inside the owned 2 KiB) |
| `0x09004B20..0x09004B43` | fix 3 town gate helper + literals (inside the owned 2 KiB) |
| `0x09A00000..0x09A0007F` | Boss label 4bpp tiles 32×8 |
| `0x09009BF0..0x09009BFF` | read-only probe; keep zero (or put his menu entry here) |

RAM: no fixed allocation. It reads battle pool `0x030057B4` (5 records, stride `0x454`; hostile
`+0x1DC==2`, HP `+0x5C`/`+0x1D6`, boss flag `+0x7A` bit1). It grows the native queue heap block
(`0x030023FC`) from 4800 to 6144 B once, and draws through the OAM shadow `0x030013D0`.

## Checks

- Preimages are all zero / the original BL on both the CN baseline and English phase1d.
- `mod_conflicts.py --defs Patches/Definitions/Custom`: ok. `combine_patch.py` with all 18 official singles
  + `guaranteed_fusing` + `town_return_heal`: no overlap.
- Runtime: `Angel_Wing.ss0`, sequence `4:B 40 4:B 60 90:LEFT 90:LEFT 90:UP 90:UP 90:RIGHT 90:RIGHT 90:DOWN 90:DOWN`.
  Bars appear over the enemies and shrink with damage (evidence `Docs/mods/evidence/enemy_hp_bars_*.png`).
- not_run: boss bottom bar, save/load, long sessions, stacking with other mods at runtime.
  His records list known risks: OAM/VRAM pressure with many objects, and heap growth.

## Fixes (ours)

### Fix 1: Boss bar on normal enemies

**Symptom (user):** the bottom "Boss" bar appears in normal fights, e.g. the first enemy of a new
game (state `Savestates/TinyBoss.ss0`) and the jungle after Angel_Wing (`Boss_HP_bar_no_boss.ss0`).

**Cause:** the payload's `display_rules.py` picks the Boss layout from entity `+0x7A` bit1 alone
("native leader flag"). Ordinary enemies carry it: the tutorial slime has `0x46`, a jungle enemy
`0x2`, and US normal enemies `0x2`/`0x3`. The first live record with the bit wins the bottom bar.
Records dumped with `dump_pool.py` (scratch): both false positives have `+0x39A = 0`. The US
boss in HugeApplePack's `BossFightHPBar.ss0` (540 HP) has `+0x39A = 3` and `+0x7A = 0x6`.
The modder's later rewrite (`research/large_numeric_integration/hp_display/README.md`) requires
both `+0x39A==3` and `+0x7A` bit1. His own comment says `+0x39A==3` alone also hits adds.

**Patch:** `0x09004484` (was `movs r4,#0x7A; ldrh; lsrs #2; movs r4,#0; bcc; movs r4,#3`) →
`bl 0x09004B00; cmp r4,#3; bne 0x0900449A; nop; nop`. Helper returns r4=3 if both hold, else 0;
it touches only r4 and flags (r0–r3, r5–r7 hold coordinates/HP/loop state).

**Result:** both user states now show ordinary bars and no bottom bar
(`Docs/mods/evidence/enemy_hp_bars_fix1_*.png`). A real CN boss is not_run.

### Fix 2: some enemies get no bar

`0x0900444C` `ldrh r0,[r6,r0]` → `ldrb r0,[r6,r0]` (`305a` → `305c`): the hostile class `+0x1DC`
is compared to 2 as a byte. The US port handoff (`hp_bar/HANDOFF_enemy_hp_bars.md` §7) saw
`0x4202` (flags in the high byte), which hid that enemy's bar. The modder's later rewrite
(`research/large_numeric_integration/hp_display/adapt.py`) reads it with `ldrb` too.

Evidence: static only for the bug case. Scanning ~3000 frames of combat in Angel_Wing, TinyBoss and
Boss_HP_bar_no_boss (`scan_1dc.py`, scratch) never saw a flagged value on CN, so the before/after
of the bug itself is not_run. Regression: the fix-1 screenshots are byte-identical with fix 2.

### Fix 3: bars drawn over the town after an Angel Wing

**Symptom (user):** Angel Wing out of a dungeon early, and the hostiles' bars still show in the
castle courtyard. The battle pool keeps the dungeon's hostiles (with their positions) while you
are in town, so the bar routine kept drawing them wherever those coordinates land on screen.

**Patch:** the routine's first gate at `0x0900440A` (`ldr r0,=0x03002960; ldr r0,[r0]; cmp r0,#0;
beq exit`, 8 B) → `bl 0x09004B20; beq 0x090044A8; nop`. The helper at `0x09004B20` keeps that
original check and also returns Z=1 (skip drawing) when the current area id, u16 at
`[[0x03005DB4]]+0`, is 0 (town; same field `town_return_heal` uses, and the game reads it with
`ldrh`). A null world pointer keeps the original behaviour. Clobbers r0 only; r0 is reloaded
right after. The exit path is the one the routine already takes when it has nothing to draw.

No warp hook is needed: the check runs every frame, so bars stop as soon as the area becomes
town and come back as soon as the angel ("Shall I take you back?") returns you to the dungeon.
Other non-town areas (arena etc.) are unchanged. The indoor town rooms are area 0 too (user
states `In_Bar.ss0`, `In_Castle.ss0`: `[[0x03005DB4]]+0` = 0), so they are covered; in those two
states the battle pool is empty (enabled mask `0x030057BC` = 0), so the old build drew nothing there either.

**Evidence (`runtime_verified`):** user state `Savestates/HP_Bar_Bug.ss0`
(`3021918e…`, jungle, enemies close by). Visible input only: START, A (Item), RIGHT×5, DOWN×4,
A (pick Angel Wing), LEFT×5 (onto the character), A (use), then 700 frames. Old build `96ac676f…`:
two bars float at the top-left of the courtyard (`evidence/enemy_hp_bars_fix3_town_before.png`).
New build `2b22a323…`: none (`…_fix3_town_after.png`). Continuing on the new build: DOWN 30, UP 40
into the angel, A×3 (Yes), 400 frames → back in the jungle with bars drawn again
(`…_fix3_back_in_dungeon.png`). Checks: `mod_conflicts.py` ok; `combine_patch.py` with all 18
official singles + every custom mod: no overlap; the IPS applied to `ss2-en-phase1d.gba` reproduces
the build byte for byte, and `SS2_Web_Patcher/patcher.js` (Node, `buildRom`) gives the same ROM
from the JP ROM + translation and from the English ROM, and applies all 25 mods together without conflict. not_run: Angel Wing from the arena, save/load in town.
