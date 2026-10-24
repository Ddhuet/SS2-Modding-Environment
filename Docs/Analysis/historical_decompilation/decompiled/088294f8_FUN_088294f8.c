
/* WARNING: Control flow encountered bad instruction data */

void FUN_088294f8(void)

{
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (in_NG == in_OV) {
    coprocessor_loadlong(5,in_cr11,&stack0x00000000);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_load(3,in_cr5,unaff_r10);
  }
  coprocessor_storelong(7,in_cr9,unaff_r11);
  coprocessor_storelong(0xc,in_cr12,in_r12);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

