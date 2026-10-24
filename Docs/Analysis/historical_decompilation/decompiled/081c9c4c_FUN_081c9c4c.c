
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c9c4c(void)

{
  undefined1 *unaff_r4;
  undefined1 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    *unaff_r4 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

