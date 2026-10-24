
/* WARNING: Control flow encountered bad instruction data */

void FUN_085fbc74(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_OV;
  
  if (!in_OV) {
    *(undefined4 *)(param_4 + -4) = 0x85fbc7c;
    *(BADSPACEBASE **)(param_4 + -8) = register0x00000054;
    *(undefined4 *)(param_4 + -0xc) = in_r12;
    *(undefined4 *)(param_4 + -0x10) = unaff_r10;
    *(undefined4 *)(param_4 + -0x14) = unaff_r8;
    *(undefined4 *)(param_4 + -0x18) = unaff_r5;
    *(undefined4 *)(param_4 + -0x1c) = unaff_r4;
    *(int *)(param_4 + -0x20) = param_4;
    *(undefined4 *)(param_4 + -0x24) = param_1;
  }
  software_interrupt(0x508463);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

