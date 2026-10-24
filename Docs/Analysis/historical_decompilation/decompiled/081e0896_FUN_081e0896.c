
/* WARNING: Control flow encountered bad instruction data */

void FUN_081e0896(int param_1)

{
  int unaff_r7;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr5;
  
  if (!in_ZR) {
    UnsignedSaturate(unaff_r7 << 0xb,2);
    UnsignedDoesSaturate(unaff_r7 << 0xb,2);
  }
  if (in_OV) {
    coprocessor_loadlong(0xe,in_cr5,param_1 + -0xfc);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

