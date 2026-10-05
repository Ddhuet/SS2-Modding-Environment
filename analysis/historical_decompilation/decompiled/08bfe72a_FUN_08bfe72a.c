
/* WARNING: Control flow encountered bad instruction data */

void FUN_08bfe72a(void)

{
  int in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr14;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_loadlong(5,in_cr11,in_r12 + 0x2f0);
    coprocessor_loadlong(0xc,in_cr12,in_r12 + 0x330);
  }
  software_interrupt(0xdccccc);
  coprocessor_function(0xe,0xc,7,in_cr14,in_cr0,in_cr14);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

