
/* WARNING: Control flow encountered bad instruction data */

void FUN_0828b082(void)

{
  undefined1 *in_r3;
  undefined1 *unaff_r4;
  undefined1 unaff_r11;
  undefined1 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    *unaff_r4 = unaff_r11;
  }
  *in_r3 = unaff_lr;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

