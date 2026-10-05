
/* WARNING: Control flow encountered bad instruction data */

void FUN_08615754(int param_1,int param_2)

{
  uint unaff_r7;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr0;
  
  if (in_NG == in_OV) {
    in_ZR = unaff_r7 == param_1 << (unaff_r7 & 0xff);
  }
  if ((bool)in_ZR) {
    coprocessor_store(0xc,in_cr0,param_2 + 0x3c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

