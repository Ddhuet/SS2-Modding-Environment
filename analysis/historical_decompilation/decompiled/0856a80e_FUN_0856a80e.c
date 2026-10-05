
/* WARNING: Control flow encountered bad instruction data */

undefined8
FUN_0856a80e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
            undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
            undefined4 param_21,undefined4 param_22,undefined4 param_23)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 *unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  uint unaff_r8;
  undefined4 *unaff_r9;
  uint unaff_r10;
  uint unaff_r11;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr12;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  undefined4 extraout_s3;
  undefined4 extraout_s3_00;
  undefined4 extraout_s4;
  undefined4 extraout_s4_00;
  undefined4 extraout_s5;
  undefined4 extraout_s5_00;
  undefined4 extraout_s6;
  undefined4 extraout_s6_00;
  undefined4 extraout_s7;
  undefined4 extraout_s7_00;
  undefined4 extraout_s8;
  undefined4 extraout_s8_00;
  undefined4 extraout_s9;
  undefined4 extraout_s9_00;
  undefined4 extraout_s10;
  undefined4 extraout_s10_00;
  undefined4 extraout_s11;
  undefined4 extraout_s11_00;
  undefined4 extraout_s12;
  undefined4 extraout_s12_00;
  undefined4 extraout_s13;
  undefined4 extraout_s13_00;
  undefined4 extraout_s14;
  undefined4 extraout_s14_00;
  undefined4 extraout_s15;
  undefined4 extraout_s15_00;
  undefined4 unaff_s16;
  undefined4 unaff_s17;
  undefined4 unaff_s18;
  undefined4 unaff_s19;
  undefined4 unaff_s24;
  undefined4 unaff_s25;
  undefined4 unaff_s26;
  undefined4 unaff_s27;
  undefined4 unaff_s28;
  undefined4 unaff_s29;
  undefined4 unaff_s30;
  undefined4 unaff_s31;
  
  if (!(bool)in_NG) {
    unaff_r11 = (uint)*(byte *)((int)unaff_r5 - 0x555);
    unaff_r10 = (uint)*(byte *)((int)unaff_r9 + -0x959);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return CONCAT44(param_18,param_22);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    coprocessor_loadlong(5,in_cr9,unaff_lr);
    param_22 = param_17;
    param_23 = param_19;
  }
  if (!(bool)in_NG) {
    coprocessor_loadlong(9,in_cr9,unaff_lr);
    coprocessor_storelong(9,in_cr9,unaff_lr);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    register0x00000054 = (BADSPACEBASE *)&stack0x00000264;
    param_21 = param_12;
    param_22 = param_13;
    param_23 = param_14;
    param_17 = func_0x07c812a6();
    param_18 = extraout_r1;
    param_19 = extraout_r2;
    param_20 = extraout_r3;
    param_1 = extraout_s0;
    param_2 = extraout_s1;
    param_3 = extraout_s2;
    param_4 = extraout_s3;
    param_5 = extraout_s4;
    param_6 = extraout_s5;
    param_7 = extraout_s6;
    param_8 = extraout_s7;
    param_9 = extraout_s8;
    param_10 = extraout_s9;
    param_11 = extraout_s10;
    param_12 = extraout_s11;
    param_13 = extraout_s12;
    param_14 = extraout_s13;
    param_15 = extraout_s14;
    param_16 = extraout_s15;
  }
  if (in_NG == in_OV) {
    *(undefined4 *)(unaff_r11 + 4) = param_19;
    *(undefined4 *)(unaff_r11 + 8) = param_20;
    *(undefined4 *)(unaff_r11 + 0xc) = unaff_r6;
    *(undefined4 *)(unaff_r11 + 0x10) = unaff_r7;
    *(uint *)(unaff_r11 + 0x14) = unaff_r8;
    *(uint *)(unaff_r11 + 0x18) = unaff_r10;
    *(BADSPACEBASE **)(unaff_r11 + 0x1c) = register0x00000054;
    *(undefined4 *)(unaff_r11 + 0x20) = 0x856a83a;
    unaff_r11 = unaff_r11 + 0x20;
  }
  if (!(bool)in_NG) {
    return CONCAT44(unaff_r5[1],param_17);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    unaff_r9 = (undefined4 *)(uint)*(byte *)((int)unaff_r5 - 0x9a9);
  }
  if (!(bool)in_ZR && in_OV == '\x01') {
    param_17 = func_0x06fd0f2e();
    param_18 = extraout_r1_00;
    param_20 = extraout_r3_00;
    param_1 = extraout_s0_00;
    param_2 = extraout_s1_00;
    param_3 = extraout_s2_00;
    param_4 = extraout_s3_00;
    param_5 = extraout_s4_00;
    param_6 = extraout_s5_00;
    param_7 = extraout_s6_00;
    param_8 = extraout_s7_00;
    param_9 = extraout_s8_00;
    param_10 = extraout_s9_00;
    param_11 = extraout_s10_00;
    param_12 = extraout_s11_00;
    param_13 = extraout_s12_00;
    param_14 = extraout_s13_00;
    param_15 = extraout_s14_00;
    param_16 = extraout_s15_00;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *unaff_r5 = unaff_s24;
    unaff_r5[1] = unaff_s25;
    unaff_r5[2] = unaff_s26;
    unaff_r5[3] = unaff_s27;
    unaff_r5[4] = unaff_s28;
    unaff_r5[5] = unaff_s29;
    unaff_r5[6] = unaff_s30;
    unaff_r5[7] = unaff_s31;
    unaff_r5[8] = param_1;
    unaff_r5[9] = param_2;
    unaff_r5[10] = param_3;
    unaff_r5[0xb] = param_4;
    unaff_r5[0xc] = param_5;
    unaff_r5[0xd] = param_6;
    unaff_r5[0xe] = param_7;
    unaff_r5[0xf] = param_8;
    unaff_r5[0x10] = param_9;
    unaff_r5[0x11] = param_10;
    unaff_r5[0x12] = param_11;
    unaff_r5[0x13] = param_12;
    unaff_r5[0x14] = param_13;
    unaff_r5[0x15] = param_14;
    unaff_r5[0x16] = param_15;
    unaff_r5[0x17] = param_16;
    unaff_r5[0x18] = unaff_s16;
    unaff_r5[0x19] = unaff_s17;
    unaff_r5[0x1a] = unaff_s18;
    unaff_r5[0x1b] = unaff_s19;
    return CONCAT44(param_18,param_17);
  }
  coprocessor_load(0xb,in_cr12,(undefined4 *)(unaff_r10 + 0x330));
  if (in_NG != in_OV) {
    func_0x0681574a();
    param_18 = extraout_r1_01;
    param_20 = extraout_r3_01;
  }
  if ((bool)in_CY) {
    unaff_r8 = (uint)unaff_r5 ^ 0xa0000005;
  }
  if (!(bool)in_NG) {
    return CONCAT44(param_18,*unaff_r9);
  }
  if (in_OV == '\x01') {
    *(undefined4 *)(unaff_r10 + 0x330) = param_18;
    *(undefined4 *)(unaff_r10 + 0x334) = param_20;
    *(undefined4 **)(unaff_r10 + 0x338) = unaff_r5;
    *(undefined4 *)(unaff_r10 + 0x33c) = unaff_r7;
    *(uint *)(unaff_r10 + 0x340) = unaff_r11;
    *(undefined4 *)(unaff_r10 + 0x344) = 0x856a86a;
    func_0x0741529a();
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x07cdcb1a();
    }
    coprocessor_store2(0xb,in_cr8,unaff_r8 + 0x374);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

