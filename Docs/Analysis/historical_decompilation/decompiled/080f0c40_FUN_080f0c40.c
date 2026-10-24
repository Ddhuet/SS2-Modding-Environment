
/* WARNING: Control flow encountered bad instruction data */

void FUN_080f0c40(undefined4 param_1,undefined4 param_2,int param_3)

{
  int extraout_r2;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr10;
  
  if (in_CY && !in_ZR) {
    func_0x0675e368();
    param_3 = extraout_r2;
  }
  if (in_NG != in_OV) {
    coprocessor_store(2,in_cr10,param_3 + 0x2d4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

