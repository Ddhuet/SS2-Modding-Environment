
/* WARNING: Control flow encountered bad instruction data */

void FUN_08099c04(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int unaff_r6;
  undefined4 *unaff_r8;
  undefined4 *puVar2;
  int *unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  puVar1 = param_1;
  if (in_ZR) {
    puVar1 = param_1 + -0x17c;
    *param_1 = unaff_r11;
    *unaff_r9 = (int)puVar1;
  }
  if (in_NG) {
    *param_3 = unaff_r11;
    param_3[-1] = unaff_r10;
    param_3[-2] = param_4;
    param_3[-3] = param_3;
    param_3[-4] = param_2;
  }
  if (in_CY) {
    puVar1[-0x201] = unaff_r6;
  }
  if (in_ZR) {
    puVar1 = (undefined4 *)0x370;
  }
  puVar2 = unaff_r8;
  if (!in_CY) {
    puVar2 = (undefined4 *)((int)unaff_r8 + -0x501);
    *unaff_r8 = param_4;
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    *(BADSPACEBASE **)unaff_r6 = register0x00000054;
    *(undefined4 *)(unaff_r6 + -4) = unaff_r11;
    *(undefined4 *)(unaff_r6 + -8) = unaff_r10;
    *(undefined4 **)(unaff_r6 + -0xc) = puVar2;
    *(undefined4 *)(unaff_r6 + -0x10) = unaff_r5;
    *(undefined4 *)(unaff_r6 + -0x14) = unaff_r4;
    *(undefined4 *)(unaff_r6 + -0x18) = param_4;
    *(undefined4 **)(unaff_r6 + -0x1c) = param_3;
    *(undefined4 *)(unaff_r6 + -0x20) = param_2;
    *(undefined4 **)(unaff_r6 + -0x24) = puVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

