
/* WARNING: Control flow encountered bad instruction data */

void FUN_08265172(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r6;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    *(undefined4 *)(unaff_r7 + 4) = param_1;
    *(undefined4 *)(unaff_r7 + 8) = param_3;
    *(undefined4 *)(unaff_r7 + 0xc) = unaff_r6;
    *(int *)(unaff_r7 + 0x10) = unaff_r7;
    *(undefined4 *)(unaff_r7 + 0x14) = unaff_r8;
    *(undefined4 *)(unaff_r7 + 0x18) = unaff_r10;
    *(undefined4 *)(unaff_r7 + 0x1c) = in_r12;
    *(BADSPACEBASE **)(unaff_r7 + 0x20) = register0x00000054;
    *(undefined4 *)(unaff_r7 + 0x24) = 0x826517a;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

