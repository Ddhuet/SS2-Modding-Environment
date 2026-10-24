
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e4332(void)

{
  int unaff_r11;
  bool in_ZR;
  
  if (in_ZR) {
    *(undefined1 *)(unaff_r11 + 0x5c0) = (char)(undefined1 *)(unaff_r11 + 0x5c0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

