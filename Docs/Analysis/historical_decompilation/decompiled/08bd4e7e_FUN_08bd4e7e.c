
/* WARNING: Control flow encountered bad instruction data */

void FUN_08bd4e7e(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint unaff_r5;
  uint unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  
  if (in_ZR) {
    unaff_r11 = param_1 & param_1 >> (unaff_r5 & 0xff);
    param_1 = param_4 & param_1 >> (param_4 & 0xff);
  }
  if (!in_CY) {
    param_1 = param_4 & param_4 << (param_4 & 0xff);
  }
  if (!in_NG) {
    param_1 = 0x33d1;
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    param_4 = param_4 - 0xf4;
    coprocessor_load(0,in_cr0,param_4);
  }
  if (!in_CY) {
    coprocessor_load(3,in_cr0,unaff_r11 - 0xc);
  }
  func_0x0802136e(param_1,param_2,param_3,param_4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

