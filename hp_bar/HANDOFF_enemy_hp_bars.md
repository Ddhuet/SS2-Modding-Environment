# Handoff: Enemy HP bars for Shining Soul II (GBA, USA ROM)

For another person's Claude (or a reverse engineer) to review, re-test or extend. No ROMs and no personal data are included; supply your own legally obtained ROM.

## 1. What it does
Draws a small health bar above every enemy on screen: a green bar that shrinks as the enemy takes damage, with red showing the lost part. Bosses get a bigger bar plus a label (small tile graphic). It is purely a display addition; it does not change gameplay values.

## 2. Files and which ROM each applies to (BPS is locked to one exact source ROM)
| File | Source ROM (CRC32) | Result (CRC32) |
|---|---|---|
| `Enemy_HP_Test_2.bps` | original USA 16MB, `4038E282` | 32MB ROM with bars, `4F42F722` (includes the expansion) |
| `Shining_Soul_II_USA_32MB_expand.bps` | original USA 16MB, `4038E282` | plain 32MB ROM, `ECBC6C2B` (no new features) |
| `Enemy_HP_Test_2_for_expanded_ROM.bps` | the plain 32MB ROM, `ECBC6C2B` | 32MB ROM with bars, `4F42F722` |
Use either the first file alone, or the 2nd then the 3rd. Never apply the first after the second.
Original USA ROM: 16,777,216 bytes, SHA-256 b31c19d2d25683a0941d5d501912b5f21d4590cd7071fa01882e62aa5227a7c9.
(The Chinese builder tools use a different 32MB baseline, CRC32 AFCFC96D; that is not this ROM.)

## 3. Why it needs 32MB
The routine (987 bytes) and label tiles (128 bytes) are placed above the original 16MB so they cannot collide with game data: routine at file 0x1004400 (ROM 0x09004400), tiles at 0x1A00000 (ROM 0x09A00000). A tiny stub sits in a blank spot inside the first 16MB (0xBA860) because a Thumb BL only reaches +-4 MB; the stub trampolines to 0x09004401 (Thumb). The 32MB expansion just pads the file to 32 MiB (GBA cartridge address space allows it) and the new areas start as zeros.

## 4. The complete change set (diff of plain 32MB ROM vs. final; file offsets, address = 0x08000000 + offset)
| Offset | Size | What |
|---|---|---|
| 0x1208 | 4 | `07 f0 d6 fc` (`bl 0x08008BB8`) -> `b9 f0 2a fb` (`bl 0x080BA860`): hook replaces the per-frame call at this site |
| 0xBA860 | 12 | stub: `ff b5 01 4b 18 47 00 00` + pool `01 44 00 09` = `push {r0-r7,lr}; ldr r3,=0x09004401; bx r3` |
| 0x1004401.. | ~1138 | the new routine plus its literal pool and helper functions (0x1004400-0x1004873) |
| 0x1A00000.. | ~100 | boss label tile data (0x1A00000-0x1A0007F) |
Reserved/avoid: 0xBA860-0xBA86B, 0x1004400-0x1004873, 0x1A00000-0x1A0007F.

## 5. How the routine works (annotated; see `routine_disassembly_0x09004400.txt`)
Entry (0x09004400): first it calls the original function that the hook replaced (thunk at 0x090044A0 -> 0x08008BB9) so normal behavior is preserved, then adds the bars.
Main loop:
1. Guards: bail out unless a pointer at IWRAM 0x030029E0 is non-zero and a flag word at 0x03003598 does not have bit 0x400 set (this blocks drawing on screens where it should not, e.g. menus; inferred). A helper at 0x090046E4 sanity-checks another pointer.
2. `r6 = *(u32*)0x03005844` = pointer to the actor list; it must be inside EWRAM (0x02000000-0x02040000). `r7 = *(u32*)0x0300584C` = bitmask of used slots.
3. Loop 5 actor slots, stride 0x454: skip slot if its mask bit is clear; read the byte at actor+0x1DC (state) and require it == 2 (see section 7: this was the bug); read u16 actor+0x5C (current HP) and u16 actor+0x1D6 (max HP), skip if either is 0.
4. Screen position: x = (s32 actor+0x14 >> 8) - camX(0x0300330C) - camOffX(0x03003314) - 16, y = (s32 actor+0x18 >> 8) - camY(0x0300330E) - camOffY(0x03003316) - 40 (literal-pool values: 0x0300330C, 0x0300330E, 0x03003316 and one more; meanings inferred).
5. If actor type (byte at +0x39A) == 3 it is a boss: only the first boss per frame is drawn (flag kept on the stack), a bigger bar and a label.
6. Draw function (0x090044A8): clips to the screen (x > -31, <= 239; y > -7, <= 159), computes the filled length = HP * (bar_len) / maxHP (bar_len 24 px normal, 166 px boss; division via a thunk to 0x080B8E04... the GBA signed/unsigned divide), picks tile numbers, and appends OAM (sprite attribute) entries to the shadow OAM at IWRAM 0x03001450 using a counter at 0x030029D4 and a tile cursor at 0x030029D8, with limits so it never overflows the sprite budget.
7. Tile generation (0x09004790): builds 4bpp bar tiles in a RAM buffer (base pointer 0x0300247C) using fill masks (0xCCCCCCCC / 0x33333333 etc.: green vs red pixels), and memoizes the last HP per slot so tiles are only rebuilt when HP changes. Tiles are copied to OBJ VRAM with the game's copy routine (0x08001348).
Boss label tiles come from ROM 0x09A00000.
Caveat: names and several semantic labels above (camera offsets, flag word, OAM buffer) are inferred from disassembly and behavior, not from source.

