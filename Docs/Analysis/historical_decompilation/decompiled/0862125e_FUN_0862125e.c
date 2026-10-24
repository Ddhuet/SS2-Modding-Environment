
/* WARNING: Control flow encountered bad instruction data */

void FUN_0862125e(undefined4 param_1,undefined4 param_2,int param_3)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    SignedSaturate(param_3 >> 0xb,3);
    SignedDoesSaturate(param_3 >> 0xb,3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

