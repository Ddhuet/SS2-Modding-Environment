
/* WARNING: Control flow encountered bad instruction data */

void FUN_086ee710(undefined4 param_1,int param_2,undefined4 param_3)

{
  int unaff_r7;
  undefined1 unaff_r11;
  char in_NG;
  bool in_OV;
  
  if ((bool)in_NG != in_OV) {
    *(undefined1 *)(param_2 + 0x5f1) = unaff_r11;
  }
  if (!in_OV) {
    *(undefined4 *)(unaff_r7 + -0x7f0) = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

