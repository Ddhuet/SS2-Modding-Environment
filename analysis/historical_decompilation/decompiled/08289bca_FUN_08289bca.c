
/* WARNING: Control flow encountered bad instruction data */

void FUN_08289bca(int param_1)

{
  int iVar1;
  undefined4 unaff_r7;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,unaff_r7);
  }
  if (in_ZR) {
    UnsignedSaturate(param_1 >> 0x1d,0x16);
    UnsignedDoesSaturate(param_1 >> 0x1d,0x16);
  }
  if (in_CY) {
    iVar1 = coprocessor_movefromRt(0xc,0,0,in_cr15,in_cr11);
    coprocessor_storelong(0xd,in_cr4,iVar1 + -0x10c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

