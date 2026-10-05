
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b38cdc(void)

{
  int unaff_r5;
  int unaff_r6;
  uint uVar1;
  uint unaff_r11;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr6;
  undefined4 in_cr9;
  
  if (!(bool)in_NG) {
    unaff_r11 = (uint)*(byte *)(unaff_r6 + -0x530);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x080e73e0();
  }
  uVar1 = coprocessor_movefromRt(9,5,4,in_cr9,in_cr9);
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(6,in_cr6,unaff_r11 + 600);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    uVar1 = uVar1 - (uVar1 >> 0x12);
  }
  if (!(bool)in_NG) {
    *(char *)(unaff_r5 + -0x695) = (char)uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

