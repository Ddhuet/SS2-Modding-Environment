
/* WARNING: Control flow encountered bad instruction data */

void FUN_08143fa8(void)

{
  undefined2 *in_r3;
  int unaff_r9;
  undefined2 unaff_r11;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    *in_r3 = unaff_r11;
  }
  if (!in_ZR) {
    *(undefined4 *)(unaff_r9 + -0xfdd) = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

