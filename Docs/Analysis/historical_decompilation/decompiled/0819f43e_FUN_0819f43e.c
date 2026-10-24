
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819f43e(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_CY;
  bool in_OV;
  
  *(undefined4 *)(unaff_r10 + 4) = param_1;
  *(int *)(unaff_r10 + 8) = param_3;
  *(int *)(unaff_r10 + 0xc) = unaff_r4;
  *(undefined4 *)(unaff_r10 + 0x10) = unaff_r5;
  *(undefined4 *)(unaff_r10 + 0x14) = unaff_r7;
  *(undefined4 *)(unaff_r10 + 0x18) = unaff_r8;
  *(int *)(unaff_r10 + 0x1c) = unaff_r10;
  *(undefined4 *)(unaff_r10 + 0x20) = in_r12;
  *(BADSPACEBASE **)(unaff_r10 + 0x24) = register0x00000054;
  *(undefined4 *)(unaff_r10 + 0x28) = 0x819f446;
  if (in_NG) {
    *(BADSPACEBASE **)unaff_r4 = register0x00000054;
    *(undefined4 *)(unaff_r4 + -4) = unaff_r11;
    *(undefined4 *)(unaff_r4 + -8) = unaff_r9;
    *(undefined4 *)(unaff_r4 + -0xc) = param_4;
    *(int *)(unaff_r4 + -0x10) = param_2;
  }
  if (!in_OV) {
    software_interrupt(0x64443e);
  }
  if (in_NG) {
    *(undefined4 *)(param_2 + -4) = unaff_lr;
    *(undefined4 *)(param_2 + -8) = unaff_r11;
    *(undefined4 *)(param_2 + -0xc) = unaff_r6;
    *(undefined4 *)(param_2 + -0x10) = unaff_r5;
    *(undefined4 *)(param_2 + -0x14) = param_4;
    *(int *)(param_2 + -0x18) = param_3;
    *(undefined4 *)(param_2 + -0x1c) = param_1;
  }
  if (in_CY) {
    *(BADSPACEBASE **)param_3 = register0x00000054;
    *(undefined4 *)(param_3 + -4) = unaff_r9;
    *(undefined4 *)(param_3 + -8) = unaff_r8;
    *(undefined4 *)(param_3 + -0xc) = unaff_r5;
    *(int *)(param_3 + -0x10) = unaff_r4;
    *(undefined4 *)(param_3 + -0x14) = param_4;
    *(int *)(param_3 + -0x18) = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

