
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08236806) */

void FUN_082367e2(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  uint unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  int unaff_r11;
  int in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr12;
  
  if (in_NG == (bool)in_OV) {
    if (in_CY) {
      unaff_r4 = *(undefined4 *)(unaff_r10 * -0x400 + 0x82367f2);
    }
    if (in_ZR) {
      software_interrupt(0x314230);
    }
    if (in_NG) {
      in_CY = false;
      param_1 = unaff_r8 & 0x4c0000;
    }
    if (!in_CY) {
      *(undefined4 *)(unaff_r8 - 4) = unaff_lr;
      *(int *)(unaff_r8 - 8) = in_r12;
      *(int *)(unaff_r8 - 0xc) = unaff_r10;
      *(undefined4 *)(unaff_r8 - 0x10) = unaff_r9;
      *(uint *)(unaff_r8 - 0x14) = unaff_r8;
      *(undefined4 *)(unaff_r8 - 0x18) = unaff_r6;
      *(undefined4 *)(unaff_r8 - 0x1c) = param_4;
    }
    if (in_OV == '\0') {
      *(undefined4 *)(param_1 + 4) = param_2;
      *(undefined4 *)(param_1 + 8) = param_4;
      *(undefined4 *)(param_1 + 0xc) = unaff_r4;
      *(undefined4 *)(param_1 + 0x10) = unaff_r9;
      *(int *)(param_1 + 0x14) = unaff_r10;
      *(int *)(param_1 + 0x18) = unaff_r11 + in_r12;
      *(BADSPACEBASE **)(param_1 + 0x1c) = register0x00000054;
      *(undefined4 *)(param_1 + 0x20) = 0x8236806;
    }
    else {
      coprocessor_load(8,in_cr12,param_3);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0xd5b581);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

