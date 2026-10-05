
/* WARNING: Control flow encountered bad instruction data */

void FUN_08311138(int param_1)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    param_1 = param_1 + 0x2f0;
    coprocessor_load(5,in_cr11,param_1);
  }
  if (!in_ZR && in_NG == in_OV) {
    func_0x07480c28(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

