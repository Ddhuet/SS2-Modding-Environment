
/* WARNING: Control flow encountered bad instruction data */

void FUN_086705dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  uint unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  bool in_ZR;
  
  if (!in_ZR) {
    *(undefined4 *)(param_1 + -4) = 0x86705e8;
    *(BADSPACEBASE **)(param_1 + -8) = register0x00000054;
    *(undefined4 *)(param_1 + -0xc) = unaff_r10;
    *(undefined4 *)(param_1 + -0x10) = unaff_r9;
    *(undefined4 *)(param_1 + -0x14) = unaff_r8;
    *(undefined4 *)(param_1 + -0x18) = unaff_r4;
    *(undefined4 *)(param_1 + -0x1c) = param_4;
    *(undefined4 *)(param_1 + -0x20) = param_2;
    *(undefined4 *)(unaff_r7 - (unaff_r7 >> 0x10)) = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

