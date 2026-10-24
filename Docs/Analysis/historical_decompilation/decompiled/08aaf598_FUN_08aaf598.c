
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08aaf598(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 *unaff_r10;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (!(bool)in_CY || (bool)in_ZR) {
    *unaff_r11 = param_2;
    unaff_r11[1] = param_4;
    unaff_r11[2] = unaff_r4;
    unaff_r11[3] = unaff_r8;
    unaff_r11[4] = unaff_r10;
    unaff_r11[5] = in_r12;
    unaff_r11[6] = register0x00000054;
    unaff_r11[7] = 0x8aaf5a0;
    *unaff_r10 = param_1;
    unaff_r10[1] = param_2;
    unaff_r10[2] = param_4;
    unaff_r10[3] = unaff_r4;
    unaff_r10[4] = unaff_r8;
    unaff_r10[5] = unaff_r9;
    unaff_r10[6] = unaff_r11;
    unaff_r10[7] = in_r12;
    unaff_r10[8] = register0x00000054;
    unaff_r10[9] = 0x8aaf5a4;
  }
  if (in_NG == in_OV) {
    return unaff_r10[1];
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x077dbca8();
      param_2 = extraout_r1;
      param_4 = extraout_r3;
      in_r12 = extraout_r12;
    }
    if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      unaff_r11[1] = param_2;
      unaff_r11[2] = param_4;
      unaff_r11[3] = unaff_r4;
      unaff_r11[4] = unaff_r5;
      unaff_r11[5] = unaff_r7;
      unaff_r11[6] = unaff_r8;
      unaff_r11[7] = in_r12;
      unaff_r11[8] = register0x00000054;
      unaff_r11[9] = 0x8aaf5c4;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_r11[1] = param_1;
  unaff_r11[2] = param_2;
  unaff_r11[3] = param_4;
  unaff_r11[4] = unaff_r4;
  unaff_r11[5] = unaff_r6;
  unaff_r11[6] = unaff_r8;
  unaff_r11[7] = in_r12;
  unaff_r11[8] = register0x00000054;
  unaff_r11[9] = 0x8aaf5b0;
  unaff_r11[10] = param_2;
  unaff_r11[0xb] = param_4;
  unaff_r11[0xc] = unaff_r4;
  unaff_r11[0xd] = unaff_r5;
  unaff_r11[0xe] = unaff_r7;
  unaff_r11[0xf] = unaff_r8;
  unaff_r11[0x10] = in_r12;
  unaff_r11[0x11] = unaff_lr;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

