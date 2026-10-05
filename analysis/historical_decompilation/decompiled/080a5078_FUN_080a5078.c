
undefined4 FUN_080a5078(void)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 unaff_lr;
  
  iVar4 = FUN_080020f4();
  iVar8 = DAT_080a529c;
  piVar1 = DAT_080a5298;
  uVar10 = *(undefined4 *)(*DAT_080a5298 + 0x14);
  iVar5 = DAT_080a529c + 0x94;
  uVar6 = *(undefined4 *)(iVar4 * 0x154 + iVar5);
  iVar4 = FUN_080020f4();
  iVar11 = (int)(short)((short)((uint)uVar10 >> 8) - (short)((uint)uVar6 >> 8));
  iVar4 = ((*(int *)(*piVar1 + 0x18) >> 8) - (*(int *)(iVar4 * 0x154 + iVar8 + 0x98) >> 8)) *
          0x10000 >> 0x10;
  uVar2 = FUN_080b9a9c(iVar11 * iVar11 + iVar4 * iVar4);
  if ((((((uVar2 < 0x28) && (iVar4 = FUN_0800c748(), iVar4 == 0)) &&
        (iVar4 = FUN_0800c6dc(), iVar4 == 0)) &&
       ((iVar4 = FUN_0800c61c(), iVar4 == 0 && (*(short *)(*piVar1 + 0xc) != 0xb)))) &&
      ((iVar4 = FUN_080020f4(), (*(uint *)(iVar4 * 0x154 + iVar8 + 0x38) & 0x2000) == 0 &&
       ((iVar4 = FUN_080020f4(), *(char *)(iVar4 * 0x154 + iVar8 + 0x70) != '\0' &&
        (iVar4 = FUN_080020f4(), *(short *)(iVar4 * 0x154 + iVar8 + 0x26) != 0xe)))))) &&
     ((iVar4 = FUN_080020f4(), *(short *)(iVar4 * 0x154 + iVar8 + 0x26) != 0xb &&
      (iVar4 = FUN_080020f4(), *(short *)(iVar4 * 0x154 + iVar8 + 0x26) != 0xc)))) {
    iVar4 = FUN_080020f4();
    if (*(int *)((iVar4 * 0x55 + (uint)*(ushort *)*piVar1) * 4 + iVar8 + 0xec) !=
        *(int *)((ushort *)*piVar1 + 0x28)) {
      iVar4 = FUN_080020f4();
      *(undefined2 *)(iVar4 * 0x154 + iVar8 + 0x26) = 10;
      iVar4 = FUN_080020f4();
      *(short *)(iVar4 * 0x154 + iVar8 + 0xb8) = (short)DAT_080a52a0;
      iVar4 = FUN_080020f4();
      iVar12 = *piVar1;
      iVar11 = FUN_080020f4();
      sVar3 = FUN_0801eb4c(iVar12,iVar11 * 0x154 + iVar8);
      psVar9 = (short *)(iVar4 * 0x154 + iVar8 + 0x90);
      *psVar9 = sVar3 + *psVar9;
      iVar4 = FUN_080020f4();
      *(undefined4 *)((iVar4 * 0x55 + (uint)*(ushort *)*piVar1) * 4 + iVar8 + 0xec) =
           *(undefined4 *)((ushort *)*piVar1 + 0x28);
      iVar4 = FUN_080020f4();
      uVar10 = *(undefined4 *)(iVar4 * 0x154 + iVar5);
      uVar6 = *(undefined4 *)(*piVar1 + 0x14);
      iVar4 = FUN_080020f4();
      uVar7 = FUN_080b9a80((int)(short)((short)((uint)uVar10 >> 8) - (short)((uint)uVar6 >> 8)),
                           ((*(int *)(iVar4 * 0x154 + iVar8 + 0x98) >> 8) -
                           (*(int *)(*piVar1 + 0x18) >> 8)) * 0x10000 >> 0x10);
      uVar13 = (uVar7 & 0xffff) >> 0xd;
      if (0x80000000 < uVar7 * 0x80000) {
        if (uVar13 < 7) {
          uVar13 = uVar13 + 1;
        }
        else {
          uVar13 = 0;
        }
      }
      if (uVar13 == 0) {
        iVar8 = FUN_080020f4();
        psVar9 = (short *)(iVar8 * 0x154 + DAT_080a52e4 + 0xd2);
        sVar3 = 6;
      }
      else if (uVar13 == 1) {
        iVar8 = FUN_080020f4();
        psVar9 = (short *)(iVar8 * 0x154 + DAT_080a5364 + 0xd2);
        sVar3 = 7;
      }
      else {
        iVar8 = FUN_080020f4();
        sVar3 = (short)uVar13 + -2;
        psVar9 = (short *)(iVar8 * 0x154 + DAT_080a52c8 + 0xd2);
      }
      *psVar9 = sVar3;
      iVar4 = FUN_080020f4();
      iVar8 = DAT_080a5364;
      *(undefined2 *)(iVar4 * 0x154 + DAT_080a5364 + 0xd4) = 0x400;
      iVar4 = FUN_080020f4();
      *(undefined2 *)(iVar4 * 0x154 + iVar8 + 0xd0) = 0x10;
    }
  }
  iVar8 = DAT_080a5364;
  iVar4 = FUN_080020f4();
  if (*(short *)(iVar4 * 0x154 + iVar8 + 0xd0) == 0) {
    *(int *)(*DAT_080a5368 + 0x50) = *(int *)(*DAT_080a5368 + 0x50) + 1;
  }
  return unaff_lr;
}

