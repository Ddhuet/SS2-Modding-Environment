
/* WARNING: Control flow encountered bad instruction data */

void FUN_080f2612(undefined4 param_1,undefined4 *param_2)

{
  bool in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == (bool)in_OV) {
    return;
  }
  if (in_NG) {
    param_2 = (undefined4 *)*param_2;
  }
  func_0x08742762(param_1,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

