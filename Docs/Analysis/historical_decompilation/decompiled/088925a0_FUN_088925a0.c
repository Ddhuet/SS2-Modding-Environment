
/* WARNING: Control flow encountered bad instruction data */

void FUN_088925a0(void)

{
  int unaff_r9;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr9;
  undefined4 in_cr11;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,unaff_lr + 0x2e0);
    coprocessor_storelong(0xc,in_cr9,unaff_r9 + 0x2e0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

