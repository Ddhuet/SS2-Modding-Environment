
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e4caa(void)

{
  undefined1 *in_r3;
  undefined1 unaff_r4;
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR) {
    *(undefined1 *)(unaff_r11 + 0x5bd) = (char)(undefined1 *)(unaff_r11 + 0x5bd);
  }
  if (in_ZR || in_NG != in_OV) {
    *in_r3 = unaff_r4;
  }
  if (in_NG != in_OV) {
    software_interrupt(0xb6c4aa);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

