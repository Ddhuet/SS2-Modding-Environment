
/* WARNING: Control flow encountered bad instruction data */

void FUN_0883c072(void)

{
  int unaff_r4;
  uint unaff_r6;
  undefined1 unaff_r11;
  bool in_OV;
  
  if (in_OV) {
    *(undefined1 *)(unaff_r4 - (unaff_r6 >> 10 | unaff_r6 << 0x16)) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

