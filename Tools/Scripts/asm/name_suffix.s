@ Equipment name bar: enchant after the name, as US (ARMv4T Thumb, in place).
@
@ Replaces CN 0x08060A20..0x08060A8F inside the name-bar builder 0x080606CC. CN copies the
@ enchant string (Chinese prefix, e.g. "of Fear" + "Beret") before the item name; US
@ 0x08060314 copies the name first, then a space and the enchant ("Beret of Fear").
@ Same inputs and outputs as the CN code it replaces:
@   in:  r5 = glyphs already in the line buffer at sp+0 (icon, marker), r6 = name string,
@        [sp,#0x60] = enchant record or 0 (string at record + lang*0x3E, lang = [0x03003510])
@   out: at 0x08060A90 `adds r0,r4,r5` gives the total count: here r5 = icon+name(+space),
@        r4 = enchant glyphs. Clobbers r0-r4 (CN clobbers r0-r4 too; r6 is reloaded at
@        0x08060AA8 before any use).
@ The name copy keeps CN's 16-glyph cap. Space is 0x751 (US 0x51 + 0x700); it is added
@ only when the enchant string is not empty (US adds it whenever the record pointer is set).
@ Longest English enchant is 8 glyphs, so the line stays within the 0x54-byte buffer.
    .syntax unified
    .thumb
    .text
start:
    lsls    r1, r5, #1
    add     r1, sp              @ r1 = write pointer
    movs    r4, #0
1:  lsls    r0, r4, #1
    ldrh    r0, [r6, r0]
    cmp     r0, #0
    beq     2f
    strh    r0, [r1]
    adds    r1, #2
    adds    r4, #1
    cmp     r4, #0xf
    bls     1b
2:  adds    r5, r5, r4
    movs    r4, #0
    ldr     r3, [sp, #0x60]
    cmp     r3, #0
    beq     done
    ldr     r0, lang_word       @ CN pool word 0x08060AF4 = 0x03003510
    ldr     r0, [r0]
    lsls    r2, r0, #5
    subs    r2, r2, r0
    lsls    r2, r2, #1
    adds    r3, r3, r2
    ldrh    r0, [r3]
    cmp     r0, #0
    beq     done
    ldr     r0, =0x751
    strh    r0, [r1]
    adds    r1, #2
    adds    r5, #1
3:  ldrh    r0, [r3]
    cmp     r0, #0
    beq     done
    strh    r0, [r1]
    adds    r1, #2
    adds    r3, #2
    adds    r4, #1
    b       3b
    .ltorg
    .balign 2
pad:
    .fill   (0x70 - (pad - start)) / 2, 2, 0x46C0
done:
    .set    lang_word, start + 0xD4
