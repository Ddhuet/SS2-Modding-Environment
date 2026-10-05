
/* WARNING: Control flow encountered bad instruction data */

void FUN_0826328e(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_CY || in_ZR) {
    *(undefined4 *)(unaff_r5 + (param_3 >> 0xb)) = unaff_r11;
  }
  if (!in_ZR && in_NG == in_OV) {
    *(undefined4 *)(unaff_lr + unaff_r6 * 0x20) = unaff_r9;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

