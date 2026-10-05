
/* WARNING: Control flow encountered bad instruction data */

void FUN_08153072(void)

{
  int unaff_r9;
  undefined4 unaff_r11;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_NG != (bool)in_OV) {
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

