
/* WARNING: Control flow encountered bad instruction data */

undefined8
FUN_082235e8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            undefined1 *param_6)

{
  int extraout_r2;
  undefined1 *extraout_r3;
  int unaff_r6;
  int *unaff_r7;
  undefined8 *unaff_r8;
  int unaff_r9;
  int unaff_r10;
  undefined4 *unaff_r11;
  undefined1 in_r12;
  undefined1 extraout_r12;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined4 unaff_s25;
  undefined4 unaff_s26;
  undefined4 unaff_s27;
  undefined4 unaff_s28;
  undefined4 unaff_s29;
  undefined4 unaff_s30;
  undefined4 unaff_s31;
  
  if (in_NG != in_OV) {
    return *unaff_r8;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x82235f4;
    param_3 = func_0x070d20dc();
    param_5 = extraout_r2;
    param_6 = extraout_r3;
    param_1 = extraout_s0;
    param_2 = extraout_s1;
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    unaff_r11 = (undefined4 *)coprocessor_movefromRt(0xc,5,5,in_cr13,in_cr12);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *(short *)(param_3 + 0xfe) = (short)unaff_r11;
    *param_6 = in_r12;
    *unaff_r7 = param_3;
    unaff_r7[1] = param_5;
    unaff_r7[2] = unaff_r6;
    unaff_r7[3] = (int)unaff_r7;
    unaff_r7[4] = unaff_r9;
    unaff_r7[5] = unaff_r10;
    unaff_r7[6] = unaff_lr;
    unaff_r7[7] = 0x8223608;
    *unaff_r11 = unaff_s25;
    unaff_r11[1] = unaff_s26;
    unaff_r11[2] = unaff_s27;
    unaff_r11[3] = unaff_s28;
    unaff_r11[4] = unaff_s29;
    unaff_r11[5] = unaff_s30;
    unaff_r11[6] = unaff_s31;
    unaff_r11[7] = param_1;
    unaff_r11[8] = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

