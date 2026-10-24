
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a62e52(void)

{
  undefined4 unaff_r11;
  int in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,&stack0x00000170);
    coprocessor_load(0xb,in_cr11,unaff_r11);
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(0xc,in_cr11,in_r12 + 0x2ec);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xb,in_cr11,&stack0x00000000);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

