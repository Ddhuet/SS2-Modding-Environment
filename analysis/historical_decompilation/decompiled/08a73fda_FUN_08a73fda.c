
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a73fda(void)

{
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (!in_NG) {
    coprocessor_loadlong(5,in_cr11,&stack0x00000110);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    coprocessor_loadlong(0xe,in_cr11,&stack0x00000154);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

