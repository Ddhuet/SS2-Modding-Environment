
/* WARNING: Control flow encountered bad instruction data */

void FUN_0828b310(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r10;
  int in_r12;
  int unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_s7;
  
  if (!in_ZR && in_NG == in_OV) {
    if (in_OV) {
      param_3 = in_r12 + unaff_r4 * -0x400;
    }
    if (in_NG) {
      *(int *)unaff_lr = unaff_lr;
      *(BADSPACEBASE **)(unaff_lr + -4) = register0x00000054;
      *(undefined4 *)(unaff_lr + -8) = unaff_r10;
      *(undefined4 *)(unaff_lr + -0xc) = unaff_r6;
      *(undefined4 *)(unaff_lr + -0x10) = unaff_r5;
      *(int *)(unaff_lr + -0x14) = param_3;
    }
    if (!in_CY) {
      *(undefined4 *)(unaff_r4 + -0xe8) = in_s7;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

