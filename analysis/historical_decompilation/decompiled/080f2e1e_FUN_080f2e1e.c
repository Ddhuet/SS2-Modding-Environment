
/* WARNING: Control flow encountered bad instruction data */

void FUN_080f2e1e(void)

{
  undefined4 unaff_r10;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_load(5,in_cr11,unaff_r10);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

