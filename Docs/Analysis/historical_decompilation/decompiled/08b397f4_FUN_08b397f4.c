
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08b397f4(void)

{
  int unaff_r6;
  uint unaff_r9;
  int unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr9;
  
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x082e6ce8();
  }
  if (in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr9,&stack0x000001b8);
    coprocessor_loadlong(5,in_cr9,unaff_r11 + 0x278);
    func_0x078d2f7c();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    unaff_r6 = unaff_r6 - (unaff_r9 >> 0x12 | unaff_r9 << 0xe);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    if ((bool)in_ZR || in_NG != in_OV) {
      func_0x0a0dee78();
    }
    if ((bool)in_OV) {
      func_0x0a09ee7c();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined8 *)(unaff_r6 + -0x24);
}

