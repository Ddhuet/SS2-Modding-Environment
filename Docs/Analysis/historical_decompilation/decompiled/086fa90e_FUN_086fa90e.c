
/* WARNING: Control flow encountered bad instruction data */

void FUN_086fa90e(int param_1)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    UnsignedSaturate(param_1 << 0xb,0);
    UnsignedDoesSaturate(param_1 << 0xb,0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

