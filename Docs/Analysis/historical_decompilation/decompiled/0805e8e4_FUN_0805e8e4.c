
void FUN_0805e8e4(int param_1)

{
  ushort uVar1;
  short sVar2;
  ushort *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 extraout_r1;
  short *psVar7;
  short *psVar8;
  ushort *puVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined2 auStack_124 [36];
  undefined1 auStack_dc [52];
  short asStack_a8 [10];
  ushort auStack_94 [12];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  ushort *puStack_34;
  uint uStack_30;
  short *psStack_28;
  ushort *puStack_24;
  
  puVar3 = *(ushort **)(param_1 + 0x60);
  uStack_6c = 0;
  iVar10 = 0;
  uStack_68 = 0;
  uStack_44 = 0;
  iVar12 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  psStack_28 = asStack_a8;
  puStack_24 = auStack_94;
  do {
    uStack_70 = 0;
    do {
      *(short *)((int)auStack_124 + uStack_70 * 2 + iVar10) = (short)DAT_0805e954;
      uStack_70 = uStack_70 + 1 & 0xffff;
    } while (uStack_70 < 0x12);
    iVar10 = iVar10 + 0x24;
    iVar12 = iVar12 + 1;
  } while (iVar12 < 2);
  uVar4 = (uint)*puVar3;
  uVar6 = DAT_0805e988;
  if (uVar4 != 0) {
    uVar6 = uVar4 - 1;
  }
  uStack_30 = (uint)puVar3[1];
  uVar13 = FUN_0800c780();
  uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
  uVar14 = CONCAT44(uVar5,DAT_0805e9f4);
  if ((int)uVar13 == 0) {
    if (uVar6 == DAT_0805e9f4) goto LAB_0805ea36;
    uVar5 = DAT_0805e9f8;
    if (0xf < uVar6) {
      if (uVar6 < 0x20) {
        uVar14 = FUN_08065784(auStack_dc,DAT_0805ea1c,0xf,0xffffffff,0);
      }
      else {
        FUN_08065784(auStack_dc,DAT_0805eab0,0xf,0xffffffff,0);
        uVar14 = CONCAT44(extraout_r1,0xffffffe0);
      }
      goto LAB_0805ea36;
    }
  }
  else {
    uVar14 = CONCAT44(uVar5,DAT_0805e988);
    if (uVar6 == DAT_0805e988) goto LAB_0805ea36;
    uVar5 = DAT_0805e98c;
    if (0xf < uVar6) {
      if (uVar6 < 0x20) {
        uVar5 = FUN_08065784(auStack_dc,DAT_0805e9b0,0xf,0xffffffff,0);
        uVar14 = CONCAT44(0xfffffff0,uVar5);
      }
      else {
        uVar14 = FUN_08065784(auStack_dc,DAT_0805e9d0,0xf,0xffffffff,0);
      }
      goto LAB_0805ea36;
    }
  }
  uVar14 = FUN_08065784(auStack_dc,uVar5,0xf,0xffffffff,0);
LAB_0805ea36:
  uStack_7c = FUN_0801e2c0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  sVar2 = FUN_08000498(&uStack_7c,DAT_0805eab4);
  iVar12 = 0;
  *psStack_28 = sVar2;
  sVar2 = FUN_08000498(&uStack_7c,DAT_0805eab8);
  psStack_28[1] = sVar2;
  sVar2 = FUN_08000498(&uStack_7c,DAT_0805eabc);
  psVar7 = psStack_28;
  psStack_28[2] = sVar2;
  sVar2 = FUN_08000498(&uStack_7c,DAT_0805eac0);
  psVar7[3] = sVar2;
  sVar2 = FUN_08000498(&uStack_7c,1000);
  psVar7[4] = sVar2;
  sVar2 = FUN_08000498(&uStack_7c,100);
  psVar7[5] = sVar2;
  sVar2 = FUN_08000498(&uStack_7c,10);
  uVar6 = DAT_0805eb7c;
  psVar7[6] = sVar2;
  psVar7[7] = (short)uStack_7c;
  psVar7[8] = 0;
  iStack_50 = 0;
  iVar10 = 0;
  psVar7 = psStack_28;
  do {
    if ((*psVar7 == 0) && (iStack_50 == 0)) {
      *psVar7 = 0xff;
    }
    else {
      *psVar7 = *psVar7 + 0xef;
      if (iStack_50 == 0) {
        iVar10 = iVar12;
      }
      iStack_50 = 1;
    }
    psVar7 = psVar7 + 1;
    iVar12 = iVar12 + 1;
  } while (iVar12 < 9);
  iVar12 = 0;
  if (iVar10 < 8) {
    psVar8 = psStack_28 + iVar10;
    psVar7 = psStack_28;
    do {
      *psVar7 = *psVar8;
      psVar8 = psVar8 + 1;
      iVar10 = iVar10 + 1;
      psVar7 = psVar7 + 1;
      iVar12 = iVar12 + 1;
    } while (iVar10 < 8);
  }
  psStack_28[iVar12] = (short)DAT_0805eb7c;
  psStack_28[iVar12 + 1] = 0;
  iVar10 = FUN_080020f4();
  puVar3 = puStack_24;
  puStack_34 = DAT_0805eb80 + iVar10 * 0xaa;
  iVar10 = 0;
  puVar9 = puStack_24;
  puVar11 = DAT_0805eb80;
  do {
    uVar1 = *puVar11;
    *puVar9 = uVar1;
    if (uVar1 == uVar6) break;
    puVar11 = puVar11 + 1;
    puVar9 = puVar9 + 1;
    iVar10 = iVar10 + 1;
  } while (iVar10 < 8);
  iVar12 = FUN_08002204();
  if (iVar12 == 0) {
    iVar12 = FUN_08006d98(DAT_0805eb84);
    if (iVar10 < 0xb) {
      puVar3 = (ushort *)(iVar12 + 4);
      puVar9 = puStack_24 + iVar10;
      do {
        uVar1 = *puVar3;
        *puVar9 = uVar1;
        if ((uVar1 & 0x8000) != 0) {
          *puVar9 = (ushort)DAT_0805eb98;
          puVar3 = puStack_24 + iVar10 + 1;
          goto LAB_0805eba2;
        }
        puVar9 = puVar9 + 1;
        iVar10 = iVar10 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar10 < 0xb);
    }
  }
  else {
    puVar3 = puVar3 + iVar10 + 1;
LAB_0805eba2:
    *puVar3 = 0;
  }
  uStack_4c = 0;
  iStack_50 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_64 = 1;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_78 = 0;
  uStack_60 = 1;
  FUN_080659f8();
  uVar6 = *(uint *)(param_1 + 0x74);
  if (7 < uVar6) {
    uVar6 = FUN_0805f60a();
  }
                    /* WARNING: Could not recover jumptable at 0x0805ebde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uVar6 * 4 + DAT_0805ebe0))();
  return;
}

