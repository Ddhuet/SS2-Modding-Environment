
/* WARNING: Control flow encountered bad instruction data */

void FUN_0812b57e(void)

{
  undefined4 unaff_r7;
  bool in_ZR;
  undefined4 in_cr11;
  
  if (!in_ZR) {
    coprocessor_loadlong(5,in_cr11,unaff_r7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

