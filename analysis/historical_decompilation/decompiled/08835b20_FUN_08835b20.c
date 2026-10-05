
/* WARNING: Control flow encountered bad instruction data */

void FUN_08835b20(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_r4;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int in_r12;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    *(undefined4 *)(in_r12 + 4) = param_2;
    *(undefined4 *)(in_r12 + 8) = unaff_r4;
    *(undefined4 *)(in_r12 + 0xc) = unaff_r8;
    *(undefined4 *)(in_r12 + 0x10) = unaff_r10;
    *(int *)(in_r12 + 0x14) = in_r12;
    *(BADSPACEBASE **)(in_r12 + 0x18) = register0x00000054;
    *(undefined4 *)(in_r12 + 0x1c) = 0x8835b28;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

