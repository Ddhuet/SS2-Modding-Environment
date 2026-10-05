
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_08ab0cb4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_CY) {
    *(undefined4 *)(unaff_r11 + 4) = param_1;
    *(undefined4 *)(unaff_r11 + 8) = param_4;
    *(undefined4 *)(unaff_r11 + 0xc) = unaff_r4;
    *(undefined4 *)(unaff_r11 + 0x10) = unaff_r7;
    *(undefined4 *)(unaff_r11 + 0x14) = unaff_r8;
    *(undefined4 *)(unaff_r11 + 0x18) = unaff_r10;
    *(undefined4 *)(unaff_r11 + 0x1c) = in_r12;
    *(BADSPACEBASE **)(unaff_r11 + 0x20) = register0x00000054;
    *(undefined4 *)(unaff_r11 + 0x24) = 0x8ab0cbc;
  }
  if (in_NG == in_OV) {
    *(int *)(param_2 + 4) = param_2;
    *(undefined4 *)(param_2 + 8) = param_4;
    *(undefined4 *)(param_2 + 0xc) = unaff_r4;
    *(undefined4 *)(param_2 + 0x10) = unaff_r8;
    *(undefined4 *)(param_2 + 0x14) = in_r12;
  }
  if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

