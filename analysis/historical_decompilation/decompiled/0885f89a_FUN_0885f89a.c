
/* WARNING: Control flow encountered bad instruction data */

void FUN_0885f89a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char in_NG;
  bool in_OV;
  undefined4 in_cr7;
  
  if ((bool)in_NG == in_OV) {
    coprocessor_loadlong(7,in_cr7,param_3);
  }
  if (in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

