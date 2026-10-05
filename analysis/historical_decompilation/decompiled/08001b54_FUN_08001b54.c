
/* WARNING: Control flow encountered bad instruction data */

void FUN_08001b54(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  puVar1 = param_1;
  if (in_ZR) {
    puVar1 = param_1 + -0x140;
    *param_1 = unaff_r11;
  }
  if (in_NG) {
    *param_4 = unaff_r11;
    param_4[-1] = unaff_r10;
    param_4[-2] = param_2;
  }
  if (in_CY) {
    *puVar1 = unaff_lr;
    puVar1[-1] = register0x00000054;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

