
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825a71a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_r9;
  uint unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr12;
  
  if (in_CY) {
    unaff_r9 = unaff_r9 + 0x51;
    unaff_r11 = 0;
  }
  if (!in_ZR) {
    *(undefined4 *)(unaff_r9 - (unaff_r11 >> 0x10)) = param_3;
  }
  if (in_NG == in_OV) {
    coprocessor_store(3,in_cr12,param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

