
/* WARNING: Control flow encountered bad instruction data */

void FUN_08131b2c(void)

{
  undefined4 unaff_r5;
  bool in_ZR;
  undefined4 in_cr11;
  
  if (!in_ZR) {
    coprocessor_store(5,in_cr11,unaff_r5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

