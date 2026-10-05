
/* WARNING: Control flow encountered bad instruction data */

void FUN_080066f4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_CY;
  
  if (in_NG) {
    *(undefined4 *)(unaff_r5 + -4) = 0x80066fc;
    *(BADSPACEBASE **)(unaff_r5 + -8) = register0x00000054;
    *(undefined4 *)(unaff_r5 + -0xc) = in_r12;
    *(undefined4 *)(unaff_r5 + -0x10) = unaff_r10;
    *(undefined4 *)(unaff_r5 + -0x14) = unaff_r8;
  }
  if (in_CY) {
    *param_1 = unaff_lr;
    param_1[-1] = register0x00000054;
    param_1[-2] = unaff_r11;
    param_1[-3] = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

