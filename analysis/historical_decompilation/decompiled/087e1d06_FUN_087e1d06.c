
/* WARNING: Control flow encountered bad instruction data */

void FUN_087e1d06(void)

{
  int unaff_r5;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_loadlong(5,in_cr11,&stack0x000000e0);
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(0xc,in_cr13,unaff_r5 + -0x330);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

