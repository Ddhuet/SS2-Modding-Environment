
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c43da(void)

{
  int unaff_r10;
  undefined1 *unaff_r11;
  undefined1 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    unaff_r11 = *(undefined1 **)(unaff_r10 + 0x5b8);
  }
  *unaff_r11 = unaff_lr;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

