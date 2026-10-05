
/* WARNING: Control flow encountered bad instruction data */

void FUN_08629254(undefined4 param_1,int param_2)

{
  int unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG != (bool)in_OV) {
    unaff_r11 = *unaff_r5;
  }
  if (in_CY && !in_ZR) {
    unaff_r11 = *(undefined4 *)(unaff_r4 + -0x335);
  }
  if (in_NG) {
    *(undefined4 *)(param_2 + -0x201) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

