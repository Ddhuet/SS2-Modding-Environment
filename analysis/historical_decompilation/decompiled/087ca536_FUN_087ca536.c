
/* WARNING: Control flow encountered bad instruction data */

void FUN_087ca536(void)

{
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    if (in_NG != in_OV) {
      if (!in_ZR && in_NG == in_OV) {
        coprocessor_storelong(7,in_cr7,in_r12);
      }
      if (in_NG != in_OV) {
        func_0x076b57fe();
      }
      if (in_NG != in_OV) {
        func_0x076b937e();
      }
      if (in_NG != in_OV) {
        func_0x076b9442();
      }
      coprocessor_movefromRt(0xb,5,5,in_cr11,in_cr11);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

