
/* WARNING: Control flow encountered bad instruction data */

void FUN_0826b5ce(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_CY) {
    register0x00000054 = (BADSPACEBASE *)&stack0x000005af;
  }
  if (in_ZR || in_NG != in_OV) {
    *(BADSPACEBASE **)param_4 = register0x00000054;
    *(undefined4 *)(param_4 + -4) = in_r12;
    *(undefined4 *)(param_4 + -8) = unaff_r8;
    *(undefined4 *)(param_4 + -0xc) = unaff_r6;
    *(undefined4 *)(param_4 + -0x10) = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

