@ loot_rebalance: which HP/SP potions a monster's generic drop may be. Thumb, ARMv4T.
@ Linked at CODE (0x080BC1E0); the monster drop roll's `bl gen` (0x0805CE08) calls wrap instead.
@ build.py sets CODE, GEN, HARD and RAND with --defsym.
@
@ wrap(out, level, class): r0 = gen(out, level, class), then if the item is a consumable
@ (type 1) with code 0-4, replace the code:
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
    .pool
