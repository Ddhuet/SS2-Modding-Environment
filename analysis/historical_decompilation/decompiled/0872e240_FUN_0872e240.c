
/* WARNING: Control flow encountered bad instruction data */

void FUN_0872e240(void)

{
  int unaff_r8;
  undefined1 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(undefined1 *)(unaff_r8 + -0x569) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

