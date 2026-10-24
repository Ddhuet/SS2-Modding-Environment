
/* WARNING: Control flow encountered bad instruction data */

void FUN_08193acc(undefined4 param_1,undefined4 param_2)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(5,in_cr11,param_2);
  }
  if (in_ZR) {
    func_0x0804e240();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

