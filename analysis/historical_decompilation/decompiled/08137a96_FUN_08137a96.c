
/* WARNING: Control flow encountered bad instruction data */

void FUN_08137a96(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_CY;
  
  if (!in_CY) {
    *(undefined4 *)(param_1 + -4) = 0x8137a9e;
    *(BADSPACEBASE **)(param_1 + -8) = register0x00000054;
    *(undefined4 *)(param_1 + -0xc) = in_r12;
    *(undefined4 *)(param_1 + -0x10) = unaff_r10;
    *(undefined4 *)(param_1 + -0x14) = unaff_r8;
    *(undefined4 *)(param_1 + -0x18) = unaff_r7;
    *(undefined4 *)(param_1 + -0x1c) = unaff_r5;
    *(undefined4 *)(param_1 + -0x20) = unaff_r4;
    *(undefined4 *)(param_1 + -0x24) = param_4;
    *(undefined4 *)(param_1 + -0x28) = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

