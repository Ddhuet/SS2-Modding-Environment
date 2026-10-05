
/* WARNING: Control flow encountered bad instruction data */

void FUN_08674108(int param_1)

{
  undefined4 in_cr11;
  
  coprocessor_store(5,in_cr11,param_1 + -0x3b8);
  func_0x073ef3e8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

