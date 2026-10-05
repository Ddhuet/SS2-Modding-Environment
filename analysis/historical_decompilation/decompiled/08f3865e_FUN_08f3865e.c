
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08f3866a) */

void FUN_08f3865e(undefined4 param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r8;
  undefined1 unaff_r9;
  int unaff_r11;
  int in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(5,in_cr11,unaff_lr);
    coprocessor_storelong(7,in_cr12,unaff_lr);
  }
  if (!in_CY) {
    return;
  }
  if (!in_ZR) {
    *(undefined4 *)(unaff_r11 + 4) = param_1;
    *(undefined4 *)(unaff_r11 + 8) = unaff_r4;
    *(undefined4 *)(unaff_r11 + 0xc) = unaff_r8;
    *(int *)(unaff_r11 + 0x10) = in_r12;
    *(BADSPACEBASE **)(unaff_r11 + 0x14) = register0x00000054;
    *(undefined4 *)(unaff_r11 + 0x18) = unaff_lr;
    *(undefined1 *)(in_r12 + 0xc21) = unaff_r9;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

