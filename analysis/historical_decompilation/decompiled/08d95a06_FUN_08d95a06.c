
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d95a06(void)

{
  int unaff_r6;
  int unaff_r8;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr11;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_store(4,in_cr11,unaff_r6 + 0x74);
  }
  if (!in_ZR) {
    coprocessor_loadlong(1,in_cr4,&stack0x00000074);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(1,in_cr4,unaff_r8 + 0x44);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

