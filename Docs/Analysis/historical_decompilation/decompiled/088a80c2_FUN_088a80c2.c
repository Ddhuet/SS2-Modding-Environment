
/* WARNING: Control flow encountered bad instruction data */

void FUN_088a80c2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int unaff_r11;
  int in_r12;
  char in_NG;
  bool in_ZR;
  bool in_OV;
  
  if (!in_ZR && (bool)in_NG == in_OV) {
    *(undefined4 *)(in_r12 + -4) = 0x88a80ca;
    *(BADSPACEBASE **)(in_r12 + -8) = register0x00000054;
    *(int *)(in_r12 + -0xc) = in_r12;
    *(undefined4 *)(in_r12 + -0x10) = unaff_r10;
    *(undefined4 *)(in_r12 + -0x14) = unaff_r8;
    *(undefined4 *)(in_r12 + -0x18) = unaff_r6;
    *(undefined4 *)(in_r12 + -0x1c) = unaff_r5;
    *(undefined4 *)(in_r12 + -0x20) = unaff_r4;
    *(undefined4 *)(in_r12 + -0x24) = param_4;
    *(undefined4 *)(in_r12 + -0x28) = param_2;
  }
  if (!in_OV) {
    *(undefined4 *)(unaff_r11 + 0xa9c) = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

