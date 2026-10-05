
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ab3578(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int *unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  char in_NG;
  bool in_CY;
  char in_OV;
  
  if (!in_CY) {
    *(undefined4 *)(unaff_r11 + 4) = param_1;
    *(undefined4 *)(unaff_r11 + 8) = unaff_r4;
    *(int **)(unaff_r11 + 0xc) = unaff_r5;
    *(undefined4 *)(unaff_r11 + 0x10) = unaff_r7;
    *(undefined4 *)(unaff_r11 + 0x14) = unaff_r8;
    *(undefined4 *)(unaff_r11 + 0x18) = unaff_r10;
    *(undefined4 *)(unaff_r11 + 0x1c) = in_r12;
    *(BADSPACEBASE **)(unaff_r11 + 0x20) = register0x00000054;
    *(undefined4 *)(unaff_r11 + 0x24) = 0x8ab3580;
    unaff_r11 = unaff_r11 + 0x24;
  }
  if ((bool)in_NG) {
    unaff_r11 = *unaff_r5;
  }
  if (in_NG == in_OV) {
    func_0x099a22f4();
    param_2 = extraout_r1;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG == in_OV) {
    *(undefined4 *)(unaff_r9 + 4) = param_2;
    *(undefined4 *)(unaff_r9 + 8) = param_4;
    *(undefined4 *)(unaff_r9 + 0xc) = unaff_r7;
    *(int *)(unaff_r9 + 0x10) = unaff_r11;
    *(undefined4 *)(unaff_r9 + 0x14) = in_r12;
    *(BADSPACEBASE **)(unaff_r9 + 0x18) = register0x00000054;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

