
/* WARNING: Control flow encountered bad instruction data */

void FUN_0801a2ac(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  uint *unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  undefined1 in_ZR;
  bool in_CY;
  undefined8 uVar1;
  
  if (in_CY) {
    *param_1 = 0x801a2b4;
    param_1[-1] = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r10;
    param_1[-4] = unaff_r8;
    *param_2 = 0x801a2b8;
    param_2[-1] = unaff_lr;
    param_2[-2] = in_r12;
    param_2[-3] = param_2;
  }
  if ((bool)in_ZR) {
    param_1 = (undefined4 *)(unaff_r8 & unaff_r6);
  }
  if (in_NG) {
    *(undefined4 *)(unaff_r7 + -4) = unaff_lr;
    *(undefined4 *)(unaff_r7 + -8) = unaff_r11;
    *(undefined4 *)(unaff_r7 + -0xc) = param_3;
    *(undefined4 **)(unaff_r7 + -0x10) = param_2;
  }
  uVar1 = func_0x09f5827e(param_1);
  if (in_CY) {
    in_ZR = (int)uVar1 + (int)((ulonglong)uVar1 >> 0x20) * 0x1000000 == 0;
  }
  if (!(bool)in_ZR) {
    *unaff_r9 = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

