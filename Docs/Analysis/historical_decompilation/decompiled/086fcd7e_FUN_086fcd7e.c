
/* WARNING: Control flow encountered bad instruction data */

void FUN_086fcd7e(int param_1)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    param_1 = func_0x08f2b592();
  }
  if (in_NG != in_OV) {
    coprocessor_store(0xc,in_cr11,param_1 + -0x80);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

