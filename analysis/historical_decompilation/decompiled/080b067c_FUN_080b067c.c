
/* WARNING: Control flow encountered bad instruction data */

void FUN_080b067c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r6;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr1;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_NG) {
    return;
  }
  if (in_CY) {
    *(undefined4 *)((int)param_1 + -0x801) = unaff_r6;
  }
  if (!in_OV) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = param_4;
    param_1[-3] = param_3;
    param_1[-4] = param_2;
    param_1[-5] = param_1;
  }
  if (!in_ZR) {
    coprocessor_store(0xc,in_cr1,param_1);
  }
  coprocessor_function2(7,0xe,2,in_cr15,in_cr14,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

