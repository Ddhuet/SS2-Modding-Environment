
/* WARNING: Control flow encountered bad instruction data */

void FUN_086e3e6e(undefined4 *param_1)

{
  undefined4 *unaff_r4;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    *unaff_r4 = unaff_r11;
  }
  if (in_ZR) {
    *param_1 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

