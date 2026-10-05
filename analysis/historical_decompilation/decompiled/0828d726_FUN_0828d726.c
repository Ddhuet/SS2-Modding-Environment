
/* WARNING: Control flow encountered bad instruction data */

void FUN_0828d726(void)

{
  int unaff_r7;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_store(5,in_cr11,unaff_r7 + 0x358);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

