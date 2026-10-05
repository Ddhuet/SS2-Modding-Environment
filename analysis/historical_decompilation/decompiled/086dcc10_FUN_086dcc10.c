
/* WARNING: Control flow encountered bad instruction data */

void FUN_086dcc10(int param_1)

{
  bool in_ZR;
  undefined4 in_cr11;
  
  if (!in_ZR) {
    coprocessor_loadlong(5,in_cr11,param_1 + 0x3c0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

