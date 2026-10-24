
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825dd32(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr9;
  
  if (in_NG != in_OV) {
    coprocessor_movefromRt(5,5,5,in_cr9,in_cr2);
  }
  if (in_ZR || in_NG != in_OV) {
    func_0x07750c4e();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

