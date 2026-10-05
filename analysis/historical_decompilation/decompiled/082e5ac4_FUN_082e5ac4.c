
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e5ac4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  if (in_NG) {
    register0x00000054 = (BADSPACEBASE *)auStack_18;
    param_2 = uStack_14;
    param_4 = uStack_c;
    in_r12 = uStack_4;
    unaff_lr = param_5;
  }
  *(undefined4 *)(unaff_r6 + -4) = 0x82e5ad4;
  *(undefined4 *)(unaff_r6 + -8) = unaff_lr;
  *(BADSPACEBASE **)(unaff_r6 + -0xc) = register0x00000054;
  *(undefined4 *)(unaff_r6 + -0x10) = in_r12;
  *(undefined4 *)(unaff_r6 + -0x14) = unaff_r10;
  *(undefined4 *)(unaff_r6 + -0x18) = unaff_r9;
  *(undefined4 *)(unaff_r6 + -0x1c) = unaff_r8;
  *(undefined4 *)(unaff_r6 + -0x20) = param_4;
  *(undefined4 *)(unaff_r6 + -0x24) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

