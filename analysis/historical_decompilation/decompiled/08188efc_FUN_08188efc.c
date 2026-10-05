
/* WARNING: Control flow encountered bad instruction data */

void FUN_08188efc(void)

{
  undefined4 unaff_r9;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_load(5,in_cr11,unaff_r9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

