
/* WARNING: Control flow encountered bad instruction data */

void FUN_08006640(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *extraout_r2;
  undefined4 *extraout_r3;
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  undefined4 *puVar3;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  bool in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 uVar4;
  
  if (in_NG) {
    *param_3 = 0x8006648;
    param_3[-1] = register0x00000054;
    param_3[-2] = in_r12;
    param_3[-3] = unaff_r10;
    param_3[-4] = unaff_r8;
  }
  uVar4 = func_0x06fc2914();
  puVar2 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  if (in_NG) {
    *(undefined4 *)(iVar1 + (int)puVar2 * -0x1000000) = unaff_r11;
  }
  if ((bool)in_ZR) {
    in_CY = CARRY4((uint)extraout_r3,iVar1 * 0x10000);
  }
  puVar3 = unaff_r9;
  if ((bool)in_ZR && extraout_r3 + iVar1 * 0x4000 == (undefined4 *)0x0) {
    puVar3 = unaff_r9 + -0x140;
    *unaff_r9 = unaff_r11;
  }
  if ((bool)in_CY) {
    *puVar2 = unaff_r11;
    puVar2[-1] = unaff_r10;
    puVar2[-2] = extraout_r3;
    puVar2[-3] = puVar2;
    *puVar2 = 0x8006660;
    puVar2[-1] = 0x8006648;
    puVar2[-2] = extraout_r12;
    puVar2[-3] = extraout_r3;
    puVar2[-4] = puVar2;
    *extraout_r2 = 0x8006664;
    extraout_r2[-1] = 0x8006648;
    extraout_r2[-2] = extraout_r12;
    extraout_r2[-3] = puVar3;
    extraout_r2[-4] = unaff_r8;
    extraout_r2[-5] = extraout_r2;
    *extraout_r3 = 0x8006668;
    extraout_r3[-1] = 0x8006648;
    extraout_r3[-2] = extraout_r12;
    extraout_r3[-3] = extraout_r3;
    extraout_r3[-4] = puVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

