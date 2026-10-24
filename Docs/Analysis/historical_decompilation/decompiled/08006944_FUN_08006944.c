
/* WARNING: Control flow encountered bad instruction data */

void FUN_08006944(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int unaff_r4;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined8 uVar2;
  
  puVar1 = param_1;
  if (in_ZR) {
    puVar1 = (undefined4 *)((int)param_1 * -0x3ff);
    *param_1 = unaff_r11;
  }
  if (in_NG) {
    *(undefined4 *)(unaff_r4 + -4) = unaff_r11;
    *(undefined4 *)(unaff_r4 + -8) = unaff_r10;
    *(undefined4 *)(unaff_r4 + -0xc) = unaff_r9;
  }
  if (in_CY) {
    *puVar1 = unaff_lr;
    puVar1[-1] = register0x00000054;
    puVar1[-2] = param_4;
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
    *(undefined4 *)((int)uVar2 + (int)((ulonglong)uVar2 >> 0x20) * -0x1000000) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

