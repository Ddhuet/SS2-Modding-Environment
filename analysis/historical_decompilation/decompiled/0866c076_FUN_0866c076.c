
/* WARNING: Control flow encountered bad instruction data */

void FUN_0866c076(void)

{
  int in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_loadlong(5,in_cr11,in_r12 + 0x170);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

