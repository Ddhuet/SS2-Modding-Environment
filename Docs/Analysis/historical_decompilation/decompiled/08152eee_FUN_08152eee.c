
/* WARNING: Control flow encountered bad instruction data */

void FUN_08152eee(undefined4 param_1,int param_2)

{
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  int unaff_r9;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (in_NG == in_OV) {
    param_2 = param_2 + 0x2e4;
    coprocessor_load(5,in_cr11,param_2);
  }
  if (!in_CY || in_ZR) {
    coprocessor_store(5,in_cr10,param_2);
    coprocessor_load(4,in_cr9,unaff_r8);
  }
  else {
    coprocessor_load(4,in_cr9,param_1);
    coprocessor_store(4,in_cr8,unaff_r6);
  }
  if (in_NG == in_OV) {
    coprocessor_store(4,in_cr10,unaff_r8);
  }
  else {
    unaff_r9 = unaff_r9 + 0x2c0;
    coprocessor_load(5,in_cr11,unaff_r9);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr13,unaff_r9 + 0x344);
  }
  else {
    coprocessor_storelong(5,in_cr12,unaff_r9 + 0x304);
  }
  coprocessor_function(5,0xe,7,in_cr14,in_cr10,in_cr1);
  coprocessor_movefromRt(6,7,7,in_cr10,in_cr2);
  if (in_ZR) {
    coprocessor_function(6,0,0,in_cr0,in_cr10,in_cr2);
  }
  else {
    software_interrupt(0x1a1612);
  }
  if (in_CY) {
    software_interrupt(0x2b2723);
  }
  else {
    software_interrupt(0x3b3733);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

