
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b04ac6(void)

{
  int unaff_r4;
  undefined1 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    *(undefined1 *)(unaff_r4 + -0x551) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

