
/* WARNING: Control flow encountered bad instruction data */

void FUN_08670620(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  bool in_CY;
  
  if (!in_CY) {
    *(undefined4 *)(param_2 + -4) = 0x867062c;
    *(BADSPACEBASE **)(param_2 + -8) = register0x00000054;
    *(undefined4 *)(param_2 + -0xc) = unaff_r10;
    *(undefined4 *)(param_2 + -0x10) = unaff_r9;
    *(undefined4 *)(param_2 + -0x14) = unaff_r8;
    *(undefined4 *)(param_2 + -0x18) = unaff_r5;
    *(undefined4 *)(param_2 + -0x1c) = unaff_r4;
    *(undefined4 *)(param_2 + -0x20) = param_4;
    *(int *)(param_2 + -0x24) = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

