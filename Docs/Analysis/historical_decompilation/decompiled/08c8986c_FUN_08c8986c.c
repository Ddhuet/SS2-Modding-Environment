
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c8986c(void)

{
  int unaff_r11;
  bool in_CY;
  
  if (!in_CY) {
    *(undefined1 *)(unaff_r11 + -0x532) = (char)(undefined1 *)(unaff_r11 + -0x532);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

