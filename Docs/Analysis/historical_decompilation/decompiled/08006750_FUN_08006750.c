
/* WARNING: Control flow encountered bad instruction data */

void FUN_08006750(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_OV;
  
  puVar1 = param_1;
  if (in_ZR) {
    puVar1 = param_1 + -0x140;
    *param_1 = unaff_r11;
  }
  if (in_NG) {
    *unaff_r6 = unaff_r11;
    unaff_r6[-1] = unaff_r10;
    unaff_r6[-2] = puVar1;
  }
  if (in_ZR || in_NG != in_OV) {
    *unaff_r6 = unaff_lr;
    unaff_r6[-1] = unaff_r9;
    unaff_r6[-2] = unaff_r7;
    unaff_r6[-3] = puVar1;
  }
  if (in_OV) {
    *puVar1 = unaff_lr;
    puVar1[-1] = unaff_r11;
    puVar1[-2] = param_3;
    puVar1[-3] = puVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

