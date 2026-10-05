
/* WARNING: Control flow encountered bad instruction data */

void FUN_0828939c(void)

{
  int unaff_r8;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_storelong(5,in_cr11,unaff_r8 + 0x2a8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

