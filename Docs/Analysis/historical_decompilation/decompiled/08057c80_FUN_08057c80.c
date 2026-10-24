
undefined4 FUN_08057c80(int param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 unaff_lr;
  
  iVar3 = DAT_08057cc8;
  iVar12 = param_1 * 0x2c;
  if (*(int *)(iVar12 + DAT_08057cc8 + 0x20) == 0) {
    uVar17 = (uint)((*(uint *)(*DAT_08057d64 + 0x38) &
                    1 << (*(uint *)(iVar12 + DAT_08057cc8 + 0x1c) & 0xff)) != 0);
  }
  else {
    uVar17 = *(uint *)(iVar12 + DAT_08057cc8 + 0x1c);
    iVar12 = FUN_0800c780();
    if (iVar12 == 0) {
      iVar12 = *DAT_08057ce8 + DAT_08057cec;
    }
    else {
      iVar12 = *DAT_08057ccc + DAT_08057cd0;
    }
    uVar17 = (int)(uint)*(byte *)(iVar12 + (uVar17 >> 3)) >> (uVar17 & 7) & 1;
  }
  iVar12 = DAT_08057d68;
  if (uVar17 != 0) {
    FUN_08028b3c(*(int *)(param_1 * 0x2c + iVar3 + 0x28) + 5,DAT_0805816c,DAT_0805816c,0);
    return unaff_lr;
  }
  iVar14 = param_1 * 0x2c;
  iVar3 = DAT_08057d68 + 0xc;
  puVar4 = (uint *)(DAT_08057d68 + 0x14 + iVar14);
  iVar5 = DAT_08057d68 + 0x24;
  do {
    uVar17 = *(uint *)(iVar12 + 8 + iVar14) >> 1;
    uVar18 = *(uint *)(iVar3 + iVar14) >> 1;
    do {
      sVar2 = 1;
      do {
        FUN_080003f0();
        iVar6 = FUN_080021a8();
        if (iVar6 != 0) break;
        sVar2 = sVar2 + -1;
      } while (sVar2 != 0);
      iVar6 = FUN_080020f4();
      uVar15 = *(int *)(iVar6 * 0x154 + DAT_08057de8) >> 8;
      iVar6 = FUN_080020f4();
      uVar13 = *(int *)(iVar6 * 0x154 + DAT_08057dec) >> 8;
      iVar6 = *(int *)(param_1 * 0x2c + DAT_08057df0);
    } while ((((iVar6 - uVar17 <= uVar15) && (uVar15 <= iVar6 + uVar17)) &&
             (iVar6 = *(int *)(param_1 * 0x2c + DAT_08057df0 + 4), iVar6 - uVar18 <= uVar13)) &&
            (uVar13 <= iVar6 + uVar18));
    do {
      sVar2 = 1;
      do {
        FUN_080003f0();
        iVar6 = FUN_080021a8();
        if (iVar6 != 0) break;
        sVar2 = sVar2 + -1;
      } while (sVar2 != 0);
      iVar6 = FUN_080020f4();
      uVar15 = *(int *)(iVar6 * 0x154 + DAT_08057ea0) >> 8;
      iVar7 = FUN_080020f4();
      iVar6 = DAT_08057ea8;
      uVar13 = *(int *)(iVar7 * 0x154 + DAT_08057ea4) >> 8;
      iVar7 = param_1 * 0x2c;
    } while (((uVar15 < *(int *)(iVar7 + DAT_08057ea8) - uVar17) ||
             (*(int *)(iVar7 + DAT_08057ea8) + uVar17 < uVar15)) ||
            ((iVar9 = *(int *)(iVar7 + DAT_08057ea8 + 4), uVar13 < iVar9 - uVar18 ||
             (iVar9 + uVar18 < uVar13))));
    iVar9 = FUN_0800c61c();
    if (iVar9 == 1) {
      return unaff_lr;
    }
    if (*(int *)(iVar7 + iVar6 + 0x20) == 0) {
      uVar17 = (uint)((*(uint *)(*DAT_08057f4c + 0x38) &
                      1 << (*(uint *)(iVar7 + iVar6 + 0x1c) & 0xff)) != 0);
    }
    else {
      uVar17 = *(uint *)(iVar7 + iVar6 + 0x1c);
      iVar6 = FUN_0800c780();
      if (iVar6 == 0) {
        iVar6 = *DAT_08057ec8 + DAT_08057ecc;
      }
      else {
        iVar6 = *DAT_08057eac + DAT_08057eb0;
      }
      uVar17 = (int)(uint)*(byte *)(iVar6 + (uVar17 >> 3)) >> (uVar17 & 7) & 1;
    }
    if (uVar17 != 0) {
      return unaff_lr;
    }
    uVar18 = 0;
    uVar17 = 0;
    puVar10 = (ushort *)(*DAT_08057f50 + 0x158);
    do {
      if (((uint)*puVar10 == *(uint *)(iVar14 + iVar12 + 0x10)) && ((uint)puVar10[1] == *puVar4)) {
        uVar18 = uVar18 + 1;
      }
      puVar10 = puVar10 + 8;
      uVar17 = uVar17 + 1;
    } while (uVar17 < 0x19);
    if (*(uint *)(iVar12 + 0x18 + iVar14) <= uVar18) break;
    if ((*DAT_08058138 & 0x20) == 0) {
      FUN_080067e8(0x61);
    }
    iVar6 = FUN_080020f4();
    *(undefined2 *)(iVar6 * 0x154 + DAT_0805813c + 0x126) = 6;
  } while( true );
  uVar17 = FUN_080020f4();
  FUN_0806870c(DAT_08057f54,uVar17);
  piVar1 = DAT_08057f4c;
  do {
    sVar2 = 1;
    do {
      FUN_080003f0();
      iVar3 = FUN_080021a8();
      if (iVar3 != 0) break;
      sVar2 = sVar2 + -1;
    } while (sVar2 != 0);
    iVar3 = FUN_0800c780();
    if (iVar3 == 0) {
      pbVar8 = (byte *)(*piVar1 + DAT_08057fd4);
    }
    else {
      pbVar8 = (byte *)(*piVar1 + DAT_08057f80);
    }
  } while (*pbVar8 < 8);
  if ((*pbVar8 & 3) == uVar17) {
    param_1 = param_1 * 0x2c;
    if (*(int *)(param_1 + DAT_08057fdc + 0x20) == 0) {
      uVar17 = (uint)((*(uint *)(*DAT_08057fd8 + 0x38) &
                      1 << (*(uint *)(param_1 + DAT_08057fdc + 0x1c) & 0xff)) != 0);
    }
    else {
      uVar17 = *(uint *)(param_1 + DAT_08057fdc + 0x1c);
      iVar3 = FUN_0800c780();
      if (iVar3 == 0) {
        iVar3 = *DAT_08057ff8 + DAT_08057ffc;
      }
      else {
        iVar3 = *DAT_08057fd8 + DAT_08057fe0;
      }
      uVar17 = (int)(uint)*(byte *)(iVar3 + (uVar17 >> 3)) >> (uVar17 & 7) & 1;
    }
    if (uVar17 == 0) {
      FUN_0806870c(DAT_080580d0,0);
      iVar3 = FUN_080020f4();
      *(undefined2 *)(iVar3 * 0x154 + DAT_080580d4 + 0x126) = 5;
      piVar1 = DAT_080580d8;
      uVar13 = *(uint *)(iVar12 + 0x10 + iVar14);
      uVar18 = *puVar4;
      iVar3 = *(int *)(iVar12 + 0x18 + iVar14);
      uVar17 = 0;
      do {
        iVar6 = *piVar1 + uVar17 * 0x10;
        puVar10 = (ushort *)(iVar6 + 0x158);
        if ((*puVar10 == uVar13) && (puVar11 = (ushort *)(iVar6 + 0x15a), *puVar11 == uVar18)) {
          iVar3 = iVar3 + -1;
          *puVar10 = 0;
          *puVar11 = 0;
          if (iVar3 == 0) break;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < 0x19);
      uVar16 = *(undefined4 *)(iVar12 + 0x1c + iVar14);
      if (*(int *)(iVar12 + 0x20 + iVar14) == 0) {
        FUN_0806870c(DAT_08058100,uVar16);
      }
      else {
        FUN_0806870c(DAT_080580dc,uVar16);
      }
      FUN_08068ebc(DAT_08058104,*(int *)(iVar12 + 0x28 + iVar14) + 5,*(undefined4 *)(iVar5 + iVar14)
                  );
    }
    else {
      iVar3 = FUN_0800c780();
      if (iVar3 == 0) {
        *(undefined1 *)(*DAT_08058038 + DAT_0805803c) = 0;
      }
      else {
        *(undefined1 *)(*DAT_08057d00 + DAT_08057d04) = 0;
      }
    }
  }
  return unaff_lr;
}

