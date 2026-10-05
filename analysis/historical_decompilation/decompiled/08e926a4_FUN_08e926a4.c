
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e926a4(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 unaff_r5;
  int unaff_r7;
  undefined4 unaff_r11;
  bool in_NG;
  bool in_OV;
  
  if (in_NG) {
    *param_3 = unaff_r11;
  }
  if (in_OV) {
    *(undefined1 *)(*(byte *)(unaff_r7 + -0x432) - 0x332) = unaff_r5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

