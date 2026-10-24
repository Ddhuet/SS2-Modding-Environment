
/* WARNING: Control flow encountered bad instruction data */

void FUN_0856a448(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  int unaff_r5;
  undefined4 unaff_r7;
  uint unaff_r8;
  int *unaff_r10;
  int unaff_r11;
  int iVar1;
  undefined4 in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(unaff_r11 + 4) = param_3;
  *(undefined4 *)(unaff_r11 + 8) = param_4;
  *(undefined4 *)(unaff_r11 + 0xc) = unaff_r4;
  *(undefined4 *)(unaff_r11 + 0x10) = unaff_r7;
  *(uint *)(unaff_r11 + 0x14) = unaff_r8;
  *(int **)(unaff_r11 + 0x18) = unaff_r10;
  *(undefined4 *)(unaff_r11 + 0x1c) = in_r12;
  *(BADSPACEBASE **)(unaff_r11 + 0x20) = register0x00000054;
  *(undefined4 *)(unaff_r11 + 0x24) = 0x856a450;
  iVar1 = unaff_r11 + 0x24;
  if (in_NG == (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == (bool)in_OV) {
    return;
  }
  if (in_CY && !in_ZR) {
    unaff_r8 = (uint)*(byte *)(unaff_r5 + -0xaa5);
  }
  if (in_CY) {
    *(int *)(unaff_r8 - 0x8a9) = iVar1;
  }
  if (!in_NG) {
    unaff_r10 = (int *)((int)unaff_r10 + -0x849);
    *unaff_r10 = iVar1;
  }
  if (!in_CY || in_ZR) {
    *(int *)((int)unaff_r10 + 0xaa9) = iVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

