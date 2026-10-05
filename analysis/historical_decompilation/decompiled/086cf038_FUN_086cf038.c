
/* WARNING: Control flow encountered bad instruction data */

void FUN_086cf038(void)

{
  undefined1 *unaff_r7;
  undefined1 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    *unaff_r7 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

