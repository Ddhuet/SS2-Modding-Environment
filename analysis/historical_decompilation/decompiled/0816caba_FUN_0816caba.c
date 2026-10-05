
/* WARNING: Control flow encountered bad instruction data */

void FUN_0816caba(void)

{
  int unaff_r9;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_store(0xf,in_cr11,unaff_r9 + 0x360);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

