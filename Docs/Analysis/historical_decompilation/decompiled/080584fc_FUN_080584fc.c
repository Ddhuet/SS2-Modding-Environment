
/* WARNING: Control flow encountered bad instruction data */

void FUN_080584fc(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  int unaff_r9;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr6;
  
  if (in_NG) {
    *(BADSPACEBASE **)unaff_r9 = register0x00000054;
    *(undefined4 *)(unaff_r9 + -4) = unaff_r8;
    *(undefined4 *)(unaff_r9 + -8) = param_4;
    *(undefined4 **)(unaff_r9 + -0xc) = param_2;
  }
  if (in_CY) {
    *param_2 = unaff_r6;
  }
  if (!in_ZR) {
    coprocessor_store(8,in_cr6,param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

