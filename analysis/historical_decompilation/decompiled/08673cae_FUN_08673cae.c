
/* WARNING: Control flow encountered bad instruction data */

void FUN_08673cae(undefined4 *param_1)

{
  undefined1 *unaff_r4;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    *unaff_r4 = (char)unaff_r11;
  }
  if (!in_CY || in_ZR) {
    *param_1 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

