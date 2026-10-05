
/* WARNING: Control flow encountered bad instruction data */

void FUN_0824d4ba(void)

{
  int unaff_r9;
  uint in_r12;
  uint unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr9;
  undefined4 in_cr14;
  
  if (in_NG != in_OV) {
    coprocessor_movefromRt(5,5,5,in_cr9,in_cr1);
  }
  if (in_ZR || in_NG != in_OV) {
    in_r12 = unaff_lr & 0xff3cffff;
  }
  UnsignedSaturate(unaff_r9 >> 0x1d,2);
  UnsignedDoesSaturate(unaff_r9 >> 0x1d,2);
  coprocessor_storelong(0xb,in_cr14,in_r12 + 0x3a4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

