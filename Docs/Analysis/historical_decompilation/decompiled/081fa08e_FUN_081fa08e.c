
/* WARNING: Control flow encountered bad instruction data */

void FUN_081fa08e(void)

{
  int unaff_r9;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr10;
  undefined4 in_cr14;
  
  if (in_NG != in_OV) {
    software_interrupt(0xbab5b1);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_movefromRt(7,6,6,in_cr10,in_cr4);
  }
  coprocessor_storelong(5,in_cr14,unaff_r9 + 900);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

