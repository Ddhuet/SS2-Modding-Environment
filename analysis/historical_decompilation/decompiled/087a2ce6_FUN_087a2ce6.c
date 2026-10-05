
/* WARNING: Control flow encountered bad instruction data */

void FUN_087a2ce6(void)

{
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  int in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_storelong(0xc,in_cr12,in_r12);
  }
  else {
    coprocessor_storelong(5,in_cr11,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_loadlong(0xc,in_cr13,&stack0x00000330);
    coprocessor_storelong(0xc,in_cr12,in_r12 + 0x330);
    coprocessor_loadlong(6,in_cr11,in_r12);
    coprocessor_storelong(5,in_cr10,in_r12 + 0x330);
    coprocessor_storelong(5,in_cr8,in_r12);
    coprocessor_storelong(6,in_cr8,in_r12);
    coprocessor_storelong(5,in_cr7,in_r12);
    coprocessor_storelong(5,in_cr7,&stack0x00000000);
    coprocessor_loadlong(6,in_cr5,&stack0x00000330);
    coprocessor_storelong(7,in_cr6,in_r12);
    coprocessor_storelong(0xc,in_cr13,in_r12);
    coprocessor_loadlong(0xc,in_cr12,&stack0x00000000);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr13,in_r12);
  }
  coprocessor_function(0xc,0xe,6,in_cr12,in_cr14,in_cr12);
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(9,in_cr9,unaff_r7);
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_function(7,0xc,6,in_cr7,in_cr8,in_cr10);
  coprocessor_function(0xe,0xc,7,in_cr9,in_cr8,in_cr14);
  coprocessor_function(0xe,0xb,7,in_cr10,in_cr8,in_cr14);
  if (in_ZR || in_NG != in_OV) {
    coprocessor_load(0xe,in_cr12,unaff_r9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

