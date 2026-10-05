
/* WARNING: Control flow encountered bad instruction data */

void FUN_089bf7d8(void)

{
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr11;
  
  coprocessor_function2(5,0xb,3,in_cr11,in_cr11,in_cr1);
  coprocessor_moveto(0xb,6,2,unaff_r11,in_cr11,in_cr1);
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xb,in_cr11,unaff_r11 + 0x2f8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

