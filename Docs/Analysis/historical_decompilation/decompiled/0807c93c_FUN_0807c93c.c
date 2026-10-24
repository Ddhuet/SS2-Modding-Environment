
/* WARNING: Control flow encountered bad instruction data */

void FUN_0807c93c(uint param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 unaff_lr;
  char in_NG;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr6;
  
  if ((bool)in_NG != in_OV) {
    unaff_r11 = (int)param_2 + (param_1 >> (unaff_r5 & 0xff));
  }
  if (in_OV) {
    *param_2 = unaff_lr;
    param_2[-1] = unaff_r11;
    param_2[-2] = unaff_r10;
    param_2[-3] = unaff_r4;
    param_2[-4] = param_3;
    param_2[-5] = param_2;
    param_2[-6] = param_1;
  }
  if (in_CY) {
    coprocessor_store(8,in_cr6,param_1 - 0x134);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

