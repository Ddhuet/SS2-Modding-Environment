@ Centring width for mixed full/half-width strings (ARMv4T Thumb).
@
@ Replaces `bl 0x0801A1F4` (glyph count) at the CN centring call sites, where the caller
@ computes x = C - result. CN glyphs are 2 tiles wide, so CN's count is "tiles / 2".
@ US glyphs are 1 tile wide and US halves its count (`lsrs r0,r0,#1`) at the same sites.
@ This returns tiles / 2 for any mix: codes <= 0x700 (CN banks 0-6) count 2 half-units,
@ codes >= 0x701 (US banks 7-8, see render_glyphs.s) count 1, result = units >> 1.
@
@ in:  r0 = u16 string; counting stops at the first code with bit 15 set (0xFFFD etc.),
@      exactly like 0x0801A1F4
@ out: r0; clobbers r1-r3 (caller-saved), flags
    .syntax unified
    .thumb
    .text
center_width:
    movs    r1, #0
1:  ldrh    r2, [r0]
    lsrs    r3, r2, #15
    bne     2f
    adds    r1, #1
    ldr     r3, =0x700
    cmp     r2, r3
    bhi     3f
    adds    r1, #1
3:  adds    r0, #2
    b       1b
2:  lsrs    r0, r1, #1
    bx      lr
    .ltorg
