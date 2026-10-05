
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08ab1e9c(undefined4 param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  
  if (!(bool)in_ZR) {
    param_1 = func_0x0799f590();
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return unaff_r9[1];
  }
  *unaff_r9 = param_1;
  unaff_r9[1] = unaff_r4;
  unaff_r9[2] = unaff_r5;
  unaff_r9[3] = unaff_r7;
  unaff_r9[4] = unaff_r8;
  unaff_r9[5] = unaff_r9;
  unaff_r9[6] = unaff_r11;
  unaff_r9[7] = register0x00000054;
  unaff_r9[8] = 0x8ab1eac;
  if ((bool)in_CY && !(bool)in_ZR) {
    if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!(bool)in_OV) {
      *unaff_r8 = param_1;
      unaff_r8[1] = unaff_r4;
      unaff_r8[2] = unaff_r8;
      unaff_r8[3] = unaff_r11;
      unaff_r8[4] = in_r12;
      unaff_r8[5] = 0x8ab1ebc;
    }
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_r8[1] = param_1;
    unaff_r8[2] = unaff_r4;
    unaff_r8[3] = unaff_r7;
    unaff_r8[4] = unaff_r11;
    unaff_r8[5] = 0x8ab1ec0;
    if (in_NG != in_OV) {
      func_0x0799c8cc();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_1;
}

