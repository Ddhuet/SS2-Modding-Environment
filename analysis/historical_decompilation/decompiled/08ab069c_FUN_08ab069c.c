
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08ab069c(undefined4 param_1)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r8;
  undefined4 *unaff_r9;
  int unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (!(bool)in_ZR) {
    param_1 = func_0x0799dd90();
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    return param_1;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if (!(bool)in_CY || (bool)in_ZR) {
      return param_1;
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      *(undefined4 **)(unaff_r11 + 4) = unaff_r8;
      *(undefined4 *)(unaff_r11 + 8) = in_r12;
      *(BADSPACEBASE **)(unaff_r11 + 0xc) = register0x00000054;
      *(undefined4 *)(unaff_r11 + 0x10) = 0x8ab06b8;
      unaff_r11 = unaff_r11 + 0x10;
    }
    if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      *unaff_r9 = unaff_r4;
      unaff_r9[1] = unaff_r8;
      unaff_r9[2] = in_r12;
      unaff_r9[3] = 0x8ab06c0;
    }
    else {
      *unaff_r8 = param_1;
      unaff_r8[1] = unaff_r4;
      unaff_r8[2] = unaff_r8;
      unaff_r8[3] = unaff_r11;
      unaff_r8[4] = 0x8ab06c4;
    }
    if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return *(undefined4 *)(unaff_r10 + 4);
  }
  return param_1;
}

