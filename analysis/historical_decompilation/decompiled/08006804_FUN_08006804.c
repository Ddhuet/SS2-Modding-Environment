
/* WARNING: Control flow encountered bad instruction data */

void FUN_08006804(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *unaff_r4;
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  
  puVar1 = param_1;
  if (in_ZR) {
    puVar1 = param_1 + -0x140;
    *param_1 = unaff_r11;
  }
  if (in_NG) {
    *unaff_r4 = unaff_r11;
    unaff_r4[-1] = unaff_r10;
    unaff_r4[-2] = puVar1;
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    *param_3 = unaff_lr;
    param_3[-1] = unaff_r9;
    param_3[-2] = unaff_r7;
    param_3[-3] = puVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

