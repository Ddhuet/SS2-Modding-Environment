
/* WARNING: Control flow encountered bad instruction data */

void FUN_088b47d4(void)

{
  int unaff_r8;
  undefined1 unaff_r11;
  bool in_NG;
  
  if (!in_NG) {
    *(undefined1 *)(unaff_r8 + -0x532) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

