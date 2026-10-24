
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f0a3c(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_NG;
  bool in_OV;
  
  if (in_OV) {
    *(undefined4 *)(param_2 + -4) = 0x82f0a44;
    *(BADSPACEBASE **)(param_2 + -8) = register0x00000054;
    *(undefined4 *)(param_2 + -0xc) = in_r12;
    *(undefined4 *)(param_2 + -0x10) = unaff_r10;
    *(undefined4 *)(param_2 + -0x14) = unaff_r8;
    *(undefined4 *)(param_2 + -0x18) = unaff_r7;
    *(undefined4 *)(param_2 + -0x1c) = unaff_r5;
    *(undefined4 *)(param_2 + -0x20) = param_3;
    *(int *)(param_2 + -0x24) = param_2;
  }
  if (!in_NG) {
    func_0x099483a4();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

