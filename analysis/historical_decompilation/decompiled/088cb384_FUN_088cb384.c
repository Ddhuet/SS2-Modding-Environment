
/* WARNING: Control flow encountered bad instruction data */

void FUN_088cb384(void)

{
  int unaff_r6;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_store(5,in_cr11,unaff_r6 + 0xe8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

