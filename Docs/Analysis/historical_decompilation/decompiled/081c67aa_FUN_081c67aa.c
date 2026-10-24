
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c67aa(void)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_store(5,in_cr11,0x81c67b2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

