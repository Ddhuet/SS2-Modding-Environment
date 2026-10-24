
/* WARNING: Control flow encountered bad instruction data */

void FUN_0828b7b0(void)

{
  undefined4 in_r3;
  undefined4 unaff_r11;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr10;
  
  if (in_NG == (bool)in_OV) {
    uRam0828bd75 = unaff_r11;
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    coprocessor_storelong(0xd,in_cr10,in_r3);
  }
  if (!in_NG) {
    func_0x091d1798();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

