
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a3f8d8(void)

{
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,&stack0x00000188);
    coprocessor_loadlong(7,in_cr11,unaff_r11 + 0x1dc);
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

