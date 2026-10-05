
/* WARNING: Control flow encountered bad instruction data */

void FUN_08f7bf30(void)

{
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,unaff_r11 + 0x90);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

