
/* WARNING: Control flow encountered bad instruction data */

void FUN_0828846a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_storelong(5,in_cr11,param_3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

