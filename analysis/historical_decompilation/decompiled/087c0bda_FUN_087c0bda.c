
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x087c0bfa) */

void FUN_087c0bda(void)

{
  int unaff_r7;
  undefined1 *unaff_r8;
  uint unaff_r10;
  undefined1 unaff_r11;
  undefined4 in_r12;
  bool in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr9;
  undefined4 in_cr14;
  
  if (in_NG) {
    *unaff_r8 = unaff_r11;
    unaff_r10 = (uint)*(byte *)(unaff_r7 + -0x845);
  }
  if (in_NG != (bool)in_OV) {
    coprocessor_storelong(3,in_cr9,in_r12);
  }
  if (!(bool)in_ZR && in_NG == (bool)in_OV) {
    coprocessor_storelong(0xe,in_cr14,in_r12);
  }
  if (in_NG == (bool)in_OV) {
    func_0x072b8366();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *(undefined1 *)(unaff_r7 - ((int)unaff_r10 >> 0x19)) = unaff_r11;
  }
  if (!(bool)in_OV) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

