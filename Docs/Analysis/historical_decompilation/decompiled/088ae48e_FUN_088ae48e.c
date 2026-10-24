
/* WARNING: Control flow encountered bad instruction data */

void FUN_088ae48e(void)

{
  int in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x000002b0);
    coprocessor_loadlong(0xd,in_cr12,in_r12 + 0x334);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000000);
    coprocessor_loadlong(0xc,in_cr13,&stack0x00000370);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000000);
    coprocessor_loadlong(0xc,in_cr13,in_r12 + 0x374);
    coprocessor_loadlong(0xc,in_cr13,in_r12 + 0x374);
    coprocessor_loadlong(0xc,in_cr13,in_r12 + 0x374);
  }
  else {
    coprocessor_storelong(5,in_cr11,&stack0x000000e8);
    coprocessor_storelong(0xd,in_cr13,&stack0x00000374);
    coprocessor_storelong(0xc,in_cr12,in_r12 + 0x2f0);
    coprocessor_storelong(0xd,in_cr12,&stack0x00000370);
    coprocessor_storelong(0xd,in_cr13,&stack0x00000334);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

