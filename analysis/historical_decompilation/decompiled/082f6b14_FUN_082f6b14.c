
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x082f6b2c) */

void FUN_082f6b14(void)

{
  undefined4 extraout_r2;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  uint unaff_r8;
  int unaff_r9;
  undefined1 *unaff_r10;
  undefined4 unaff_r11;
  undefined1 in_r12;
  undefined4 extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    *unaff_r10 = in_r12;
  }
  else {
    unaff_r11 = *(undefined4 *)(unaff_r4 + 0x5b2);
  }
  func_0x07d2d268();
  func_0x083b6b22();
  if ((bool)in_CY) {
    in_ZR = true;
  }
  if (!(bool)in_ZR) {
    software_interrupt(0x1c2026);
  }
  *unaff_r6 = extraout_r2;
  if ((bool)in_ZR) {
    *(undefined4 *)(unaff_r9 + -4) = 0x82f6b24;
    *(undefined4 *)(unaff_r9 + -8) = extraout_r12;
    *(undefined4 *)(unaff_r9 + -0xc) = unaff_r11;
    *(uint *)(unaff_r9 + -0x10) = (int)unaff_r6 - (unaff_r8 >> 0x10);
    *(undefined4 *)(unaff_r9 + -0x14) = unaff_r5;
    *(undefined4 *)(unaff_r9 + -0x18) = extraout_r2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

