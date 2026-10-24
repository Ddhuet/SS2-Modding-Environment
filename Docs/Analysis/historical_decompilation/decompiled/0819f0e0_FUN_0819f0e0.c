
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819f0e0(void)

{
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_load(5,in_cr11,in_r12);
  }
  func_0x07994838();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

