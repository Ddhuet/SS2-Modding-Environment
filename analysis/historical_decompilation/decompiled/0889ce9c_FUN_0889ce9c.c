
/* WARNING: Control flow encountered bad instruction data */

void FUN_0889ce9c(void)

{
  int in_r3;
  int unaff_r4;
  int unaff_r5;
  uint unaff_r7;
  int unaff_r8;
  undefined1 unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (!in_NG) {
    *(undefined1 *)(in_r3 + -0x574) = unaff_r11;
  }
  if (in_CY && !in_ZR) {
    unaff_r7 = (uint)*(byte *)(unaff_r5 + unaff_r8 * -0x20000);
  }
  if (!in_OV) {
    *(char *)(unaff_r4 - (unaff_r7 >> 10 | unaff_r7 << 0x16)) = (char)unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

