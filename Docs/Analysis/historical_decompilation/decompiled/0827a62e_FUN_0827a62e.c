
/* WARNING: Control flow encountered bad instruction data */

void FUN_0827a62e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    *(undefined4 *)(unaff_r6 + 4) = param_1;
    *(undefined4 *)(unaff_r6 + 8) = param_3;
    *(int *)(unaff_r6 + 0xc) = unaff_r6;
    *(undefined4 *)(unaff_r6 + 0x10) = unaff_r7;
    *(undefined4 *)(unaff_r6 + 0x14) = unaff_r8;
    *(undefined4 *)(unaff_r6 + 0x18) = unaff_r10;
    *(undefined4 *)(unaff_r6 + 0x1c) = in_r12;
    *(BADSPACEBASE **)(unaff_r6 + 0x20) = register0x00000054;
    *(undefined4 *)(unaff_r6 + 0x24) = 0x827a636;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

