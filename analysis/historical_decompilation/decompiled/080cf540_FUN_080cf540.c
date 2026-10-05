
/* WARNING: Control flow encountered bad instruction data */

void FUN_080cf540(int param_1)

{
  int unaff_r9;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(5,in_cr11,param_1 + 700);
  }
  coprocessor_storelong(0xc,in_cr14,0);
  coprocessor_storelong(9,in_cr14,unaff_r9 + 0x3ac);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

