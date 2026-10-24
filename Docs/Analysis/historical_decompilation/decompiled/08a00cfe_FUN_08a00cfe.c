
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a00cfe(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,&stack0x00000154);
  }
  if (in_ZR) {
    software_interrupt(0x42b776);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

