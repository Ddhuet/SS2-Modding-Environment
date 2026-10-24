
/* WARNING: Control flow encountered bad instruction data */

void FUN_08262490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    *unaff_r6 = param_1;
    unaff_r6[1] = param_2;
    unaff_r6[2] = unaff_r5;
    unaff_r6[3] = unaff_r7;
    unaff_r6[4] = unaff_r8;
    unaff_r6[5] = unaff_r10;
    unaff_r6[6] = in_r12;
    unaff_r6[7] = register0x00000054;
    unaff_r6[8] = 0x8262498;
  }
                    /* WARNING: Could not recover jumptable at 0x08262494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!in_CY) {
    (*(code *)*param_4)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

