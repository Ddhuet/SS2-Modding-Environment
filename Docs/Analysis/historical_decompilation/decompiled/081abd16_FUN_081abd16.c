
/* WARNING: Control flow encountered bad instruction data */

void FUN_081abd16(undefined4 param_1,undefined4 param_2,int param_3)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr14;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(2,in_cr14,param_3 + 0x39c);
  }
  func_0x0782206e();
  if (in_ZR) {
    func_0x086a90ee();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

