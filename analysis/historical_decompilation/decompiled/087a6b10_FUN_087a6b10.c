
/* WARNING: Control flow encountered bad instruction data */

void FUN_087a6b10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined4 unaff_s16;
  undefined4 unaff_s17;
  undefined4 unaff_s18;
  undefined4 unaff_s19;
  undefined4 unaff_s20;
  undefined4 unaff_s21;
  undefined4 unaff_s22;
  undefined4 unaff_s23;
  undefined4 unaff_s29;
  undefined4 unaff_s30;
  undefined4 unaff_s31;
  
  if (in_CY && !in_ZR) {
    *unaff_r8 = param_17;
    unaff_r8[1] = param_19;
    unaff_r8[2] = unaff_r5;
    unaff_r8[3] = unaff_r6;
    unaff_r8[4] = unaff_r8;
    unaff_r8[5] = unaff_r10;
    unaff_r8[6] = in_r12;
    unaff_r8[7] = register0x00000054;
    unaff_r8[8] = 0x87a6b18;
    *unaff_r8 = param_18;
    unaff_r8[1] = param_19;
    unaff_r8[2] = unaff_r5;
    unaff_r8[3] = unaff_r6;
    unaff_r8[4] = unaff_r9;
    unaff_r8[5] = unaff_r10;
    unaff_r8[6] = in_r12;
    unaff_r8[7] = register0x00000054;
    unaff_r8[8] = 0x87a6b1c;
    *unaff_r8 = param_18;
    unaff_r8[1] = param_19;
    unaff_r8[2] = unaff_r5;
    unaff_r8[3] = unaff_r6;
    unaff_r8[4] = unaff_r9;
    unaff_r8[5] = unaff_r10;
    unaff_r8[6] = in_r12;
    unaff_r8[7] = register0x00000054;
    unaff_r8[8] = 0x87a6b20;
    *unaff_r8 = param_17;
    unaff_r8[1] = param_19;
    unaff_r8[2] = param_20;
    unaff_r8[3] = unaff_r4;
    unaff_r8[4] = unaff_r6;
    unaff_r8[5] = unaff_r7;
    unaff_r8[6] = unaff_r8;
    unaff_r8[7] = unaff_r10;
    unaff_r8[8] = unaff_r11;
    unaff_r8[9] = in_r12;
    unaff_r8[10] = register0x00000054;
    unaff_r8[0xb] = 0x87a6b24;
  }
  coprocessor_function(0xc,0xe,6,in_cr15,in_cr14,in_cr12);
  if (!in_ZR && in_NG == in_OV) {
    *in_r12 = unaff_s29;
    in_r12[1] = unaff_s30;
    in_r12[2] = unaff_s31;
    in_r12[3] = param_1;
    in_r12[4] = param_2;
    in_r12[5] = param_3;
    in_r12[6] = param_4;
    in_r12[7] = param_5;
    in_r12[8] = param_6;
    in_r12[9] = param_7;
    in_r12[10] = param_8;
    in_r12[0xb] = param_9;
    in_r12[0xc] = param_10;
    in_r12[0xd] = param_11;
    in_r12[0xe] = param_12;
    in_r12[0xf] = param_13;
    in_r12[0x10] = param_14;
    in_r12[0x11] = param_15;
    in_r12[0x12] = param_16;
    in_r12[0x13] = unaff_s16;
    in_r12[0x14] = unaff_s17;
    in_r12[0x15] = unaff_s18;
    in_r12[0x16] = unaff_s19;
    in_r12[0x17] = unaff_s20;
    in_r12[0x18] = unaff_s21;
    in_r12[0x19] = unaff_s22;
    in_r12[0x1a] = unaff_s23;
  }
  if (in_CY && !in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

