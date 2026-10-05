
/* WARNING: Control flow encountered bad instruction data */

void FUN_08aafd5e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_CY && !in_ZR) {
    if (in_NG == in_OV) {
      func_0x07958b8e();
    }
    if (in_NG != in_OV) {
      func_0x07998fd6();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(unaff_r7 + 4) = param_2;
  *(undefined4 *)(unaff_r7 + 8) = param_4;
  *(undefined4 *)(unaff_r7 + 0xc) = unaff_r4;
  *(undefined4 *)(unaff_r7 + 0x10) = unaff_r8;
  *(undefined4 *)(unaff_r7 + 0x14) = unaff_r10;
  *(undefined4 *)(unaff_r7 + 0x18) = in_r12;
  *(BADSPACEBASE **)(unaff_r7 + 0x1c) = register0x00000054;
  *(undefined4 *)(unaff_r7 + 0x20) = 0x8aafd66;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

