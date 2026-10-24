
/* WARNING: Control flow encountered bad instruction data */

void FUN_0800c9f8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r6;
  undefined4 *unaff_r7;
  int unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int in_r12;
  int unaff_lr;
  int iVar2;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr15;
  
  if (in_NG) {
    *(undefined4 *)(param_3 + -4) = 0x800ca00;
    *(BADSPACEBASE **)(param_3 + -8) = register0x00000054;
    *(int *)(param_3 + -0xc) = in_r12;
    *(undefined4 *)(param_3 + -0x10) = unaff_r10;
    *(int *)(param_3 + -0x14) = unaff_r8;
    *(int *)(param_3 + -0x18) = unaff_r4;
  }
  if (in_OV) {
    unaff_r4 = unaff_r8 - (param_3 * 0x10000 + (uint)!in_CY);
  }
  if (in_ZR) {
    *param_1 = 0x800ca10;
    param_1[-1] = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r11;
    param_1[-4] = 0x520;
    param_1[-5] = param_1;
  }
  piVar1 = param_1 + 0xf3;
  coprocessor_loadlong2(7,in_cr15,param_1);
  if (in_ZR) {
    piVar1 = (int *)((int)(short)piVar1 * (int)(short)piVar1 + param_3);
  }
  iVar2 = unaff_lr + -0x3d0;
  coprocessor_load2(7,in_cr15,iVar2);
  if (in_CY) {
    *piVar1 = iVar2;
    piVar1[-1] = (int)register0x00000054;
    piVar1[-2] = unaff_r9;
    piVar1[-3] = unaff_r5;
  }
  if (!in_NG) {
    coprocessor_store2(7,in_cr15,piVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r7 = 0x800ca24;
  unaff_r7[-1] = iVar2;
  unaff_r7[-2] = in_r12;
  unaff_r7[-3] = unaff_r7;
  unaff_r7[-4] = unaff_r6;
  unaff_r7[-5] = unaff_r5;
  unaff_r7[-6] = unaff_r4;
  unaff_r7[-7] = param_3;
  unaff_r7[-8] = unaff_r5 & in_r12 << 0x18;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

