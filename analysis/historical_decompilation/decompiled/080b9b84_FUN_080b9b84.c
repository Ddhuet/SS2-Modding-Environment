
/* WARNING: Control flow encountered bad instruction data */

void FUN_080b9b84(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (in_NG) {
    *(undefined4 *)(unaff_r7 + -4) = 0x80b9b8c;
    *(BADSPACEBASE **)(unaff_r7 + -8) = register0x00000054;
    *(undefined4 *)(unaff_r7 + -0xc) = in_r12;
    *(undefined4 *)(unaff_r7 + -0x10) = unaff_r10;
    *(undefined4 **)(unaff_r7 + -0x14) = unaff_r8;
  }
  if (in_CY) {
    *param_1 = 0x80b9b90;
    param_1[-1] = unaff_r11;
    param_1[-2] = param_4;
  }
  if (in_CY && !in_ZR) {
    *unaff_r8 = 0x80b9b94;
    unaff_r8[-1] = unaff_lr;
    unaff_r8[-2] = in_r12;
    unaff_r8[-3] = param_4;
    param_4 = (uint)unaff_r8 & param_2 << 0x10;
  }
  if (in_CY) {
    *param_1 = unaff_r10;
  }
  if (in_NG) {
    *(undefined4 *)(param_4 - 4) = 0x80b9ba0;
    *(undefined4 *)(param_4 - 8) = unaff_lr;
    *(undefined4 *)(param_4 - 0xc) = in_r12;
    *(undefined4 **)(param_4 - 0x10) = unaff_r8;
    *(int *)(param_4 - 0x14) = param_2;
    param_1[param_2 * -0x400000] = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

