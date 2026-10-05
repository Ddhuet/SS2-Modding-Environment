
/* WARNING: Control flow encountered bad instruction data */

void FUN_0801932a(void)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar4;
  uint extraout_r3;
  uint extraout_r3_00;
  uint uVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  uint unaff_r8;
  undefined4 *puVar6;
  undefined4 *unaff_r9;
  int unaff_r10;
  int iVar7;
  undefined4 unaff_r11;
  uint extraout_r12;
  uint extraout_r12_00;
  uint uVar8;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  undefined4 in_cr8;
  undefined8 uVar9;
  
  uVar9 = func_0x09f15332();
  uVar4 = extraout_r2;
  uVar5 = extraout_r3;
  uVar8 = extraout_r12;
  if (!(bool)in_CY || (bool)in_ZR) {
    uVar9 = func_0x09521b36();
    uVar4 = extraout_r2_00;
    uVar5 = extraout_r3_00;
    uVar8 = extraout_r12_00;
  }
  puVar3 = (undefined4 *)((ulonglong)uVar9 >> 0x20);
  puVar1 = (uint *)uVar9;
  puVar2 = puVar1;
  if ((bool)in_ZR) {
    puVar2 = puVar1 + -6;
    *puVar1 = unaff_r8;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    uVar4 = uVar8 & (int)puVar2 << 0x10;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *puVar3 = 0x8019342;
    puVar3[-1] = uVar8;
    puVar3[-2] = unaff_r11;
    puVar3[-3] = unaff_r10;
    puVar3[-4] = unaff_r6;
    puVar3[-5] = unaff_r4;
    puVar3[-6] = uVar5;
    puVar3[-7] = puVar2;
    puVar3 = puVar3 + -8;
  }
  if ((bool)in_NG) {
    uVar4 = unaff_r8;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    uVar4 = uVar5 & (int)puVar2 << 0x10;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    unaff_r9 = (undefined4 *)(uVar4 & (int)uVar5 >> (unaff_r8 & 0xff));
  }
  puVar6 = (undefined4 *)(uVar4 & unaff_r10 << ((uint)puVar2 & 0xff));
  uVar4 = uVar5;
  if (!(bool)in_CY || (bool)in_ZR) {
    uVar4 = *(uint *)(uVar5 - 0xc);
    puVar3 = *(undefined4 **)(uVar5 - 0x14);
  }
  iVar7 = unaff_r10;
  if ((bool)in_OV) {
    iVar7 = unaff_r10 + 0x20;
    coprocessor_loadlong(0,in_cr8,unaff_r10);
  }
  if ((bool)in_CY) {
    unaff_r9 = (undefined4 *)0xa241;
    *puVar2 = 0xa241;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *puVar6 = 0x8019366;
    puVar6[-1] = uVar8;
    puVar6[-2] = iVar7;
    puVar6[-3] = unaff_r6;
    puVar6[-4] = uVar4;
    puVar6[-5] = puVar3;
  }
  if ((bool)in_ZR) {
    *unaff_r9 = puVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

