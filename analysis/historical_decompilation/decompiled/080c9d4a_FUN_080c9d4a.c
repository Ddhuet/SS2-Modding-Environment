
/* WARNING: Control flow encountered bad instruction data */

void FUN_080c9d4a(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined8 in_d1;
  undefined8 in_d25;
  
  coprocessor_function2(6,0xe,7,in_cr14,in_cr11,in_cr4);
  VectorAbsoluteDifference(in_d1,in_d25,1,0);
  if (in_ZR || in_NG != in_OV) {
    coprocessor_storelong(0xd,in_cr12,0x80ca076);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

