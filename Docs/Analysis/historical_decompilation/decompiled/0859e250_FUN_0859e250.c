
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0859e258) */

void FUN_0859e250(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r7;
  undefined1 *unaff_r8;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_CY;
  bool in_OV;
  
  if (!in_NG) {
    unaff_r8 = unaff_r8 + -0x5a7;
    *unaff_r8 = (char)unaff_r11;
  }
                    /* WARNING: Could not recover jumptable at 0x0859e254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!in_OV) {
    (*(code *)((uint)unaff_r8 ^ 0xa80))();
    return;
  }
  if (in_CY) {
    *param_3 = param_2;
    param_3[1] = param_4;
    param_3[2] = unaff_r4;
    param_3[3] = unaff_r7;
    param_3[4] = unaff_r8;
    param_3[5] = unaff_r11;
    param_3[6] = in_r12;
    param_3[7] = 0x859e26c;
  }
  else {
    *unaff_r7 = unaff_lr;
    unaff_r7[-1] = register0x00000054;
    unaff_r7[-2] = in_r12;
    unaff_r7[-3] = unaff_r11;
    unaff_r7[-4] = unaff_r8;
    unaff_r7[-5] = unaff_r7;
    unaff_r7[-6] = unaff_r4;
    unaff_r7[-7] = param_4;
    unaff_r7[-8] = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

