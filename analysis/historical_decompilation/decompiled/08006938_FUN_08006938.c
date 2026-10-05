
/* WARNING: Control flow encountered bad instruction data */

void FUN_08006938(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int unaff_r4;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  int unaff_lr;
  undefined4 unaff_pc;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr1;
  undefined4 in_cr12;
  undefined8 uVar2;
  
  if (in_CY) {
    unaff_r11 = (int)param_1 * 0x400 - param_3;
  }
  coprocessor_moveto(0,7,5,unaff_pc,in_cr12,in_cr1);
  if (in_NG) {
    param_1[param_2 * -0x400000] = unaff_r11;
  }
  piVar1 = param_1;
  if (in_ZR) {
    piVar1 = (int *)((int)param_1 * -0x3ff);
    *param_1 = unaff_r11;
  }
  if (in_NG) {
    *(int *)(unaff_r4 + -4) = unaff_r11;
    *(undefined4 *)(unaff_r4 + -8) = unaff_r10;
    *(undefined4 *)(unaff_r4 + -0xc) = unaff_r9;
  }
  if (in_CY) {
    *piVar1 = unaff_lr;
    piVar1[-1] = (int)register0x00000054;
    piVar1[-2] = (int)param_4;
  }
  if (in_NG) {
    *param_4 = 0x8006958;
    param_4[-1] = unaff_lr;
    param_4[-2] = in_r12;
    param_4[-3] = unaff_r8;
    param_4[-4] = param_2;
  }
  uVar2 = func_0x061c2c24();
  if (in_NG) {
    *(int *)((int)uVar2 + (int)((ulonglong)uVar2 >> 0x20) * -0x1000000) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

