
/* WARNING: Control flow encountered bad instruction data */

void FUN_085faf9a(int param_1)

{
  bool in_NG;
  undefined4 in_cr11;
  
  if (!in_NG) {
    coprocessor_load(5,in_cr11,param_1 + -0xc0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

