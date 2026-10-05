
/* WARNING: Control flow encountered bad instruction data */

void FUN_080d26e4(void)

{
  int unaff_r9;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    unaff_r9 = unaff_r9 + 0x2cc;
    coprocessor_load(5,in_cr11,unaff_r9);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    software_interrupt(0xcac5c0);
  }
  func_0x079c9244();
  func_0x07d4f6bc();
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xc,in_cr13,unaff_r9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

