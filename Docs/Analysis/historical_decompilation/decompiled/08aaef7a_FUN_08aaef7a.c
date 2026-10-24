
/* WARNING: Control flow encountered bad instruction data */

void FUN_08aaef7a(undefined4 param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r8;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    param_1 = func_0x0a89c66a();
    in_r12 = extraout_r12;
  }
  if (!(bool)in_OV) {
    *(undefined4 *)(unaff_r11 + 4) = param_1;
    *(undefined4 *)(unaff_r11 + 8) = unaff_r4;
    *(undefined4 *)(unaff_r11 + 0xc) = unaff_r8;
    *(undefined4 *)(unaff_r11 + 0x10) = in_r12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

