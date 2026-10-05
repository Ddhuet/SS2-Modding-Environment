
/* WARNING: Control flow encountered bad instruction data */

void FUN_08171df4(void)

{
  undefined4 in_r12;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,in_r12);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

