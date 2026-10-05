
/* WARNING: Control flow encountered bad instruction data */

void FUN_08218dc4(void)

{
  bool in_ZR;
  undefined4 in_cr4;
  undefined4 in_cr9;
  undefined4 in_cr11;
  
  if (!in_ZR) {
    coprocessor_function(5,0xd,5,in_cr11,in_cr9,in_cr4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

