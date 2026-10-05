# Case 1: From EXP Cheat Code to Level Cap Patch[cite: 6]

## Starting Clues[cite: 6]

Historical cheat code:[cite: 6]

```text
02003C14:3B9AC9FF

```

It writes the runtime address `0x02003C14` with the little-endian 32-bit value `0x3B9AC9FF`, which is 999,999,999[cite: 6]. This address belongs to EWRAM, not a ROM address, and cannot be subtracted by `0x08000000`[cite: 6].

## Structure Association[cite: 6]

The confirmed player base address is approximately `0x02003BF0`:[cite: 6]

```text
0x02003C14 - 0x02003BF0 = 0x24

```

Therefore, the clue becomes `PLAYER+0x24 = current_exp(u32)`[cite: 6]. The adjacent `PLAYER+0x28` stores the level, with the displayed level being the stored value plus 1[cite: 6].

## Tracing ROM Consumers from RAM Writes[cite: 6]

Historical breakpoints and decompilation narrow down consumers to the level-up function `0x0801C87C`:[cite: 6]

```asm
0801C8A4  ldr  r3,[r4,#0x28]
0801C8A6  cmp  r3,#198
0801C8A8  bhi  0x0801C8F0
0801C8AA  ldr  r1,[r4,#0x24]
0801C8AC  adds r1,r1,r5
0801C8AE  str  r1,[r4,#0x24]

```

This connects the phenomenon of "very high experience but no longer leveling up past level 200" to the level comparison and experience consumer, rather than treating the cheat code itself as a ROM patch[cite: 6].

## Corresponding Existing Patch[cite: 6]

`level_250.json` simultaneously modifies:[cite: 6]

* `0x0801C8A6`: Immediate value comparison 198 → 248[cite: 6].
* `0x0801C8EC`, `0x0801E2D8`: Experience table pointer changed to `0x09000100`[cite: 6].
* `0x09000100-0x090004E8`: 250-entry `u32` experience table[cite: 6].

The tracing conclusion is: changing only the level comparison is insufficient because the original experience table only covers the corresponding historical range, and there are at least two consumers[cite: 6]. Rollbacks must also be rebuilt from the current baseline[cite: 6].

## Evidence Tags[cite: 6]

* RAM fields, level-up function, and pre-patch image: `confirmed/static`[cite: 6].
* Level-up experiments on the old baseline: historical dynamic, for reference only[cite: 6].
* 1/199/200/249/250 boundaries in the current combination: `untested` in this sharing session, left for the person in charge to accept[cite: 6].

---