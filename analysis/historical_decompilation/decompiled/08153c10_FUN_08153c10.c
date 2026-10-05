
/* WARNING: Control flow encountered bad instruction data */

void FUN_08153c10(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  int unaff_r9;
  int iVar1;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr14;
  
  if (in_NG == in_OV) {
    coprocessor_load(5,in_cr11,param_2);
  }
  if (!in_CY || in_ZR) {
    coprocessor_store(4,in_cr10,param_1);
    coprocessor_load(4,in_cr9,unaff_r8);
  }
  else {
    coprocessor_load(4,in_cr9,param_1);
    coprocessor_store(4,in_cr8,unaff_r5);
  }
  if (in_NG == in_OV) {
    iVar1 = unaff_r9 + 0x284;
    coprocessor_store(5,in_cr10,iVar1);
  }
  else {
    iVar1 = unaff_r9 + 0x2c4;
    coprocessor_load(5,in_cr11,iVar1);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_movefromRt(6,6,6,in_cr10,in_cr2);
  }
  else {
    coprocessor_storelong(5,in_cr12,iVar1 + 0x304);
  }
  coprocessor_function(6,0xe,7,in_cr14,in_cr10,in_cr2);
  coprocessor_movefromRt(6,7,7,in_cr10,in_cr2);
  if (in_ZR) {
    software_interrupt(0xb0602);
  }
  else {
    software_interrupt(0x1b1713);
  }
  if (in_CY) {
    software_interrupt(0x2b2723);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

