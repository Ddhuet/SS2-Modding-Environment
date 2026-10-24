
/* WARNING: Control flow encountered bad instruction data */

void FUN_080854fc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  uint unaff_r4;
  undefined4 unaff_r5;
  uint unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (in_NG) {
    *param_4 = 0x8085504;
    param_4[-1] = register0x00000054;
    param_4[-2] = in_r12;
    param_4[-3] = unaff_r10;
    param_4[-4] = unaff_r8;
    param_4[-5] = unaff_r6;
    param_4[-6] = unaff_r5;
    param_4[-7] = unaff_r4;
  }
  if (in_CY) {
    unaff_r6 = unaff_r4 & ~((int)param_1 << 0x10);
  }
  if (!in_ZR) {
    *param_1 = unaff_r7;
    param_1[-1] = unaff_r6;
    param_1[-2] = param_4;
    param_1[-3] = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

