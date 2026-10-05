
/* WARNING: Control flow encountered bad instruction data */

void FUN_081717da(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r5;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    *(undefined4 *)(unaff_r7 + 4) = param_1;
    *(undefined4 *)(unaff_r7 + 8) = param_2;
    *(undefined4 *)(unaff_r7 + 0xc) = param_3;
    *(undefined4 *)(unaff_r7 + 0x10) = param_4;
    *(undefined4 *)(unaff_r7 + 0x14) = unaff_r4;
    *(undefined4 **)(unaff_r7 + 0x18) = unaff_r5;
    *(int *)(unaff_r7 + 0x1c) = unaff_r7;
    *(undefined4 *)(unaff_r7 + 0x20) = unaff_r8;
    *(undefined4 *)(unaff_r7 + 0x24) = unaff_r10;
    *(undefined4 *)(unaff_r7 + 0x28) = in_r12;
    *(BADSPACEBASE **)(unaff_r7 + 0x2c) = register0x00000054;
    *(undefined4 *)(unaff_r7 + 0x30) = 0x81717e2;
  }
  else {
    *unaff_r5 = unaff_r8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

