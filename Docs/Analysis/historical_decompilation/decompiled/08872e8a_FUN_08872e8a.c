
/* WARNING: Control flow encountered bad instruction data */

void FUN_08872e8a(void)

{
  int unaff_r10;
  undefined1 unaff_r11;
  bool in_NG;
  
  if (in_NG) {
    *(undefined1 *)(unaff_r10 + -0x56b) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

