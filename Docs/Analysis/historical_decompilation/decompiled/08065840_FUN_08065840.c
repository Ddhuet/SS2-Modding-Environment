
/* WARNING: Control flow encountered bad instruction data */

void FUN_08065840(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_OV;
  
  if (in_OV) {
    *(undefined4 *)(param_3 + -4) = 0x8065848;
    *(BADSPACEBASE **)(param_3 + -8) = register0x00000054;
    *(undefined4 *)(param_3 + -0xc) = in_r12;
    *(undefined4 *)(param_3 + -0x10) = unaff_r10;
    *(undefined4 *)(param_3 + -0x14) = unaff_r8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

