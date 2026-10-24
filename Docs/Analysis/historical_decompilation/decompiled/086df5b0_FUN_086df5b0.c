
/* WARNING: Control flow encountered bad instruction data */

void FUN_086df5b0(undefined4 param_1,int param_2)

{
  bool in_NG;
  undefined4 in_cr0;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (in_NG) {
    coprocessor_function(5,0xf,0,in_cr11,in_cr0,in_cr0);
  }
  coprocessor_store2(0,in_cr12,param_2 + -0x20c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

