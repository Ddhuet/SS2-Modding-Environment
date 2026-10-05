
undefined8 FUN_080af048(ushort *param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 unaff_lr;
  
  uVar11 = 0;
  iVar3 = FUN_080020f4();
  iVar6 = DAT_080af274;
  iVar8 = DAT_080af274 + 0x94;
  iVar9 = *(int *)(param_1 + 10);
  iVar3 = *(int *)(iVar3 * 0x154 + iVar8);
  iVar4 = FUN_080020f4();
  iVar9 = (int)(short)((uint)(iVar9 - iVar3) >> 8);
  iVar3 = (*(int *)(param_1 + 0xc) - *(int *)(iVar4 * 0x154 + iVar6 + 0x98)) * 0x100 >> 0x10;
  uVar1 = FUN_080b9a9c(iVar9 * iVar9 + iVar3 * iVar3);
  if (((((uVar1 < 0x10) && (iVar3 = FUN_0800c748(), iVar3 == 0)) &&
       (iVar3 = FUN_0800c61c(), iVar3 == 0)) &&
      (((iVar3 = FUN_0800c6dc(), iVar3 == 0 && (uVar1 = param_1[6], uVar1 != 0xe)) &&
       ((uVar1 != 0xb &&
        ((uVar1 != 10 && (iVar3 = FUN_080020f4(), *(short *)(iVar3 * 0x154 + iVar6 + 0xd0) == 0)))))
       ))) && ((iVar3 = FUN_080020f4(), (*(uint *)(iVar3 * 0x154 + iVar6 + 0x38) & 0x2000) == 0 &&
               ((((iVar3 = FUN_080020f4(), *(char *)(iVar3 * 0x154 + iVar6 + 0x70) != '\0' &&
                  (iVar3 = FUN_080020f4(), *(short *)(iVar3 * 0x154 + iVar6 + 0x26) != 0xe)) &&
                 (iVar3 = FUN_080020f4(), *(short *)(iVar3 * 0x154 + iVar6 + 0x26) != 0xb)) &&
                (iVar3 = FUN_080020f4(), *(short *)(iVar3 * 0x154 + iVar6 + 0x26) != 0xc)))))) {
    iVar3 = FUN_080020f4();
    if (*(int *)((iVar3 * 0x55 + (uint)*param_1) * 4 + iVar6 + 0xec) != *(int *)(param_1 + 0x28)) {
      iVar3 = FUN_080020f4();
      *(undefined2 *)(iVar3 * 0x154 + iVar6 + 0x26) = 10;
      iVar3 = FUN_080020f4();
      *(short *)(iVar3 * 0x154 + iVar6 + 0xb8) = (short)DAT_080af278;
      iVar3 = FUN_080020f4();
      iVar4 = FUN_080020f4();
      sVar2 = FUN_0801eb4c(param_1,iVar4 * 0x154 + iVar6);
      psVar7 = (short *)(iVar3 * 0x154 + iVar6 + 0x90);
      *psVar7 = sVar2 + *psVar7;
      iVar3 = FUN_080020f4();
      iVar4 = *(int *)(param_1 + 0x28);
      *(int *)((iVar3 * 0x55 + (uint)*param_1) * 4 + iVar6 + 0xec) = iVar4;
      *(int *)(param_1 + 0x28) = iVar4 + 1;
      iVar3 = FUN_080020f4();
      iVar8 = *(int *)(iVar3 * 0x154 + iVar8);
      iVar3 = *(int *)(param_1 + 10);
      iVar4 = FUN_080020f4();
      uVar5 = FUN_080b9a80((int)(short)((uint)(iVar8 - iVar3) >> 8),
                           (*(int *)(iVar4 * 0x154 + iVar6 + 0x98) - *(int *)(param_1 + 0xc)) *
                           0x100 >> 0x10);
      uVar10 = (uVar5 & 0xffff) >> 0xd;
      if (0x80000000 < uVar5 * 0x80000) {
        if (uVar10 < 7) {
          uVar10 = uVar10 + 1;
        }
        else {
          uVar10 = 0;
        }
      }
      if (uVar10 == 0) {
        iVar6 = FUN_080020f4();
        psVar7 = (short *)(iVar6 * 0x154 + DAT_080af2bc + 0xd2);
        sVar2 = 6;
      }
      else if (uVar10 == 1) {
        iVar6 = FUN_080020f4();
        psVar7 = (short *)(iVar6 * 0x154 + DAT_080af31c + 0xd2);
        sVar2 = 7;
      }
      else {
        iVar6 = FUN_080020f4();
        sVar2 = (short)uVar10 + -2;
        psVar7 = (short *)(iVar6 * 0x154 + DAT_080af2a0 + 0xd2);
      }
      *psVar7 = sVar2;
      iVar3 = FUN_080020f4();
      iVar6 = DAT_080af31c;
      *(undefined2 *)(iVar3 * 0x154 + DAT_080af31c + 0xd4) = 0x400;
      iVar3 = FUN_080020f4();
      *(undefined2 *)(iVar3 * 0x154 + iVar6 + 0xd0) = 8;
      uVar11 = 1;
    }
  }
  return CONCAT44(unaff_lr,uVar11);
}

