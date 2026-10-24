
/* WARNING: Control flow encountered bad instruction data */

void FUN_0830ec36(void)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_load(5,in_cr11,0x830f012);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

