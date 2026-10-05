
/* WARNING: Control flow encountered bad instruction data */

void FUN_08058768(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *unaff_r4;
  int *piVar1;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  undefined4 *unaff_r8;
  int *unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  int in_r12;
  int unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_CY) {
    unaff_r11 = 0x5f0;
    unaff_r4 = (int *)0x5f0;
  }
  piVar1 = unaff_r4;
  if (in_NG) {
    piVar1 = (int *)((int)unaff_r4 + (int)param_1 * 2);
    *unaff_r4 = (int)param_1;
  }
  if (in_CY) {
    param_3 = *(int *)((int)param_1 * 0x101);
    param_1 = (undefined4 *)(param_3 + -0x7880);
  }
  if (in_OV) {
    *unaff_r8 = unaff_r6;
    unaff_r8[-1] = unaff_r5;
    unaff_r8[-2] = piVar1;
    unaff_r8[-3] = param_3;
    unaff_r8[-4] = param_2;
    unaff_r8 = unaff_r8 + -5;
  }
  if (!in_ZR) {
    *param_1 = unaff_r5;
    param_1[1] = unaff_r6;
    param_1[2] = unaff_r10;
    param_1[3] = unaff_lr;
  }
  if (in_OV) {
    *unaff_r9 = unaff_lr;
    unaff_r9[-1] = (int)register0x00000054;
    unaff_r9[-2] = in_r12;
    unaff_r9[-3] = param_3;
    unaff_r9 = unaff_r9 + -4;
  }
  if (!in_ZR) {
    unaff_r8[1] = param_2;
    unaff_r8[2] = param_4;
    unaff_r8[3] = piVar1;
    unaff_r8[4] = unaff_r6;
    unaff_r8[5] = unaff_r7;
    *unaff_r9 = (int)param_1;
    unaff_r9[1] = param_4;
    unaff_r9[2] = unaff_r7;
    unaff_r9[3] = (int)unaff_r8;
    unaff_r9[4] = unaff_r11;
    unaff_r9[5] = in_r12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

