@ loot_rebalance code. Thumb, ARMv4T. Linked at CODE (0x080BC1E0).
@ build.py sets CODE, GEN, HARD, RAND, SCROLL_T, WOOD_LO and WOOD_HI with .equ lines.
@
@ wrap(out, level, class): the monster drop roll's `bl gen` (0x0805CE08) calls this instead.
@ r0 = gen(out, level, class), then if the item is a consumable (type 1) with code 0-4,
@ replace the code:
@   HP (0 Herb, 1 Healing Drop, 2 Healing Water): hard mode any of 0-2; dungeons 1-5 and 18
@     (Goblin Fort, Giant's Graveyard, Wizari's Palace, Fairy Spring, Robert's Pirate Ship,
@     Grandma Colita's Well; [0x0300329C]) Herb only; other maps Herb or Healing Drop.
@   SP (3 Goddess Tear, 4 Ray of Hope): hard mode either; normal mode Goddess Tear only.
@ The pick among the allowed codes is uniform. Returns gen's r0.
    .syntax unified
    .thumb
    .text
wrap:
    push    {r4, r5, lr}
    movs    r4, r0              @ out
    bl      wrap + (GEN - CODE)
    movs    r5, r0              @ gen's return value
    ldrh    r0, [r4]
    cmp     r0, #1              @ consumable?
    bne     done
    ldrh    r0, [r4, #2]
    cmp     r0, #4
    bhi     done                @ not a potion
    cmp     r0, #3
    bhs     sp
    bl      wrap + (HARD - CODE)
    movs    r1, #3              @ hard mode: Herb, Drop, Water
    cmp     r0, #0
    bne     hp
    ldr     r0, =0x0300329C
    ldrh    r0, [r0]            @ dungeon number
    movs    r1, #1              @ early dungeons: Herb only
    cmp     r0, #5
    bls     hp
    cmp     r0, #18
    beq     hp
    movs    r1, #2              @ other maps: Herb, Drop
hp:
    movs    r0, #0              @ first allowed code
    b       pick
sp:
    bl      wrap + (HARD - CODE)
    movs    r1, #1              @ normal mode: Goddess Tear only
    cmp     r0, #0
    beq     1f
    movs    r1, #2              @ hard mode: Goddess Tear, Ray of Hope
1:  movs    r0, #3
pick:                           @ code = r0 + (rand & 0xFFFF) * r1 >> 16
    cmp     r1, #1
    beq     store
    push    {r0, r1}
    bl      wrap + (RAND - CODE)
    pop     {r2, r3}
    lsls    r0, r0, #16
    lsrs    r0, r0, #16
    muls    r0, r3
    lsrs    r0, r0, #16
    adds    r0, r0, r2
store:
    strh    r0, [r4, #2]
done:
    movs    r0, r5
    pop     {r4, r5}
    pop     {r1}
    bx      r1

@ roll: called (bl) in place of `cmp r5, sb; bls; movs r4, #1; cmp r4, #0; beq` at 0x0805CDD8 in
@ the monster drop roll, with the caller's registers: r5 = drop chance (out of 256), sb =
@ rand & 0xFF, r6 = out (zeroed), r8 = monster.
@ Returns r0 = 1 for the generic drop (chance > sb, as before), 2 for a Valuing Scroll (written to
@ out), 0 for nothing. The scroll takes SCROLL_T/65536 of all kills out of the "nothing" share:
@ v = (sb - chance) * 256 + (rand & 0xFF) is uniform over that share's first 65536 - 256*chance
@ values. Monsters with level 0 get no scroll (they never get a generic drop either).
roll:
    mov     r0, sb
    cmp     r5, r0
    bls     1f
    movs    r0, #1
    bx      lr
1:  push    {r4, lr}
    mov     r0, r8
    adds    r0, #0x78
    ldrh    r0, [r0]            @ monster level
    cmp     r0, #0
    beq     2f
    bl      wrap + (RAND - CODE)
    lsls    r0, r0, #24
    lsrs    r0, r0, #24
    mov     r1, sb
    subs    r1, r1, r5
    lsls    r1, r1, #8
    adds    r0, r0, r1
    ldr     r1, scroll_t
    cmp     r0, r1
    bhs     2f
    movs    r0, #1              @ consumable
    strh    r0, [r6]
    movs    r0, #12             @ Valuing Scroll
    strh    r0, [r6, #2]
    movs    r0, #2
    b       3f
2:  movs    r0, #0
3:  pop     {r4}
    pop     {r1}
    bx      r1

@ chest(out, level, class): the object-break `bl gen` (0x0802810A) calls this instead. Calls gen;
@ then on a normal-mode wooden chest row (row <= 50 with its bit set in `wooden`) a Healing Drop
@ becomes a Herb in dungeons 1-5 and 18. (The wooden lists hold only Healing Drop and Goddess
@ Tear in normal mode, Healing Water and Ray of Hope in hard mode.) Returns gen's r0.
chest:
    push    {r4, r5, lr}
    movs    r4, r0              @ out
    movs    r5, r1              @ row
    bl      wrap + (GEN - CODE)
    cmp     r5, #50
    bhi     9f                  @ hard mode row
    ldrh    r1, [r4]
    cmp     r1, #1
    bne     9f
    ldrh    r1, [r4, #2]
    cmp     r1, #1              @ Healing Drop?
    bne     9f
    adr     r2, wooden
    lsrs    r3, r5, #5
    lsls    r3, r3, #2
    ldr     r2, [r2, r3]
    movs    r3, #31
    ands    r3, r5
    lsrs    r2, r3
    lsrs    r2, r2, #1          @ the row's bit -> carry
    bcc     9f
    ldr     r2, =0x0300329C
    ldrh    r2, [r2]            @ dungeon number
    cmp     r2, #5
    bls     1f
    cmp     r2, #18
    bne     9f
1:  movs    r1, #0              @ Herb
    strh    r1, [r4, #2]
9:  pop     {r4, r5}
    pop     {r1}
    bx      r1

    .pool
    .align  2
scroll_t:                       @ Valuing Scroll share of all kills, out of 65536 (a Patch Manager option)
    .word   SCROLL_T
wooden:                         @ bit n = loot row n is a wooden chest (rows 0-63)
    .word   WOOD_LO, WOOD_HI
