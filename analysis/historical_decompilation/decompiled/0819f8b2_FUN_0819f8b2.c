
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0819f8b2(void)

{
  undefined4 unaff_r4;
  int unaff_r8;
  int unaff_r9;
  undefined4 unaff_r11;
  bool in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr5;
  
  if ((bool)in_ZR || in_NG != (bool)in_OV) {
    *(undefined4 *)(unaff_r9 + 0x5dc) = unaff_r11;
  }
  if (in_NG) {
    software_interrupt(0x362032);
  }
  else {
    coprocessor_loadlong(0xc,in_cr5,unaff_r4);
  }
  if ((bool)in_ZR) {
    uRam0819f8c6 = 0;
  }
  if (!in_CY || (bool)in_ZR) {
    func_0x06b97116();
  }
  if ((bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined4 *)(unaff_r8 + 4);
}

