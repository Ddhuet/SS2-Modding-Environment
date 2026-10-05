
/* WARNING: Control flow encountered bad instruction data */

void FUN_0809dd40(undefined4 param_1)

{
  bool in_ZR;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr11;
  
  coprocessor_movefromRt(7,5,5,in_cr0,in_cr11);
  if (!in_ZR) {
    coprocessor_store(5,in_cr2,param_1);
  }
  func_0x0645bae2(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

