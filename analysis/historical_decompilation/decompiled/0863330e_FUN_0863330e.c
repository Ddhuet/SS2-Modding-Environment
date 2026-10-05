
/* WARNING: Control flow encountered bad instruction data */

void FUN_0863330e(int param_1)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    param_1 = func_0x09661c22();
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(0xc,in_cr11,param_1 + -0x100);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

