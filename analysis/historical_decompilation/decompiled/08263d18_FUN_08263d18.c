
/* WARNING: Control flow encountered bad instruction data */

void FUN_08263d18(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool in_CY;
  undefined4 in_cr0;
  
  if (!in_CY) {
    coprocessor_store(0xd,in_cr0,param_3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

