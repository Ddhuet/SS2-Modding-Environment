
/* WARNING: Control flow encountered bad instruction data */

void FUN_08264a72(void)

{
  int unaff_lr;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_store(5,in_cr11,unaff_lr + 0x2f8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

