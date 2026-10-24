
/* WARNING: Control flow encountered bad instruction data */

void FUN_082427e4(void)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_store(5,in_cr11,0x82427ec);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

