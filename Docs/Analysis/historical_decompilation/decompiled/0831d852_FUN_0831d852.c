
/* WARNING: Control flow encountered bad instruction data */

void FUN_0831d852(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int unaff_r4;
  uint unaff_r5;
  uint *unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r9;
  uint unaff_r11;
  char cVar2;
  char extraout_r12;
  undefined4 in_r12;
  undefined1 *puVar3;
  int unaff_lr;
  uint uVar4;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr12;
  undefined4 in_cr15;
  undefined4 in_s9;
  undefined4 extraout_s9;
  undefined4 extraout_s9_00;
  undefined8 unaff_d11;
  undefined8 uVar6;
  undefined8 in_d31;
  
  bVar5 = in_CY;
  if (in_NG != in_OV) {
    bVar5 = 0xd27fffff < param_4 || CARRY4(param_4 + 0x2d800000,(uint)in_CY);
    in_OV = SCARRY4(param_4,0x2d800000) != SCARRY4(param_4 + 0x2d800000,(uint)in_CY);
    unaff_r11 = param_4 + 0x2d800000 + (uint)in_CY;
    in_NG = (int)unaff_r11 < 0;
    in_ZR = unaff_r11 == 0;
  }
  if (in_NG == in_OV) {
    software_interrupt(0xafb0b2);
    puVar3 = &stack0x000002b8;
    register0x00000054 = (BADSPACEBASE *)&stack0x000002b8;
    coprocessor_store(0xd,in_cr10,puVar3);
    cVar2 = (char)in_r12 + -0x50;
    coprocessor_store(0xc,in_cr10,in_r12);
    uVar4 = unaff_lr + 0x2b0;
    coprocessor_store(0xd,in_cr10,uVar4);
  }
  else {
    unaff_r11 = (unaff_r5 >> 0x10) << 0x18 | (unaff_r5 >> 0x18) << 0x10 | (unaff_r5 & 0xff) << 8 |
                unaff_r5 >> 8 & 0xff;
    uVar4 = 0x831d876;
    param_1 = func_0x071cc35e();
    in_s9 = extraout_s9;
    cVar2 = extraout_r12;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    register0x00000054 = (BADSPACEBASE *)coprocessor_movefromRt(10,6,6,in_cr12,in_cr7);
  }
  else {
    *(short *)(param_1 + 0xec) = (short)unaff_r11;
    *(char *)(unaff_r7 + (unaff_r4 >> 0xb)) = cVar2;
    coprocessor_function(10,0xc,6,in_cr12,in_cr12,in_cr9);
  }
  *unaff_r6 = unaff_r5;
  unaff_r6[1] = (uint)unaff_r6;
  unaff_r6[2] = unaff_r7;
  unaff_r6[3] = unaff_r8;
  unaff_r6[4] = unaff_r9;
  unaff_r6[5] = (uint)register0x00000054;
  unaff_r6[6] = uVar4;
  unaff_r6[7] = 0x831d892;
  uVar1 = VectorGetElement(unaff_d11,1,4,0);
  uVar6 = VectorRoundDoubleMultiplyHighHalf(in_d31,uVar1,4,0);
  SatQ(uVar6,4,0);
  coprocessor_loadlong2(7,in_cr15,unaff_r9 + 0x3d8);
  if ((bool)in_ZR) {
    *(uint *)(unaff_r5 + param_1 * -0x40) = param_1;
  }
  else {
    bVar5 = false;
    in_NG = '\0';
  }
  if (!(bool)in_ZR && (param_1 & 0x2c) != 0) {
    coprocessor_movefromRt(9,0,0,in_cr10,in_cr6);
  }
  if ((bool)bVar5) {
    uVar4 = 0x831d8a6;
    param_1 = func_0x08d27132();
    in_s9 = extraout_s9_00;
  }
  if ((bool)in_NG && (int)((uint)register0x00000054 ^ unaff_r8 >> (unaff_r11 & 0xff)) < 0) {
    unaff_r6[8] = uVar4;
    unaff_r6[7] = unaff_r9 + 0x3d8;
    unaff_r6[6] = unaff_r8;
    unaff_r6[5] = (uint)(unaff_r6 + 8);
    unaff_r6[4] = param_1;
    *(undefined4 *)(unaff_r11 - 0x124) = in_s9;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

