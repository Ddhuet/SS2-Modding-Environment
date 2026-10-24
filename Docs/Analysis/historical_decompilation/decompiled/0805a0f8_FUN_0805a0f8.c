
/* WARNING: Control flow encountered bad instruction data */

void FUN_0805a0f8(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  undefined4 unaff_r8;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (!in_CY) {
    *param_2 = 0x805a100;
    param_2[-1] = register0x00000054;
    param_2[-2] = in_r12;
    param_2[-3] = unaff_r10;
    param_2[-4] = unaff_r8;
  }
  if (in_ZR || in_NG != in_OV) {
    register0x00000054 = *(BADSPACEBASE **)unaff_r10;
    unaff_r11 = *(undefined4 *)(unaff_r10 + -4);
    param_4 = *(undefined4 *)(unaff_r10 + -8);
  }
  if (in_NG) {
    *(int *)(param_3 + -4) = unaff_r7;
  }
  if (in_OV) {
    *param_1 = in_r12;
    param_1[-1] = unaff_r11;
    param_1[-2] = unaff_r6;
  }
  if (in_ZR) {
    uVar1 = (uint)param_1 & unaff_r7 << 0xd;
    *unaff_r5 = &PTR_DAT_0805a114;
    unaff_r5[-1] = register0x00000054;
    unaff_r5[-2] = unaff_r8;
    unaff_r5[-3] = uVar1;
    *unaff_r5 = &PTR_DAT_0805a118;
    unaff_r5[-1] = register0x00000054;
    unaff_r5[-2] = unaff_r8;
    unaff_r5[-3] = unaff_r6;
    unaff_r5[-4] = param_4;
    unaff_r5[-5] = param_3;
    *unaff_r5 = &PTR_DAT_0805a11c;
    unaff_r5[-1] = register0x00000054;
    unaff_r5[-2] = unaff_r8;
    unaff_r5[-3] = unaff_r5;
    unaff_r5[-4] = uVar1;
    unaff_r5[-5] = param_3;
    *unaff_r5 = &PTR_DAT_0805a120;
    unaff_r5[-1] = register0x00000054;
    unaff_r5[-2] = unaff_r8;
    unaff_r5[-3] = unaff_r6;
    unaff_r5[-4] = unaff_r5;
    unaff_r5[-5] = uVar1;
    unaff_r5[-6] = param_3;
    unaff_r5[-7] = param_2;
    *unaff_r5 = &PTR_DAT_0805a124;
    unaff_r5[-1] = register0x00000054;
    unaff_r5[-2] = unaff_r8;
    unaff_r5[-3] = unaff_r6;
    unaff_r5[-4] = param_4;
    unaff_r5[-5] = param_3;
    *unaff_r5 = &PTR_DAT_0805a128;
    unaff_r5[-1] = register0x00000054;
    unaff_r5[-2] = unaff_r8;
    unaff_r5[-3] = unaff_r6;
    unaff_r5[-4] = param_4;
    unaff_r5[-5] = param_3;
    *unaff_r5 = &PTR_DAT_0805a12c;
    unaff_r5[-1] = register0x00000054;
    unaff_r5[-2] = unaff_r8;
    unaff_r5[-3] = unaff_r6;
    unaff_r5[-4] = unaff_r5;
    unaff_r5[-5] = param_3;
    *unaff_r5 = &PTR_DAT_0805a130;
    unaff_r5[-1] = register0x00000054;
    unaff_r5[-2] = unaff_r8;
    unaff_r5[-3] = unaff_r6;
    unaff_r5[-4] = param_4;
    unaff_r5[-5] = param_3;
    *unaff_r5 = &DAT_0805a134;
    unaff_r5[-1] = register0x00000054;
    unaff_r5[-2] = unaff_r8;
    unaff_r5[-3] = unaff_r6;
    unaff_r5[-4] = unaff_r5;
    unaff_r5[-5] = param_3;
    *unaff_r5 = 0x805a138;
    unaff_r5[-1] = register0x00000054;
    unaff_r5[-2] = unaff_r8;
    unaff_r5[-3] = unaff_r6;
    unaff_r5[-4] = param_4;
    unaff_r5[-5] = param_3;
  }
  if (in_OV) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

