
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b3a960(void)

{
  int unaff_r11;
  bool in_ZR;
  
  if (in_ZR) {
    *(undefined1 *)(unaff_r11 + 0x5df) = (char)(undefined1 *)(unaff_r11 + 0x5df);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

