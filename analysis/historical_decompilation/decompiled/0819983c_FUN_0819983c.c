
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819983c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  int unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  undefined4 *unaff_lr;
  undefined4 *puVar1;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    software_interrupt(0x96b5eb);
  }
  puVar1 = unaff_lr;
  if (in_ZR || in_NG != in_OV) {
    param_4 = param_4 + 0xdd6;
    *param_4 = (char)unaff_lr;
    puVar1 = (undefined4 *)((int)unaff_lr + -0x515);
    unaff_r4 = *unaff_lr;
  }
  if (in_NG == in_OV) {
    *unaff_r8 = param_2;
    unaff_r8[1] = param_3;
    unaff_r8[2] = unaff_r6;
    unaff_r8[3] = unaff_r7;
    unaff_r8[4] = unaff_r9;
    unaff_r8[5] = puVar1;
    unaff_r8[6] = 0x8199850;
  }
  if (!in_CY) {
    *(undefined4 *)(unaff_r7 + -4) = 0x8199854;
    *(undefined4 **)(unaff_r7 + -8) = puVar1;
    *(BADSPACEBASE **)(unaff_r7 + -0xc) = register0x00000054;
    *(undefined4 *)(unaff_r7 + -0x10) = unaff_r11;
    *(undefined4 *)(unaff_r7 + -0x14) = unaff_r9;
    *(int *)(unaff_r7 + -0x18) = unaff_r7;
    *(undefined4 *)(unaff_r7 + -0x1c) = unaff_r6;
    *(undefined4 *)(unaff_r7 + -0x20) = unaff_r4;
    *(undefined1 **)(unaff_r7 + -0x24) = param_4;
    *(undefined4 *)(unaff_r7 + -0x28) = param_3;
    *(undefined4 *)(unaff_r7 + -0x2c) = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

