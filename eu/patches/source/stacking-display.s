.syntax unified
.cpu arm7tdmi
.thumb
.text
@ EU glyph encoding: space=0x51, x=0x38, digits=0x41..0x4a.
start:
 push {r4,lr}
 movs r4,r0
 ldr r0,[sp,#0x70]
 bl classifier
 cmp r0,#0
 beq done
 ldr r2,[sp,#0x70]
 ldrh r2,[r2,#4]
 cmp r2,#0
 bne quantity
 movs r2,#1
quantity:
 movs r3,#0x51
 strb r3,[r1]
 adds r1,#1
 movs r3,#0x38
 strb r3,[r1]
 adds r1,#1
 cmp r2,#100
 bne tens
 movs r3,#0x42
 strb r3,[r1]
 movs r3,#0x41
 strb r3,[r1,#1]
 strb r3,[r1,#2]
 adds r1,#3
 b done
tens:
 movs r3,#0
loop:
 cmp r2,#10
 blo units
 subs r2,#10
 adds r3,#1
 b loop
units:
 cmp r3,#0
 beq ones
 adds r3,#0x41
 strb r3,[r1]
 adds r1,#1
ones:
 adds r2,#0x41
 strb r2,[r1]
 adds r1,#1
done:
 strb r4,[r1]
 pop {r4}
 pop {r0}
 mov r12,r0
 movs r0,#0
 bx r12
.set classifier, start + (0x33d19c-0x33ceec)
