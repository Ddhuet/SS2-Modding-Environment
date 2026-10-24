
/* WARNING: Control flow encountered bad instruction data */

void FUN_0828f8c4(void)

{
  undefined4 unaff_r4;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined8 in_d29;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(5,in_cr11,unaff_r4);
  }
  if (in_ZR) {
    VectorFloatToUnsignedFixed(in_d29,0x20,0x17);
  }
  coprocessor_function(4,0xd,0,in_cr14,in_cr12,in_cr2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

