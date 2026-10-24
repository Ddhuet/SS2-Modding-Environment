
/* WARNING: Control flow encountered bad instruction data */

void FUN_080846e4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r11;
  undefined4 in_r12;
  bool in_NG;
  bool in_OV;
  
  if (in_NG) {
    *(undefined4 *)(param_4 + -4) = unaff_r7;
  }
  if (in_OV) {
    *param_1 = in_r12;
    param_1[-1] = unaff_r11;
    param_1[-2] = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

