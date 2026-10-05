
/* WARNING: Control flow encountered bad instruction data */

void FUN_082550bc(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint extraout_r2;
  undefined4 unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int iVar3;
  undefined4 in_r12;
  undefined4 unaff_lr;
  undefined4 unaff_pc;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr12;
  
  iVar3 = (int)param_1 - (!(bool)in_CY + 0x7c00000);
  if (in_ZR) {
    *unaff_r5 = unaff_r9;
    unaff_r5[-1] = unaff_r8;
    unaff_r5[-2] = unaff_r7;
    unaff_r5[-3] = unaff_r6;
    unaff_r5[-4] = unaff_r5;
    unaff_r5[-5] = unaff_r4;
  }
  coprocessor_moveto(0xf,7,0,unaff_pc,in_cr8,in_cr12);
  if ((bool)in_CY) {
    *(undefined4 *)(param_2 + -4) = 0x82550d0;
    *(undefined4 *)(param_2 + -8) = unaff_lr;
    *(BADSPACEBASE **)(param_2 + -0xc) = register0x00000054;
    *(undefined4 *)(param_2 + -0x10) = in_r12;
    *(int *)(param_2 + -0x14) = iVar3;
    *(undefined4 *)(param_2 + -0x18) = unaff_r10;
    *(undefined4 *)(param_2 + -0x1c) = param_3;
    *(int *)(param_2 + -0x20) = param_2;
    *(undefined1 **)(param_2 + -0x24) = param_1;
  }
  if (in_NG != in_OV) {
    *(int *)param_2 = param_2;
    *(undefined4 *)(param_2 + 4) = param_4;
    *(undefined4 *)(param_2 + 8) = unaff_r4;
    *(undefined4 **)(param_2 + 0xc) = unaff_r5;
    *(undefined4 *)(param_2 + 0x10) = unaff_r9;
    *(undefined4 *)(param_2 + 0x14) = unaff_r10;
    *(int *)(param_2 + 0x18) = iVar3;
  }
  puVar1 = param_1;
  if (in_ZR || in_NG != in_OV) {
    puVar1 = param_1 + -0x4f1;
    *param_1 = (char)unaff_r6;
  }
  uVar2 = func_0x07d09ba4(puVar1);
  if (!in_ZR) {
    in_CY = 1;
    uVar2 = (uint)unaff_r5 & 0xa0000000;
    in_NG = (int)uVar2 < 0;
    in_ZR = uVar2 == 0;
  }
  if (in_ZR) {
    unaff_pc = 0x41ed;
  }
  if (!in_ZR && in_NG == in_OV) {
    in_ZR = uVar2 + 0x50f00825 + (uint)in_CY == 0;
  }
  if (in_ZR) {
    *(undefined4 *)(unaff_r7 - (extraout_r2 >> 5 | extraout_r2 << 0x1b)) = unaff_pc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

