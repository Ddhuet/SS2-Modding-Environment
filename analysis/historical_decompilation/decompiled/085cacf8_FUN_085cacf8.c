
/* WARNING: Control flow encountered bad instruction data */

void FUN_085cacf8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int in_r12;
  bool in_NG;
  
  if (in_NG) {
    *(undefined4 *)(in_r12 + 4) = param_3;
    *(undefined4 *)(in_r12 + 8) = param_4;
    *(undefined4 *)(in_r12 + 0xc) = unaff_r4;
    *(undefined4 *)(in_r12 + 0x10) = unaff_r7;
    *(undefined4 *)(in_r12 + 0x14) = unaff_r8;
    *(undefined4 *)(in_r12 + 0x18) = unaff_r10;
    *(int *)(in_r12 + 0x1c) = in_r12;
    *(BADSPACEBASE **)(in_r12 + 0x20) = register0x00000054;
    *(undefined4 *)(in_r12 + 0x24) = 0x85cad00;
  }
  software_interrupt(0xfffd5b);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

