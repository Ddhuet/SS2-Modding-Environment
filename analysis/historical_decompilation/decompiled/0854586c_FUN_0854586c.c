
/* WARNING: Control flow encountered bad instruction data */

void FUN_0854586c(undefined4 param_1,int param_2)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    UnsignedSaturate(param_2 >> 0xb,1);
    UnsignedDoesSaturate(param_2 >> 0xb,1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

