@ counter_fix_slash: counter_fix + a red diagonal slash OBJ over the countered enemy for 6 frames.
@ Assembled at STUB_BASE (0x080BB268) by slash/build.py. ARMv4T Thumb only.
@
@ RAM: STATE (IWRAM 0x03007920, 8 B)
@   +0 u32  0x534C0000 | frames left (1..6); anything else = idle
@   +4 u16  world x (px) of the target at counter time
@   +6 u16  world y (px)

        .syntax unified
        .thumb
        .text

        .equ STATE,      0x03007920
        .equ MAGIC,      0x534C
        .equ OAM_SHADOW, 0x030013D0
        .equ OAM_COUNT,  0x03002954
        .equ OBJ_TILE,   0x03002958     @ next free OBJ tile index
        .equ OBJ_BASE,   0x0300295C     @ OBJ VRAM base (0x06010000)
        .equ FIELD_LIST, 0x03002960     @ field sprite list (0 outside field scenes)
        .equ QUEUE_N,    0x030023F8     @ native copy queue length (max 400)
        .equ CAMERA,     0x0300328C     @ +0/+2 camera x/y, +8/+10 shake x/y
        .equ OBJ_PAL15_1, 0x05000222    @ OBJ palette 15 colour 1 (palette 15 is unused in field states)
        .equ PAL_BUF15_1, 0x030023C2    @ same colour in the game's palette buffer 0x03001FE0 (copied to PRAM)

@ Hook 0x0801E654 (damage routine 0x0801E358, counter bonus branch): replaces
@ `movs r0,#0x27; bl 0x08059A8C` (counter sound) with `bl counter_hook; nop`.
@ r8 = target actor. Clobbers r0-r3 like the original call.
        .align 2
        .thumb_func
        .global counter_hook
counter_hook:
        push    {lr}
        mov     r0, r8
        ldr     r1, [r0, #0x14]
        asrs    r1, r1, #8
        ldr     r2, [r0, #0x18]
        asrs    r2, r2, #8
        ldr     r3, =STATE
        strh    r1, [r3, #4]
        strh    r2, [r3, #6]
        ldr     r0, =(MAGIC << 16) | 6
        str     r0, [r3]
        movs    r0, #0x27               @ original: counter sound
        ldr     r3, =0x08059A8D
        bl      call_r3
        pop     {r0}
        bx      r0
call_r3:
        bx      r3

@ Hook 0x08008B2E (end of the per-frame field sprite builder 0x08008B18): replaces
@ `pop {r4}; pop {r0}` with `bl frame_hook`; we do those pops and return to the caller.
        .thumb_func
        .global frame_hook
frame_hook:
        push    {r5, r6}
        ldr     r3, =STATE
        ldr     r0, [r3]
        lsrs    r1, r0, #16
        ldr     r2, =MAGIC
        cmp     r1, r2
        bne     done
        lsls    r1, r0, #16
        beq     clear
        lsrs    r1, r1, #16
        cmp     r1, #6
        bhi     clear
        subs    r0, #1
        str     r0, [r3]
        ldr     r0, =FIELD_LIST
        ldr     r0, [r0]
        cmp     r0, #0
        beq     done
        ldr     r0, =OAM_COUNT
        ldr     r0, [r0]
        cmp     r0, #127
        bhs     done
        ldr     r0, =OBJ_TILE
        ldr     r0, [r0]
        ldr     r1, =0x3F0              @ 16 tiles needed
        cmp     r0, r1
        bhi     done
        ldr     r0, =QUEUE_N
        ldr     r0, [r0]
        ldr     r1, =398
        cmp     r0, r1
        bhi     done
        @ screen position: world - camera - shake, 32x32 centred on the body
        ldrh    r5, [r3, #4]
        ldrh    r6, [r3, #6]
        ldr     r2, =CAMERA
        ldrh    r0, [r2, #0]
        subs    r5, r5, r0
        ldrh    r0, [r2, #8]
        subs    r5, r5, r0
        subs    r5, #16
        ldrh    r0, [r2, #2]
        subs    r6, r6, r0
        ldrh    r0, [r2, #10]
        subs    r6, r6, r0
        subs    r6, #28
        movs    r0, r5
        adds    r0, #32
        ldr     r1, =(240 + 32 - 1)
        cmp     r0, r1
        bhi     done
        movs    r0, r6
        adds    r0, #32
        cmp     r0, #(160 + 32 - 1)
        bhi     done
        @ queue the 16 tiles (512 B) to the next free OBJ tiles
        ldr     r0, =OBJ_TILE
        ldr     r4, [r0]
        lsls    r1, r4, #5
        ldr     r0, =OBJ_BASE
        ldr     r0, [r0]
        adds    r1, r1, r0
        ldr     r0, =TILES
        movs    r2, #128
        lsls    r2, r2, #2
        ldr     r3, =0x08001349         @ native copy enqueue(src, dst, len); keeps r4-r7
        bl      call_r3
        ldr     r0, =OBJ_TILE
        ldr     r1, [r0]
        adds    r1, #16
        str     r1, [r0]
        ldr     r0, =OBJ_PAL15_1
        movs    r1, #0x1F               @ pure red
        strh    r1, [r0]
        ldr     r0, =PAL_BUF15_1
        strh    r1, [r0]
        @ slash goes in OAM slot 0 (drawn on top); old slot 0 attrs 0-2 move to slot n
        ldr     r2, =OAM_COUNT
        ldr     r3, [r2]
        adds    r0, r3, #1
        str     r0, [r2]
        ldr     r2, =OAM_SHADOW
        lsls    r3, r3, #3
        adds    r3, r3, r2
        ldrh    r0, [r2, #0]
        strh    r0, [r3, #0]
        ldrh    r0, [r2, #2]
        strh    r0, [r3, #2]
        ldrh    r0, [r2, #4]
        strh    r0, [r3, #4]
        lsls    r6, r6, #24             @ attr0: y, square, 4bpp
        lsrs    r6, r6, #24
        strh    r6, [r2, #0]
        lsls    r5, r5, #23             @ attr1: x, size 32x32
        lsrs    r5, r5, #23
        movs    r0, #1
        lsls    r0, r0, #15
        orrs    r5, r0
        strh    r5, [r2, #2]
        ldr     r0, =0x3FF              @ attr2: tile, priority 0, palette 15
        ands    r4, r0
        movs    r0, #0xF
        lsls    r0, r0, #12
        orrs    r4, r0
        strh    r4, [r2, #4]
        b       done
clear:
        movs    r0, #0
        str     r0, [r3]
done:
        pop     {r5, r6}
        pop     {r4}
        pop     {r0}
        bx      r0
        .ltorg
