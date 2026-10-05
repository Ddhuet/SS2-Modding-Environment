
/* WARNING: Control flow encountered bad instruction data */

void FUN_08251bca(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_lr;
  bool in_ZR;
  undefined4 in_cr11;
  
  coprocessor_storelong2(5,in_cr11,param_4);
  if (!in_ZR) {
    param_1 = *(undefined4 *)(unaff_lr + -0x7f7);
  }
  func_0x07e51c56(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

