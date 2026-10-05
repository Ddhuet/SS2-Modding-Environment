
/* WARNING: Control flow encountered bad instruction data */

void FUN_0834756e(void)

{
  int unaff_r11;
  bool in_ZR;
  
  if (in_ZR) {
    *(undefined1 *)(unaff_r11 + 0x50e) = (char)(undefined1 *)(unaff_r11 + 0x50e);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

