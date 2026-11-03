# Weapon Stat Scaling (Rod INT, Bow DEX) (JP / CN port)

Credit: Nelly (original USA mod and this port). Ported 2026-11-02 to Gentlefox's CN baseline, so it runs on his English ROM and on the Chinese community ROM.

**Status: static analysis only. Untested in-game; the patched ROMs have not been booted.**

## What it does
Rods and bows use the class's main stat instead of STR. In the stat rebuild, the line ATK += STR becomes: Sorceress or Dark Wizard holding a rod -> ATK += INT; Archer holding a bow -> ATK += DEX; everyone else -> STR as before. The stat is added flat (the Rod / Bow skill level does not multiply it). Example: rod base ATK 10, STR 9, INT 23 -> ATK 19 before, 33 after. Charged bow shot: the game adds INT / 4 to ATK; for a bow it now adds DEX / 4 (the Warrior's charged attack that uses the same code keeps INT / 4). Charged rod attacks already add INT / 4 and are unchanged. Not covered: the class is read from the local player (as the game's own class getter does); in link play the rebuild for another player might use the local player's class (not checked).

USA original: Nelly's weapon stat scaling plan (planned on USA 4038E282, static analysis only; never built or tested on USA either).

## Files
- `en\<id>.bps`: Gentlefox's English ROM (Japanese ROM 7B39A7B2 + his `english_translation.bps`, CRC32 221AFD61) -> English + mod. In his system this goes in `Patch_Manager\patches\`.
- `cn\<id>.bps`: CN baseline (CRC32 AFCFC96D, his `SS2_SC_bug_fixed.GBA`) -> CN + mod (his `patches\cn\` set).
- `definitions\<id>.json`: his definition format (every original byte asserted, CN baseline addresses = English ROM addresses).
- `rom\en+<id>.gba`: English ROM with the patch applied, for testing.

| Patch | Setting | English + mod CRC32 | CN + mod CRC32 |
|---|---|---|---|
| `weapon_stat_scaling` | Weapon Stat Scaling (rod INT, bow DEX) | 785B7173 | F58E457F |

## Writes (CN baseline / English ROM addresses; original bytes are the same on both)

### 0x0801BFF6, 10 bytes
stat rebuild ATK += STR (US 0x0801BFCE) -> far ATK routine

- original: `44462088318840183080`
- new: `01480047c04601000409`

```
0801BFF6  0148       ldr r0, [pc, #4]
0801BFF8  0047       bx r0
0801BFFA  .byte c0 46 01 00 04 09   (data)
```

### 0x0801E49E, 10 bytes
charged attack type 1 (US 0x0801E3F6) -> far charge routine

- original: `381c60300026815f1c38`
- new: `01480047c04681000409`

```
0801E49E  0148       ldr r0, [pc, #4]
0801E4A0  0047       bx r0
0801E4A2  .byte c0 46 81 00 04 09   (data)
```

### 0x09040000, 80 bytes
ATK routine: rod + Sorceress / Dark Wizard -> INT, bow + Archer -> DEX, else STR

- original: `80 x 00`
- new: `0cb40a9844462288002815d0ba214900415a0d480068008a082800d10620052905d1012801d0062806d1a28804e0072902d1022800d16288318850183080034a94460cbc604700008035000301c00108`

```
09040000  0cb4       push {r2, r3}
09040002  0a98       ldr r0, [sp, #0x28]
09040004  4446       mov r4, r8
09040006  2288       ldrh r2, [r4]
09040008  0028       cmp r0, #0
0904000A  15d0       beq #0x9040038
0904000C  ba21       movs r1, #0xba
0904000E  4900       lsls r1, r1, #1
09040010  415a       ldrh r1, [r0, r1]
09040012  0d48       ldr r0, [pc, #0x34]
09040014  0068       ldr r0, [r0]
09040016  008a       ldrh r0, [r0, #0x10]
09040018  0828       cmp r0, #8
0904001A  00d1       bne #0x904001e
0904001C  0620       movs r0, #6
0904001E  0529       cmp r1, #5
09040020  05d1       bne #0x904002e
09040022  0128       cmp r0, #1
09040024  01d0       beq #0x904002a
09040026  0628       cmp r0, #6
09040028  06d1       bne #0x9040038
0904002A  a288       ldrh r2, [r4, #4]
0904002C  04e0       b #0x9040038
0904002E  0729       cmp r1, #7
09040030  02d1       bne #0x9040038
09040032  0228       cmp r0, #2
09040034  00d1       bne #0x9040038
09040036  6288       ldrh r2, [r4, #2]
09040038  3188       ldrh r1, [r6]
0904003A  5018       adds r0, r2, r1
0904003C  3080       strh r0, [r6]
0904003E  034a       ldr r2, [pc, #0xc]
09040040  9446       mov ip, r2
09040042  0cbc       pop {r2, r3}
09040044  6047       bx ip
09040046  .byte 00 00 80 35 00 03 01 c0 01 08   (data)
```

### 0x09040080, 40 bytes
charge type 1: (ATK + stat / 4) x (charge + 18) / 20, stat = DEX for bows, else INT

- original: `40 x 00`
- new: `00266022b95e4422f88a072800d14222b85a000480140918b88d123048431421004a104713e50108`

```
09040080  0026       movs r6, #0
09040082  6022       movs r2, #0x60
09040084  b95e       ldrsh r1, [r7, r2]
09040086  4422       movs r2, #0x44
09040088  f88a       ldrh r0, [r7, #0x16]
0904008A  0728       cmp r0, #7
0904008C  00d1       bne #0x9040090
0904008E  4222       movs r2, #0x42
09040090  b85a       ldrh r0, [r7, r2]
09040092  0004       lsls r0, r0, #0x10
09040094  8014       asrs r0, r0, #0x12
09040096  0918       adds r1, r1, r0
09040098  b88d       ldrh r0, [r7, #0x2c]
0904009A  1230       adds r0, #0x12
0904009C  4843       muls r0, r1, r0
0904009E  1421       movs r1, #0x14
090400A0  004a       ldr r2, [pc, #0]
090400A2  1047       bx r2
090400A4  .byte 13 e5 01 08   (data)
```

## Space
Checked (2026-11-02) against Gentlefox's repo (github.com/Ddhuet/SS2-Modding-Environment, commit 1dcdd4e): the English translation's spans, the space-ownership table in AGENTS.md, every mod definition and every shipped .ips / .ips32 / .bps. No overlap. The two hooks are 10 bytes each inside game code (0x0801BFF6, 0x0801E49E); the routines are at `0x09040000..0x090400A7`, inside the far block claimed for Nelly's ports, `0x09040000..0x0904FFFF` (zero on both ROMs, after his `loot_rebalance` block 0x09020000..0x0903654F; no code points into it). The hooks jump there with a 32-bit literal, so no near stub is needed.

## How to apply
Apply the `.bps` to the matching ROM with any BPS patcher (Flips, Rom Patcher JS) or Gentlefox's Patch Manager. Use one setting per mod (the settings of one mod write the same bytes).

## To test
- Boot `rom\en+<id>.gba` in mGBA 0.10+ and check the effect in a fight. Report back which setting and what you saw.
