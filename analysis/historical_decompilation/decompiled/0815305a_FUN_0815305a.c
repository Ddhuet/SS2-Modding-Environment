
/* WARNING: Control flow encountered bad instruction data */

void FUN_0815305a(undefined4 param_1,int param_2)

{
  int unaff_r6;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_NG == (bool)in_OV) {
    coprocessor_load(5,in_cr11,param_2 + 0x2e4);
  }
  if (!in_CY || in_ZR) {
    coprocessor_store(5,in_cr10,param_1);
    coprocessor_load(4,in_cr9,unaff_r8);
  }
  else {
    coprocessor_load(4,in_cr9,param_1);
    coprocessor_store(4,in_cr8,unaff_r6 + 0x220);
  }
  if (in_NG == (bool)in_OV) {
    coprocessor_store(4,in_cr10,unaff_r8);
  }
  else {
    coprocessor_load(5,in_cr11,unaff_r9 + 0x2c4);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    coprocessor_storelong(5,in_cr12,unaff_r11);
  }
  if (!in_ZR) {
    coprocessor_function(0xd,0,7,in_cr15,in_cr14,in_cr14);
  }
  if (!in_NG) {
    software_interrupt(0x4f3f2e);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

