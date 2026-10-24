
/* WARNING: Control flow encountered bad instruction data */

void FUN_080d72de(void)

{
  int unaff_r9;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    unaff_r9 = unaff_r9 + 0x2c4;
    coprocessor_load(5,in_cr11,unaff_r9);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr13,unaff_r9);
  }
  else {
    coprocessor_storelong(5,in_cr12,unaff_r9 + 0x304);
  }
  func_0x07ad0672();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

