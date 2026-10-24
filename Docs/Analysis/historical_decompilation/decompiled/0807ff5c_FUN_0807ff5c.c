
/* WARNING: Control flow encountered bad instruction data */

void FUN_0807ff5c(uint param_1,uint *param_2,uint param_3)

{
  uint unaff_r4;
  int unaff_r8;
  uint unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_CY && !in_ZR) {
    *param_2 = unaff_lr;
    param_2[-1] = unaff_r11;
    param_2[-2] = param_3;
    param_2[-3] = (uint)param_2;
    param_2[-4] = param_1;
  }
  if (in_NG) {
    param_3 = 0;
  }
  if (in_ZR || in_NG != in_OV) {
    param_3 = (uint)&stack0x00000000 & param_1 << 0x10;
  }
  if (in_OV) {
    *param_2 = unaff_lr;
    param_2[-1] = unaff_r11;
    param_2[-2] = param_3;
    param_2[-3] = param_1;
    param_3 = unaff_r8 + ((uint)in_CY << 0x1f | unaff_r4 >> 1);
  }
  if (in_ZR) {
    unaff_lr = param_1 & param_1 >> 3;
    param_2 = (uint *)0x3a8;
  }
  if (in_NG) {
    param_3 = 0;
  }
  if (in_ZR || in_NG != in_OV) {
    param_3 = unaff_r11 & param_1 << 0x10;
  }
  if (in_OV) {
    *param_2 = unaff_lr;
    param_2[-1] = unaff_r11;
    param_2[-2] = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

