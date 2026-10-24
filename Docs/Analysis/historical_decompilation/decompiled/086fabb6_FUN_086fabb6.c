
/* WARNING: Control flow encountered bad instruction data */

void FUN_086fabb6(undefined4 param_1,undefined4 param_2)

{
  bool in_ZR;
  undefined4 in_cr11;
  
  if (!in_ZR) {
    coprocessor_store(5,in_cr11,param_2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

