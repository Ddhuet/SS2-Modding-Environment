
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819f820(void)

{
  int unaff_r10;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    SignedSaturate(unaff_r10 >> 0xb,9);
    SignedDoesSaturate(unaff_r10 >> 0xb,9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

