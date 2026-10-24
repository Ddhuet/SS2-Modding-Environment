
/* WARNING: Control flow encountered bad instruction data */

void FUN_085a03aa(void)

{
  int unaff_r9;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr9;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  coprocessor_movefromRt(5,6,5,in_cr15,in_cr13);
  software_interrupt(0xed79ee);
  if (in_ZR || in_NG != in_OV) {
    coprocessor_function(0xe,0xf,7,in_cr9,in_cr15,in_cr14);
  }
  coprocessor_moveto(0xd,7,6,unaff_lr,in_cr13,in_cr13);
  coprocessor_loadlong(0xc,in_cr13,unaff_r9 + 0x334);
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xc,in_cr12,&stack0x00000334);
  }
  coprocessor_moveto(0xd,7,6,&stack0x00000000,in_cr13,in_cr13);
  if (in_ZR || in_NG != in_OV) {
    coprocessor_moveto(0xd,7,6,&stack0x00000000,in_cr15,in_cr13);
    coprocessor_movefromRt(0xd,7,6,in_cr14,in_cr13);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

