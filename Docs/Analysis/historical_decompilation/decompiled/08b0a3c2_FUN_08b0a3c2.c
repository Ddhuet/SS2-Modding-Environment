
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b0a3c2(void)

{
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (in_CY && !in_ZR) {
    if (in_ZR || in_NG != in_OV) {
      coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
      coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    }
    coprocessor_loadlong(0xd,in_cr14,&stack0x00000374);
    coprocessor_loadlong(0xc,in_cr13,&stack0x000003b8);
    coprocessor_function(0xd,0xd,6,in_cr12,in_cr13,in_cr14);
    if (in_ZR || in_NG != in_OV) {
      coprocessor_movefromRt(0xd,6,6,in_cr13,in_cr12);
      coprocessor_storelong(0xd,in_cr0,&stack0x00000374);
      coprocessor_storelong(0,in_cr0,&stack0x000006e8);
      coprocessor_storelong(0,in_cr0,unaff_lr + 0x34);
    }
    coprocessor_function(0,0xe,0,in_cr0,in_cr14,in_cr14);
    coprocessor_function(0,0xd,0,in_cr0,in_cr14,in_cr0);
    coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
    coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
    coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

