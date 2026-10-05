
/* WARNING: Control flow encountered bad instruction data */

void FUN_08006650(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  undefined4 *puVar1;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  puVar1 = unaff_r9;
  if (in_ZR) {
    puVar1 = unaff_r9 + -0x140;
    *unaff_r9 = unaff_r11;
  }
  if (in_CY) {
    *param_2 = unaff_r11;
    param_2[-1] = unaff_r10;
    param_2[-2] = param_4;
    param_2[-3] = param_2;
    *param_2 = 0x8006660;
    param_2[-1] = unaff_lr;
    param_2[-2] = in_r12;
    param_2[-3] = param_4;
    param_2[-4] = param_2;
    *param_3 = 0x8006664;
    param_3[-1] = unaff_lr;
    param_3[-2] = in_r12;
    param_3[-3] = puVar1;
    param_3[-4] = unaff_r8;
    param_3[-5] = param_3;
    *param_4 = 0x8006668;
    param_4[-1] = unaff_lr;
    param_4[-2] = in_r12;
    param_4[-3] = param_4;
    param_4[-4] = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

