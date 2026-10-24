
/* WARNING: Control flow encountered bad instruction data */

void FUN_088189ca(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 uVar1;
  undefined4 extraout_r2_02;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 *unaff_r4;
  int unaff_r6;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined1 *unaff_r9;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  undefined4 *puVar2;
  undefined8 *in_r12;
  undefined8 *extraout_r12;
  undefined8 *extraout_r12_00;
  undefined8 *extraout_r12_01;
  undefined8 *puVar3;
  undefined8 *extraout_r12_02;
  undefined8 *extraout_r12_03;
  undefined8 *extraout_r12_04;
  undefined8 *extraout_r12_05;
  undefined8 *puVar4;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined8 in_d0;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  undefined4 extraout_s2_01;
  undefined8 in_d1;
  undefined4 extraout_s3;
  undefined4 extraout_s3_00;
  undefined4 extraout_s3_01;
  undefined4 extraout_s4;
  undefined4 extraout_s4_00;
  undefined4 extraout_s4_01;
  undefined8 in_d2;
  undefined4 extraout_s5;
  undefined4 extraout_s5_00;
  undefined4 extraout_s5_01;
  undefined4 extraout_s6;
  undefined4 extraout_s6_00;
  undefined4 extraout_s6_01;
  undefined8 in_d3;
  undefined4 extraout_s7;
  undefined4 extraout_s7_00;
  undefined4 extraout_s7_01;
  undefined8 in_d4;
  undefined8 extraout_d4;
  undefined8 extraout_d4_00;
  undefined8 extraout_d4_01;
  undefined8 in_d5;
  undefined8 extraout_d5;
  undefined8 extraout_d5_00;
  undefined8 extraout_d5_01;
  undefined8 in_d6;
  undefined8 extraout_d6;
  undefined8 extraout_d6_00;
  undefined8 extraout_d6_01;
  undefined8 in_d7;
  undefined8 extraout_d7;
  undefined8 extraout_d7_00;
  undefined8 extraout_d7_01;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  undefined8 in_d20;
  undefined8 in_d21;
  undefined8 in_d27;
  undefined8 in_d28;
  undefined8 in_d29;
  undefined8 in_d30;
  undefined8 in_d31;
  
  if (in_NG != in_OV) {
    unaff_lr = 0x88189ce;
    param_1 = func_0x077060be();
    in_d3 = CONCAT44(extraout_s7,extraout_s6);
    in_d2 = CONCAT44(extraout_s5,extraout_s4);
    in_d1 = CONCAT44(extraout_s3,extraout_s2);
    in_d0 = CONCAT44(extraout_s1,extraout_s0);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
    in_d4 = extraout_d4;
    in_d5 = extraout_d5;
    in_d6 = extraout_d6;
    in_d7 = extraout_d7;
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(0xb,in_cr11,in_r12);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_loadlong(0xd,in_cr12,&stack0x00000334);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
  }
  else {
    *in_r12 = in_d28;
    in_r12[1] = in_d29;
    in_r12[2] = in_d30;
    in_r12[3] = in_d31;
    in_r12[4] = in_d0;
    in_r12[5] = in_d1;
    in_r12[6] = in_d2;
    in_r12[7] = in_d3;
    in_r12[8] = in_d4;
    in_r12[9] = in_d5;
    in_r12[10] = in_d6;
    in_r12[0xb] = in_d7;
    in_r12[0xc] = unaff_d8;
    in_r12[0xd] = unaff_d9;
    in_r12[0xe] = unaff_d10;
    in_r12[0xf] = unaff_d11;
    in_r12[0x10] = unaff_d12;
    in_r12[0x11] = unaff_d13;
    in_r12[0x12] = unaff_d14;
    in_r12[0x13] = unaff_d15;
    in_r12[0x14] = in_d16;
    in_r12[0x15] = in_d17;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x88189ea;
    param_1 = func_0x07710162();
    in_d3 = CONCAT44(extraout_s7_00,extraout_s6_00);
    in_d2 = CONCAT44(extraout_s5_00,extraout_s4_00);
    in_d1 = CONCAT44(extraout_s3_00,extraout_s2_00);
    in_d0 = CONCAT44(extraout_s1_00,extraout_s0_00);
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
    in_d4 = extraout_d4_00;
    in_d5 = extraout_d5_00;
    in_d6 = extraout_d6_00;
    in_d7 = extraout_d7_00;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x88189ee;
    param_1 = func_0x07705cc2();
    in_d3 = CONCAT44(extraout_s7_01,extraout_s6_01);
    in_d2 = CONCAT44(extraout_s5_01,extraout_s4_01);
    in_d1 = CONCAT44(extraout_s3_01,extraout_s2_01);
    in_d0 = CONCAT44(extraout_s1_01,extraout_s0_01);
    param_3 = extraout_r2_01;
    param_4 = extraout_r3_01;
    in_r12 = extraout_r12_01;
    in_d4 = extraout_d4_01;
    in_d5 = extraout_d5_01;
    in_d6 = extraout_d6_01;
    in_d7 = extraout_d7_01;
  }
  puVar3 = in_r12;
  if (in_NG != in_OV) {
    unaff_r11 = *(undefined4 **)((int)unaff_r11 + 0xbbb);
    puVar3 = (undefined8 *)((int)in_r12 + 0x2ec);
    coprocessor_load(0xb,in_cr5,in_r12);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(6,in_cr11,&stack0x00000330);
    coprocessor_loadlong(0xc,in_cr12,&stack0x00000330);
    coprocessor_loadlong(0xc,in_cr12,&stack0x00000374);
  }
  else {
    *puVar3 = in_d27;
    puVar3[1] = in_d28;
    puVar3[2] = in_d29;
    puVar3[3] = in_d30;
    puVar3[4] = in_d31;
    puVar3[5] = in_d0;
    puVar3[6] = in_d1;
    puVar3[7] = in_d2;
    puVar3[8] = in_d3;
    puVar3[9] = in_d4;
    puVar3[10] = in_d5;
    puVar3[0xb] = in_d6;
    puVar3[0xc] = in_d7;
    puVar3[0xd] = unaff_d8;
    puVar3[0xe] = unaff_d9;
    puVar3[0xf] = unaff_d10;
    puVar3[0x10] = unaff_d11;
    puVar3[0x11] = unaff_d12;
    puVar3[0x12] = unaff_d13;
    puVar3[0x13] = unaff_d14;
    puVar3[0x14] = unaff_d15;
    puVar3[0x15] = in_d16;
    puVar3[0x16] = in_d17;
    puVar3[0x17] = in_d18;
    puVar3[0x18] = in_d19;
    puVar3[0x19] = in_d20;
    puVar3[0x1a] = in_d21;
  }
  puVar2 = unaff_r11;
  if (in_NG != in_OV) {
    *(undefined4 *)(unaff_r9 + -4) = 0x8818a0e;
    *(undefined4 *)(unaff_r9 + -8) = unaff_lr;
    *(undefined8 **)(unaff_r9 + -0xc) = puVar3;
    *(undefined4 **)(unaff_r9 + -0x10) = unaff_r11;
    *(undefined4 *)(unaff_r9 + -0x14) = unaff_r10;
    *(undefined4 *)(unaff_r9 + -0x18) = unaff_r8;
    *(int *)(unaff_r9 + -0x1c) = unaff_r7;
    *(int *)(unaff_r9 + -0x20) = unaff_r6;
    *(undefined4 **)(unaff_r9 + -0x24) = unaff_r4;
    *(undefined4 *)(unaff_r9 + -0x28) = param_4;
    *(undefined4 *)(unaff_r9 + -0x2c) = param_3;
    *(undefined4 *)(unaff_r9 + -0x30) = param_1;
    puVar2 = (undefined4 *)((int)unaff_r11 + 0x499);
    unaff_r9 = (undefined1 *)*unaff_r11;
    func_0x076ff8ea();
    puVar3 = extraout_r12_02;
  }
  if (!(bool)in_NG) {
    func_0x07706106();
    puVar3 = extraout_r12_03;
  }
  if (in_NG != in_OV) {
    func_0x0a30790a();
    puVar3 = extraout_r12_04;
  }
  if ((bool)in_OV) {
    func_0x07b0b7ce();
    puVar3 = extraout_r12_05;
  }
  puVar4 = puVar3;
  if (in_NG != in_OV) {
    puVar4 = (undefined8 *)((int)puVar3 + -0x2ec);
    coprocessor_storelong(0xb,in_cr11,puVar3);
  }
  if ((bool)in_OV) {
    coprocessor_storelong(0xc,in_cr6,&stack0x00000000);
  }
  if ((bool)in_NG) {
    *unaff_r9 = (char)puVar4;
    *(char *)puVar2 = (char)unaff_r4;
    uVar1 = puVar2[-0x110];
    unaff_r6 = puVar2[-0x10f];
  }
  else {
    func_0x0a2e9b4e();
    uVar1 = extraout_r2_02;
  }
  if ((bool)in_OV) {
    uVar1 = *(undefined4 *)(unaff_r6 + 4);
    unaff_r4 = *(undefined4 **)(unaff_r6 + 8);
    unaff_r7 = *(int *)(unaff_r6 + 0x10);
    unaff_r6 = unaff_r6 + 0x24;
  }
  if ((bool)in_CY) {
    puVar2 = (undefined4 *)((int)unaff_r4 + -0x222);
    *unaff_r4 = uVar1;
    unaff_r4 = unaff_r4 + -0x111;
    *puVar2 = uVar1;
  }
  if ((bool)in_NG) {
    *(char *)unaff_r4 = (char)uVar1;
    *(char *)((int)unaff_r4 + -0x242) = (char)(char *)((int)unaff_r4 + -0x242) + -0x42;
  }
  else {
    *(int *)(unaff_r6 + 0x575) = unaff_r7 + -0x434;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

