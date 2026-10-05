
/* WARNING: Control flow encountered bad instruction data */

void FUN_082876fa(undefined4 param_1,int param_2)

{
  int unaff_r10;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (in_NG == in_OV) {
    coprocessor_function(5,10,6,in_cr11,in_cr15,in_cr8);
  }
  if (!in_ZR && in_NG == in_OV) {
    unaff_r10 = param_2 + 0x2b40 + (uint)in_CY;
    in_ZR = unaff_r10 == 0;
  }
  if (in_ZR) {
    UnsignedSaturate(unaff_r10 >> 0x13,0x1b);
    UnsignedDoesSaturate(unaff_r10 >> 0x13,0x1b);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