## 6. How it was made (method)
1. Source: the community "enemy HP display" feature in the Chinese mod set (the 0929 and 1007 offline patch builders). Its code is already extracted as byte runs in those tools, so I used the bytes as the reference.
2. Hook site: found the same call in the USA ROM by signature search with BL targets and literal-pool pointers masked out (the Chinese->USA code delta is not constant; at this site it was 0xA0 for function addresses, e.g. 0x08008B19 -> 0x08008BB9).
3. Relocated every absolute address inside the routine and its literal pool for the USA build: IWRAM globals (+0x80 for 0x0300358x-type, +0x90 for 0x030057xx), e.g. 0x03003518->0x03003598, 0x030057B4->0x03005844, 0x030057BC->0x0300584C, 0x03003580->0x03003600; function pointers e.g. 0x080B9A85->0x080B7FE5, 0x080BA8A5->0x080B8E05, 0x08008B19->0x08008BB9. Also the player/actor structure offsets (fields after +0x10 shift +4 in the USA build, but the actor list offsets used here are not in that range and were verified by reading memory).
4. Placed code at 0x1004400 and label tiles at 0x1A00000 in a 32MB-padded ROM; wrote the 12-byte stub at 0xBA860 (blank area) and replaced the BL at 0x1208.
5. Packaged as BPS from the original ROM and, later, from the plain 32MB ROM. BPS tool included (`bps_tool.py`), verified by applying each patch and comparing CRC32s.

## 7. Why Test 1 did not work, and the fix
Symptom (reported by the tester): bars appeared, but some enemies never had a bar, and the same enemy was missing every time they entered an area.
Diagnosis: the project owner read the actor structs in mGBA's memory viewer / a Lua script. Slot layout: 5 slots x 0x454 bytes from the pointer at 0x03005844. A live enemy showed state = 16898 = 0x4202 (low byte 2 = active; high byte holds flags), HP 60/60. Another slot had HP 0 / max 45 (dead), another HP 0 / max 0 (empty). The original routine loaded the state with `ldrh` and compared the whole 16-bit value to 2, so an enemy with any flag set in the high byte (0x4202) was treated as inactive.
Fix (Test 2): compare only the low byte: change `ldrh r0,[r6,r0]` to `ldrb r0,[r6,r0]` at file offset 0x1004445 (`30 5a` -> `30 5c`). This is the only byte difference between Test 1 and Test 2. Confirmed in game: every enemy gets a bar, green shrinks and red fills as they take hits.
Earlier wrong turn: I first suspected the HP field was wrong for enemies; that was a misread of which actor slot I was looking at.

## 8. Suggested review tests
1. Apply `Enemy_HP_Test_2.bps` to a clean USA ROM and verify CRC32 4F42F722.
2. Fight several enemy types at once; bars follow enemies, shrink, never stay on dead enemies.
3. Boss fights: single big bar plus label; no flicker when many sprites are on screen (sprite budget).
4. Screen edges, scrolling, transitions between areas, pause/menu screens, cutscenes (the guard flags).
5. Slowdown with many enemies (the routine runs every frame).
6. Save/load.

## 9. Not verified / open
- Behavior with many other sprites (OAM overflow), status screens, and mods that move the 0x03005xxx globals.
- Whether the guard flags cover every non-gameplay screen.
- Europe ROM (CRC32 55E503C1, AU2P) is a different build: different IWRAM layout and code shifts, so this patch does not apply; it needs a separate port.
- Exact meanings of several globals are inferred.

## 10. Prompt you can give your Claude
"Read HANDOFF_enemy_hp_bars.md and the disassembly. Verify my annotated logic, look for bugs (OAM overflow, wrong guards, divide by zero, cache invalidation) and suggest improvements such as a bar-style toggle. Do not ask for or distribute ROMs; I will apply the BPS to my own copy."
