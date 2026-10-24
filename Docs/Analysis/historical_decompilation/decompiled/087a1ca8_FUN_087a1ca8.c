
/* WARNING: Control flow encountered bad instruction data */

void FUN_087a1ca8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18)

{
  int unaff_r5;
  int unaff_r7;
  undefined4 unaff_r8;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 unaff_s21;
  undefined4 unaff_s22;
  undefined4 unaff_s23;
  undefined4 unaff_s24;
  undefined4 unaff_s25;
  undefined4 unaff_s26;
  undefined4 unaff_s27;
  undefined4 unaff_s28;
  undefined4 unaff_s29;
  undefined4 unaff_s30;
  
  if (in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,&stack0x00000154);
    coprocessor_storelong(5,in_cr13,&stack0x00000154);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(8,in_cr13,&stack0x00000154);
    coprocessor_loadlong(5,in_cr5,&stack0x00000198);
    coprocessor_loadlong(6,in_cr5,&stack0x00000000);
    coprocessor_storelong(5,in_cr6,unaff_r11);
    coprocessor_loadlong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12 + 0xcc);
    coprocessor_loadlong(5,in_cr7,&stack0x00000330);
    coprocessor_loadlong(6,in_cr7,&stack0x00000000);
    coprocessor_storelong(0xd,in_cr10,in_r12);
    coprocessor_loadlong(0xc,in_cr6,unaff_r10 + 0x370);
  }
  else {
    coprocessor_storelong(5,in_cr12,in_r12);
    coprocessor_storelong(6,in_cr12,in_r12);
    coprocessor_loadlong(6,in_cr12,in_r12);
    unaff_s25 = *in_r12;
    unaff_s26 = in_r12[1];
    unaff_s27 = in_r12[2];
    unaff_s28 = in_r12[3];
    unaff_s29 = in_r12[4];
    unaff_s30 = in_r12[5];
    param_1 = in_r12[7];
    param_2 = in_r12[8];
    param_3 = in_r12[9];
    param_4 = in_r12[10];
    param_5 = in_r12[0xb];
    param_6 = in_r12[0xc];
    param_7 = in_r12[0xd];
    param_8 = in_r12[0xe];
    param_9 = in_r12[0xf];
    param_10 = in_r12[0x10];
    param_11 = in_r12[0x11];
    param_12 = in_r12[0x12];
    param_13 = in_r12[0x13];
    param_14 = in_r12[0x14];
    *in_r12 = unaff_s25;
    in_r12[1] = unaff_s26;
    in_r12[2] = unaff_s27;
    in_r12[3] = unaff_s28;
    in_r12[4] = unaff_s29;
    coprocessor_loadlong(5,in_cr6,&stack0x00000000);
    coprocessor_storelong(6,in_cr6,unaff_r11);
    coprocessor_loadlong(5,in_cr6,unaff_r10 + 0x198);
    coprocessor_storelong(5,in_cr5,unaff_r10);
    coprocessor_storelong(5,in_cr5,unaff_r8);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000334);
    coprocessor_loadlong(0xc,in_cr13,&stack0x00000370);
    coprocessor_storelong(0xd,in_cr13,&stack0x00000000);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(6,in_cr6,in_r12);
    coprocessor_loadlong(7,in_cr5,in_r12);
    coprocessor_storelong(8,in_cr5,in_r12);
    coprocessor_storelong(0xc,in_cr5,unaff_r10);
  }
  if (in_CY && !in_ZR) {
    coprocessor_function(0xc,0xc,6,in_cr12,in_cr12,in_cr12);
    coprocessor_function2(0xc,0xc,6,in_cr12,in_cr12,in_cr12);
    coprocessor_storelong(0xc,in_cr12,in_r12 + 0xcc);
    if (in_ZR || in_NG != in_OV) {
      coprocessor_storelong(0xc,in_cr12,in_r12 + 0xcc);
    }
    if (!in_CY || in_ZR) {
      coprocessor_storelong(0xc,in_cr12,in_r12);
      coprocessor_storelong(0xc,in_cr12,in_r12 + 0xcc);
      *in_r12 = unaff_s21;
      in_r12[1] = unaff_s22;
      in_r12[2] = unaff_s23;
      in_r12[3] = unaff_s24;
      in_r12[4] = unaff_s25;
      in_r12[5] = unaff_s26;
      in_r12[6] = unaff_s27;
      in_r12[7] = unaff_s28;
      in_r12[8] = unaff_s29;
      in_r12[9] = unaff_s30;
      unaff_r7 = *(int *)(unaff_r5 + -0x14);
      param_18 = *(undefined4 *)(unaff_r5 + -0x1c);
      param_16 = *(undefined4 *)(unaff_r5 + -0x20);
    }
    if (in_ZR || in_NG != in_OV) {
      coprocessor_loadlong(7,in_cr7,unaff_r7 + -0x374);
      coprocessor_loadlong(7,in_cr7,unaff_r7 + -0x6e8);
      func_0x0a5800d4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_17,
                      param_18);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

