
/* WARNING: Control flow encountered bad instruction data */

void FUN_080a0184(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 unaff_lr;
  char in_NG;
  bool in_OV;
  
  if ((bool)in_NG != in_OV) {
    unaff_r11 = param_3 + ((int)param_1 << (unaff_r5 & 0xff));
  }
  if (in_OV) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = unaff_r10;
    param_1[-3] = unaff_r4;
    param_1[-4] = param_3;
    param_1[-5] = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

