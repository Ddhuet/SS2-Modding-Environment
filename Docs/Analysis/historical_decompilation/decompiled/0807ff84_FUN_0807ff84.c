
/* WARNING: Control flow encountered bad instruction data */

void FUN_0807ff84(int param_1,undefined4 *param_2,uint param_3)

{
  uint unaff_r11;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_OV;
  
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

