
/* WARNING: Control flow encountered bad instruction data */

void FUN_080584d0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 unaff_r6;
  int unaff_r8;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr6;
  
  if (in_NG) {
    *(BADSPACEBASE **)unaff_r8 = register0x00000054;
    *(int *)(unaff_r8 + -4) = unaff_r8;
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

