
/* WARNING: Control flow encountered bad instruction data */

void FUN_0835c81a(void)

{
  int unaff_r7;
  int unaff_r8;
  int unaff_r10;
  undefined1 unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_CY) {
    *(undefined1 *)(unaff_r7 + 0x5b3) = unaff_r11;
  }
  if (!in_ZR && in_NG == in_OV) {
    *(undefined1 *)(unaff_r10 + unaff_r8 * -0x40) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

