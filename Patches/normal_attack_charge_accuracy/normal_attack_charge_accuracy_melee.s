
    .syntax unified
    .thumb
    .text
@ in place at 0x0801fcf2; was: mov r0,r8; adds r0,#0x42; movs r4,#0; ldrsh r3,[r0,r4];
@ str r3,[sp,#0x20]; b 0x80200f0; .hword 0 (pad). r0/r3/r4 are dead at the join
@ (0x080200F0 reloads r0, 0x080200F6 r3, 0x080200FC r4) as in the original.
    mov   r0, r8
    movs  r4, #0x42
    ldrsh r3, [r0, r4]
    lsls  r0, r3, #1
    adds  r3, r3, r0            @ A = 3*DEX, as the charge path 0x0801FD0C
    str   r3, [sp, #0x20]
    .hword 0xe1f7   @ b 0x80200f0
