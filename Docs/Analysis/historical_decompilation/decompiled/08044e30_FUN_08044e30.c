
/* WARNING: Control flow encountered bad instruction data */

void FUN_08044e30(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  uint unaff_r11;
  uint in_r12;
  uint unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr15;
  
  if ((bool)in_NG != in_OV) {
    unaff_r11 = param_3 + ((int)param_1 << (unaff_r5 & 0xff));
  }
  coprocessor_store2(7,in_cr15,unaff_r4);
  if (in_ZR || (bool)in_NG != in_OV) {
    param_3 = unaff_r7 & (int)param_1 << 0x10;
  }
  if (in_OV) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = param_2;
  }
  if (in_ZR) {
    param_3 = unaff_r9 - (param_4 >> 3 | param_4 << 0x1d);
    unaff_lr = (uint)param_1 & unaff_r6;
  }
  if (in_OV) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = param_4;
    param_1[-3] = param_3;
    param_1[-4] = (uint)param_1;
  }
  else {
    *param_1 = in_r12;
    param_1[-1] = unaff_r11;
    param_1[-2] = unaff_r6;
  }
  if (in_CY) {
    param_1[-1] = unaff_lr;
    param_1[-2] = (uint)param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

