
undefined8 FUN_0809da78(ushort *param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 unaff_lr;
  
  iVar9 = DAT_0809db14;
  uVar8 = *(undefined4 *)(param_1 + 10);
  uVar10 = *(undefined4 *)(param_1 + 0xc);
  iVar3 = FUN_080020f4();
  uVar1 = **(ushort **)(iVar3 * 0x154 + iVar9 + 0x150);
  iVar3 = FUN_080020f4();
  uVar11 = 0;
  iVar7 = (int)(((uint)(uVar1 >> 4) - (int)(short)((uint)uVar8 >> 8)) * 0x10000) >> 0x10;
  iVar9 = (int)(((*(ushort *)(*(int *)(iVar3 * 0x154 + iVar9 + 0x150) + 2) & 0xfff) -
                (int)(short)((uint)uVar10 >> 8)) * 0x10000) >> 0x10;
  uVar1 = FUN_080b9a9c(iVar7 * iVar7 + iVar9 * iVar9);
  if (uVar1 < 0x30) {
    uVar4 = FUN_080b9a80(iVar7,iVar9);
    uVar6 = (uVar4 & 0xffff) >> 0xd;
    if (0x80000000 < uVar4 * 0x80000) {
      if (uVar6 < 7) {
        uVar6 = uVar6 + 1;
      }
      else {
        uVar6 = 0;
      }
    }
    uVar1 = param_1[4];
    if (((((((uVar1 == 0) && (uVar6 == 2)) || ((uVar1 == 1 && (uVar6 == 3)))) ||
          (((uVar1 == 2 && (uVar6 == 4)) || ((uVar1 == 3 && (uVar6 == 5)))))) ||
         ((((uVar1 == 4 && (uVar6 == 6)) || ((uVar1 == 5 && (uVar6 == 7)))) ||
          ((uVar1 == 6 && (uVar6 == 0)))))) || ((uVar1 == 7 && (uVar6 == 1)))) &&
       ((((((iVar9 = FUN_0800c748(), iVar9 == 0 && (iVar9 = FUN_0800c6dc(), iVar9 == 0)) &&
           (iVar9 = FUN_0800c61c(), iVar9 == 0)) &&
          ((param_1[6] != 0xb &&
           (iVar3 = FUN_080020f4(), iVar9 = DAT_0809dcac,
           (*(uint *)(iVar3 * 0x154 + DAT_0809dcac + 0x38) & 0x2000) == 0)))) &&
         ((iVar3 = FUN_080020f4(), *(char *)(iVar3 * 0x154 + iVar9 + 0x70) != '\0' &&
          ((iVar3 = FUN_080020f4(), *(short *)(iVar3 * 0x154 + iVar9 + 0x26) != 0xe &&
           (iVar3 = FUN_080020f4(), *(short *)(iVar3 * 0x154 + iVar9 + 0x26) != 0xb)))))) &&
        (iVar3 = FUN_080020f4(), *(short *)(iVar3 * 0x154 + iVar9 + 0x26) != 0xc)))) {
      iVar3 = FUN_080020f4();
      if (*(int *)((iVar3 * 0x55 + (uint)*param_1) * 4 + iVar9 + 0xec) != *(int *)(param_1 + 0x28))
      {
        iVar3 = FUN_080020f4();
        *(undefined2 *)(iVar3 * 0x154 + iVar9 + 0x26) = 10;
        iVar3 = FUN_080020f4();
        *(short *)(iVar3 * 0x154 + iVar9 + 0xb8) = (short)DAT_0809dcb0;
        iVar3 = FUN_080020f4();
        iVar7 = FUN_080020f4();
        sVar2 = FUN_0801eb4c(param_1,iVar7 * 0x154 + iVar9);
        psVar5 = (short *)(iVar3 * 0x154 + iVar9 + 0x90);
        *psVar5 = sVar2 + *psVar5;
        iVar3 = FUN_080020f4();
        iVar7 = *(int *)(param_1 + 0x28);
        *(int *)((iVar3 * 0x55 + (uint)*param_1) * 4 + iVar9 + 0xec) = iVar7;
        *(int *)(param_1 + 0x28) = iVar7 + 1;
        uVar11 = 1;
      }
    }
  }
  return CONCAT44(unaff_lr,uVar11);
}

