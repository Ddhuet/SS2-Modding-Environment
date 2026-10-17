@ Glyph loop of the CN-baseline text renderer (0x08019F30), with a half-width cell
@ for codes >= 0x701 (Latin glyphs in font banks 7-8). ARMv4T Thumb only.
@
@ Entered from the hook at 0x08019FCE (ldr r3,=this|1; bx r3), which replaces the
@ original loop 0x08019FCE..0x0801A092. Leaves through the original epilogue at
@ 0x0801A094, which restores r4-r10 and pops the caller's frame; r0-r3 are scratch.
@ State on entry (set by 0x08019F30..0x08019FCC):
@   r9  = string pointer (first code already checked: not 0xFFFD, < 0x8000)
@   r10 = x cell, r7 = first tile index (0x180 + counter>>5)
@   [sp] = row*0x40, [sp,#4] = (row+1)*0x40  (byte offsets into the tilemap shadow)
@
@ Full-width (code < 0x701), identical to CN: 4 tilemap entries TL TR BL BR,
@ 0x80 glyph bytes queued, x += 2. Half-width (code >= 0x701), as US 0x08019F44:
@ 2 entries top/bottom, 0x40 bytes queued, x += 1. Tile counter 0x03005D14 steps
@ by the queued size in both cases.

    .syntax unified
    .thumb
    .text
    .align 2
render_glyphs:
    mov r4, r9              @ r4 = string pointer
    mov r5, r10             @ r5 = x
    adds r6, r7, #0         @ r6 = tile index
glyph:
    ldrh r0, [r4]
    subs r0, #1             @ code - 1
    lsrs r1, r0, #8         @ r1 = bank index
    lsls r2, r0, #24
    lsrs r2, r2, #17        @ r2 = ((code - 1) & 0xFF) * 0x80
    lsls r3, r1, #2
    ldr r7, =0x03005D60     @ font bank pointer table (RAM)
    ldr r7, [r7, r3]
    adds r7, r7, r2         @ r7 = glyph source
    ldr r3, =0x03005800     @ tilemap shadow, 0x40 bytes per row
    lsls r2, r5, #1
    adds r3, r3, r2
    ldr r2, [sp, #0]
    adds r2, r3, r2         @ r2 = top cell
    ldr r0, [sp, #4]
    adds r3, r3, r0         @ r3 = bottom cell
    ldr r0, =0xF000
    orrs r0, r6             @ tilemap entry, palette 15
    cmp r1, #7
    bhs half
    strh r0, [r2]
    adds r0, #1
    strh r0, [r2, #2]
    adds r0, #1
    strh r0, [r3]
    adds r0, #1
    strh r0, [r3, #2]
    adds r6, #4
    adds r5, #2
    movs r2, #0x80
    b queue
half:
    strh r0, [r2]
    adds r0, #1
    strh r0, [r3]
    adds r6, #2
    adds r5, #1
    movs r2, #0x40
queue:
    ldr r3, =0x03005D14     @ VRAM tile counter
    ldrh r1, [r3]
    adds r0, r1, r2
    strh r0, [r3]
    ldr r3, =0x0600B000
    adds r1, r1, r3         @ r1 = VRAM destination
    adds r0, r7, #0         @ r0 = glyph source, r2 = size
    ldr r3, =0x08001349     @ DMA queue (src, dst, len); clobbers r0-r3 only
    bl call_r3
    adds r4, #2
    ldrh r1, [r4]
    ldr r0, =0xFFFD
    cmp r1, r0
    beq done
    lsrs r0, r1, #15        @ codes >= 0x8000 end the run, as in CN
    beq glyph
done:
    ldr r3, =0x0801A095     @ original epilogue (Thumb)
    bx r3
call_r3:
    bx r3
    .ltorg
