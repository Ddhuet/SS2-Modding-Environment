
/* WARNING: Control flow encountered bad instruction data */

void FUN_0827760e(int param_1)

{
  undefined4 unaff_r10;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    param_1 = func_0x06ea4d02();
  }
  if (in_NG == in_OV) {
    *(undefined4 *)(param_1 + 0x1a5) = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

