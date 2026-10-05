
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b0c180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  int unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    *(undefined4 *)(unaff_r5 + 4) = param_2;
    *(undefined4 *)(unaff_r5 + 8) = param_4;
    *(undefined4 *)(unaff_r5 + 0xc) = unaff_r4;
    *(undefined4 *)(unaff_r5 + 0x10) = unaff_r8;
    *(undefined4 *)(unaff_r5 + 0x14) = unaff_r10;
    *(undefined4 *)(unaff_r5 + 0x18) = in_r12;
    *(BADSPACEBASE **)(unaff_r5 + 0x1c) = register0x00000054;
    *(undefined4 *)(unaff_r5 + 0x20) = 0x8b0c188;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

