
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c5a9d2(void)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_movefromRt(4,1,7,in_cr0,in_cr11);
  }
  func_0x0986e990();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

