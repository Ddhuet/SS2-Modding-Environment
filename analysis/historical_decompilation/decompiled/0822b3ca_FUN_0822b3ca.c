
/* WARNING: Control flow encountered bad instruction data */

void FUN_0822b3ca(void)

{
  undefined4 unaff_r7;
  int unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if (in_NG == (bool)in_OV) {
    coprocessor_function(5,10,6,in_cr11,in_cr9,in_cr3);
  }
  else {
    coprocessor_load(0xe,in_cr10,unaff_r11 + 0x29c);
    software_interrupt(0xbab7b1);
  }
  if (in_ZR) {
    coprocessor_loadlong(0xf,in_cr14,unaff_r7);
  }
  if (!in_CY) {
    coprocessor_store(6,in_cr2,&stack0x00000000);
  }
  if (in_NG) {
    coprocessor_function(4,4,2,in_cr4,in_cr11,in_cr8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

