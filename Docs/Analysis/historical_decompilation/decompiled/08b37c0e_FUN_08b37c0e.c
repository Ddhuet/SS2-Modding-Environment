
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b37c0e(int param_1)

{
  uint unaff_r5;
  uint unaff_r11;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_OV;
  
  if (!(bool)in_NG) {
    param_1 = func_0x082a51c2();
  }
  if ((bool)in_ZR) {
    unaff_r11 = (uint)*(byte *)(unaff_r11 - 0x655);
  }
  if (!(bool)in_NG) {
    unaff_r11 = unaff_r5 & (unaff_r5 >> 0x16 | unaff_r5 << 10);
  }
  if ((bool)in_OV) {
    *(uint *)(param_1 + -0xbd9) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

