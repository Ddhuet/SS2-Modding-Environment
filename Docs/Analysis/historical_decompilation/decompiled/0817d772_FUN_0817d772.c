
/* WARNING: Control flow encountered bad instruction data */

void FUN_0817d772(undefined4 param_1)

{
  bool in_ZR;
  undefined4 in_cr14;
  
  if (!in_ZR) {
    param_1 = func_0x087c47ce();
  }
  coprocessor_loadlong(9,in_cr14,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

