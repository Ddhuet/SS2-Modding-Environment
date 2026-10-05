
/* WARNING: Control flow encountered bad instruction data */

void FUN_0816e048(undefined4 param_1,int param_2)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_load(5,in_cr11,param_2 + 0x2cc);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

