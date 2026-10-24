
/* WARNING: Control flow encountered bad instruction data */

void FUN_080d77d2(void)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_store(5,in_cr11,0x80d7ad2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

