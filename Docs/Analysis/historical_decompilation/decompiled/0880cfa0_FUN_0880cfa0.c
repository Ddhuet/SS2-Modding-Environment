
/* WARNING: Control flow encountered bad instruction data */

void FUN_0880cfa0(void)

{
  int unaff_r8;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr9;
  undefined4 in_cr11;
  
  coprocessor_store(5,in_cr11,unaff_r11);
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_load(8,in_cr9,unaff_r8 + 0x14c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

