
/* WARNING: Control flow encountered bad instruction data */

void FUN_0807d268(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  uint unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 *unaff_r7;
  undefined4 *puVar1;
  uint unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr15;
  
  if (in_ZR || in_NG != in_OV) {
    unaff_r4 = param_2 & unaff_r8 >> 5;
  }
  coprocessor_function2(0,4,0,in_cr15,in_cr4,in_cr2);
  if (in_CY && !in_ZR) {
    *(BADSPACEBASE **)unaff_r8 = register0x00000054;
    *(undefined4 *)(unaff_r8 - 4) = unaff_r10;
    *(uint *)(unaff_r8 - 8) = unaff_r8;
  }
  if (in_CY) {
    *(BADSPACEBASE **)unaff_r5 = register0x00000054;
    *(undefined4 *)(unaff_r5 + -4) = in_r12;
    *(undefined4 *)(unaff_r5 + -8) = unaff_r11;
    *(uint *)(unaff_r5 + -0xc) = param_2;
  }
  if (!in_ZR) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = unaff_r8;
    param_1[-3] = param_2;
    param_1[-4] = param_1;
  }
  puVar1 = unaff_r7;
  if (in_NG) {
    puVar1 = unaff_r7 + (int)param_1 * 0x4000;
    *unaff_r7 = unaff_r6;
  }
  if (in_ZR) {
    *puVar1 = &PTR_DAT_0807d298;
    puVar1[-1] = unaff_lr;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r9;
    puVar1[-4] = puVar1;
    puVar1[-5] = unaff_r4;
    puVar1[-6] = param_3;
    *puVar1 = &PTR_DAT_0807d29c;
    puVar1[-1] = unaff_lr;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r9;
    puVar1[-4] = puVar1;
    puVar1[-5] = unaff_r5;
    puVar1[-6] = 0x580;
    puVar1[-7] = param_3;
    *puVar1 = &PTR_DAT_0807d2a0;
    puVar1[-1] = unaff_lr;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r9;
    puVar1[-4] = puVar1;
    puVar1[-5] = 0x500;
    puVar1[-6] = unaff_r5;
    puVar1[-7] = unaff_r4;
    puVar1[-8] = param_3;
    *puVar1 = &PTR_DAT_0807d2a4;
    puVar1[-1] = unaff_lr;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r9;
    puVar1[-4] = unaff_r8;
    puVar1[-5] = unaff_r4;
    puVar1[-6] = 0x580;
    *puVar1 = &PTR_DAT_0807d2a8;
    puVar1[-1] = unaff_lr;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r9;
    puVar1[-4] = puVar1;
    puVar1[-5] = 0x500;
    puVar1[-6] = unaff_r4;
    *puVar1 = &DAT_0807d2ac;
    puVar1[-1] = unaff_lr;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r9;
    puVar1[-4] = unaff_r8;
    puVar1[-5] = 0x500;
    *puVar1 = 0x807d2b0;
    puVar1[-1] = unaff_lr;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r9;
    puVar1[-4] = unaff_r8;
    puVar1[-5] = 0x500;
  }
  if (in_OV) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = param_3;
    param_1[-3] = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

