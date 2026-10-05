
/* WARNING: Control flow encountered bad instruction data */

void FUN_0878e83e(void)

{
  int in_r3;
  bool in_CY;
  undefined4 in_cr11;
  
  if (in_CY) {
    coprocessor_load(5,in_cr11,in_r3 + -0x1d4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

