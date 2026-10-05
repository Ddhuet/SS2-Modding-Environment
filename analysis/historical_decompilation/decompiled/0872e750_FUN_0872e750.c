
/* WARNING: Control flow encountered bad instruction data */

void FUN_0872e750(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r8;
  int unaff_r9;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(char *)(unaff_r8 + -0x569) = (char)unaff_r11;
  }
  if (in_ZR) {
    *(undefined4 *)(unaff_r9 + -4) = unaff_r11;
    *(undefined4 *)(unaff_r9 + -8) = param_4;
    *(undefined4 *)(unaff_r9 + -0xc) = param_3;
    *(undefined4 *)(unaff_r9 + -0x10) = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

