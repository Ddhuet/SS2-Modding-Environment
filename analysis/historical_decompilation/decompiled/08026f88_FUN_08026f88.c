
undefined4 FUN_08026f88(ushort *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint *puVar11;
  undefined2 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ushort *puVar16;
  undefined4 uVar17;
  short *psVar18;
  int *piVar19;
  undefined4 unaff_lr;
  undefined2 local_30;
  ushort local_2e;
  undefined4 local_2c;
  
  while (iVar3 = FUN_0801a6dc(), piVar19 = DAT_08026fc8, iVar3 == 0) {
    FUN_080003f0();
  }
  iVar3 = *(int *)(*DAT_08026fc8 + 0x70);
  iVar4 = FUN_0800c860();
  if ((iVar4 == 0) && (*(int *)(*piVar19 + 0x70) != 4)) {
    iVar4 = FUN_0800c4ec();
    if (iVar4 != 0) {
      while (iVar4 = FUN_08068254(), iVar4 == 0) {
        FUN_080003f0();
      }
      while (iVar4 = FUN_08068244(), iVar4 == 0) {
        FUN_080003f0();
      }
      FUN_08068234();
      FUN_08002298(300);
    }
    iVar4 = FUN_08002204();
    if (iVar4 != 0) {
      FUN_08058ae8(5);
    }
    FUN_08022d78(*(undefined2 *)*DAT_080271cc,0);
  }
  piVar19 = DAT_080271cc;
  if (*(int *)(*DAT_080271cc + 0x40) == 0) {
    *(undefined4 *)(*DAT_080271cc + 0x44) = 0;
  }
  iVar4 = *(int *)(*piVar19 + 0x44);
  if (iVar4 != 0) {
    *(short *)(*piVar19 + 0x22 + (uint)*param_1 * 2) = (short)iVar4;
  }
  puVar16 = param_1 + (*(ushort *)(*piVar19 + 0x22 + (uint)*param_1 * 2) - 1 & 0xffff) * 0x12 + 2;
  FUN_08058450();
  *(ushort *)(*piVar19 + 4) = (ushort)DAT_080271d0 & *(ushort *)(*piVar19 + 4);
  FUN_0800c63c();
  iVar5 = FUN_0800c860();
  iVar4 = DAT_080273b4;
  if (iVar5 == 0) {
    psVar18 = (short *)*piVar19;
    if (*(int *)(psVar18 + 0x38) == 4) {
      *(undefined4 *)(psVar18 + 0x1c) = *(undefined4 *)(psVar18 + 0x4c);
      *(undefined4 *)(psVar18 + 0x1e) = *(undefined4 *)(psVar18 + 0x4c);
      iVar5 = FUN_080020f4();
      iVar4 = DAT_080271d4;
      iVar5 = iVar5 * 0x154 + DAT_080271d4;
      uVar10 = *(undefined4 *)(*piVar19 + 0xa4);
      *(undefined4 *)(iVar5 + 0xac) = *(undefined4 *)(*piVar19 + 0xa0);
      *(undefined4 *)(iVar5 + 0xb0) = uVar10;
      iVar5 = FUN_080020f4();
      iVar7 = FUN_080020f4();
      iVar13 = iVar5 * 0x154 + iVar4;
      iVar5 = iVar7 * 0x154 + iVar4;
      uVar10 = *(undefined4 *)(iVar5 + 0xb0);
      *(undefined4 *)(iVar13 + 0x94) = *(undefined4 *)(iVar5 + 0xac);
      *(undefined4 *)(iVar13 + 0x98) = uVar10;
      iVar5 = FUN_080020f4();
      iVar7 = FUN_080020f4();
      iVar13 = iVar5 * 0x154 + iVar4;
      iVar5 = iVar7 * 0x154 + iVar4;
      uVar10 = *(undefined4 *)(iVar5 + 0xb0);
      *(undefined4 *)(iVar13 + 0x9c) = *(undefined4 *)(iVar5 + 0xac);
      *(undefined4 *)(iVar13 + 0xa0) = uVar10;
      iVar5 = FUN_080020f4();
      *(undefined2 *)(iVar5 * 0x154 + iVar4 + 0xcc) = *(undefined2 *)(*piVar19 + 0x90);
      iVar5 = FUN_080020f4();
      *(undefined2 *)(iVar5 * 0x154 + iVar4 + 0xca) = *(undefined2 *)(*piVar19 + 0x92);
      iVar5 = FUN_080020f4();
      *(undefined2 *)(iVar5 * 0x154 + iVar4 + 0xce) = *(undefined2 *)(*piVar19 + 0x94);
      iVar5 = FUN_080020f4();
      *(undefined2 *)(iVar5 * 0x154 + iVar4 + 0x26) = 0;
      uVar15 = 0;
      iVar5 = 0;
      do {
        iVar7 = FUN_080020f4();
        piVar19 = DAT_080271cc;
        puVar9 = (undefined4 *)(iVar5 + *(int *)(iVar7 * 0x154 + iVar4 + 0x3c));
        puVar6 = (undefined4 *)(*DAT_080271cc + iVar5 + DAT_080271d8);
        uVar10 = puVar6[1];
        uVar17 = puVar6[2];
        *puVar9 = *puVar6;
        puVar9[1] = uVar10;
        puVar9[2] = uVar17;
        uVar10 = puVar6[4];
        uVar17 = puVar6[5];
        puVar9[3] = puVar6[3];
        puVar9[4] = uVar10;
        puVar9[5] = uVar17;
        uVar10 = puVar6[7];
        uVar17 = puVar6[8];
        puVar9[6] = puVar6[6];
        puVar9[7] = uVar10;
        puVar9[8] = uVar17;
        puVar9[9] = puVar6[9];
        iVar5 = iVar5 + 0x28;
        uVar15 = uVar15 + 1;
      } while (uVar15 < 8);
      uVar10 = FUN_080590dc();
      iVar4 = *piVar19;
      *(undefined4 *)(iVar4 + 0x50) = uVar10;
      *(undefined4 *)(iVar4 + 0x70) = 0;
      *DAT_080271dc = *(undefined4 *)(iVar4 + 0x9c);
      *(undefined2 *)(iVar4 + 4) = *(undefined2 *)(iVar4 + 0x148);
      *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(iVar4 + 0x98);
      FUN_0800c734();
      FUN_0800c7a4();
    }
    else {
      if ((*psVar18 == 0xd) || (*(int *)(psVar18 + 0x38) != 3)) {
        FUN_0805dbe8();
      }
      if (*param_1 == 7) {
        *(ushort *)(*DAT_08027204 + 4) = *(ushort *)(*DAT_08027204 + 4) | 8;
        while (iVar4 = FUN_08068bf4(), iVar4 == 0) {
          FUN_080003f0();
        }
      }
      else {
        *(ushort *)(*DAT_08027238 + 4) = (ushort)DAT_0802723c & *(ushort *)(*DAT_08027238 + 4);
      }
      iVar4 = FUN_0800caa4();
      if (iVar4 == 0) {
        iVar4 = *DAT_08027238;
        *(undefined4 *)(iVar4 + 0x38) = 0;
        *(undefined4 *)(iVar4 + 0x3c) = 0;
      }
      else {
        FUN_0800ca90();
      }
      FUN_0800ca90();
      iVar5 = FUN_080020f4();
      iVar4 = DAT_080272f4;
      *(uint *)(iVar5 * 0x154 + DAT_080272f4 + 0x94) = (uint)*puVar16 << 0xb;
      iVar5 = FUN_080020f4();
      *(uint *)(iVar5 * 0x154 + iVar4 + 0x98) = (uint)puVar16[1] << 0xb;
      iVar5 = FUN_080020f4();
      *(uint *)(iVar5 * 0x154 + iVar4 + 0x9c) = (uint)*puVar16 << 0xb;
      iVar5 = FUN_080020f4();
      *(uint *)(iVar5 * 0x154 + iVar4 + 0xa0) = (uint)puVar16[1] << 0xb;
      iVar5 = FUN_080020f4();
      *(ushort *)(iVar5 * 0x154 + iVar4 + 0x22) = puVar16[2];
    }
    FUN_080585a0(1);
    FUN_08059814();
    if (*(int *)(*DAT_080272f8 + 0x40) == 0) {
      *(undefined4 *)(*DAT_080272f8 + 0x6c) = 0;
    }
    iVar4 = FUN_080020f4();
    *(undefined2 *)(iVar4 * 0x154 + DAT_080272f4 + 0x26) = 0;
  }
  else {
    iVar5 = FUN_080020f4();
    if ((*(int *)(iVar5 * 0x154 + iVar4 + 0xac) == -1) &&
       (iVar5 = FUN_080020f4(), *(int *)(iVar5 * 0x154 + iVar4 + 0xb0) == -1)) {
      iVar5 = FUN_080020f4();
      *(uint *)(iVar5 * 0x154 + iVar4 + 0x94) = (uint)*puVar16 << 0xb;
      iVar5 = FUN_080020f4();
      *(uint *)(iVar5 * 0x154 + iVar4 + 0x98) = (uint)puVar16[1] << 0xb;
      iVar5 = FUN_080020f4();
      *(uint *)(iVar5 * 0x154 + iVar4 + 0x9c) = (uint)*puVar16 << 0xb;
      iVar5 = FUN_080020f4();
      *(uint *)(iVar5 * 0x154 + iVar4 + 0xa0) = (uint)puVar16[1] << 0xb;
      iVar5 = FUN_080020f4();
      *(ushort *)(iVar5 * 0x154 + iVar4 + 0x22) = puVar16[2];
    }
    else {
      iVar5 = FUN_080020f4();
      iVar7 = FUN_080020f4();
      iVar4 = DAT_080274d4;
      iVar13 = iVar5 * 0x154 + DAT_080274d4;
      iVar5 = iVar7 * 0x154 + DAT_080274d4;
      uVar10 = *(undefined4 *)(iVar5 + 0xb0);
      *(undefined4 *)(iVar13 + 0x94) = *(undefined4 *)(iVar5 + 0xac);
      *(undefined4 *)(iVar13 + 0x98) = uVar10;
      iVar5 = FUN_080020f4();
      iVar7 = FUN_080020f4();
      iVar5 = iVar5 * 0x154 + iVar4;
      iVar4 = iVar7 * 0x154 + iVar4;
      uVar10 = *(undefined4 *)(iVar4 + 0xb0);
      *(undefined4 *)(iVar5 + 0x9c) = *(undefined4 *)(iVar4 + 0xac);
      *(undefined4 *)(iVar5 + 0xa0) = uVar10;
    }
    iVar5 = FUN_080020f4();
    iVar4 = DAT_080274d4;
    *(undefined2 *)(iVar5 * 0x154 + DAT_080274d4 + 0x22) = 0;
    iVar5 = FUN_080020f4();
    *(undefined2 *)(iVar5 * 0x154 + iVar4 + 0x26) = 0xc;
    iVar5 = FUN_080020f4();
    *(undefined2 *)(iVar5 * 0x154 + iVar4 + 0x28) = 2;
    FUN_080585a0(0);
  }
  iVar4 = FUN_080020f4();
  puVar11 = (uint *)(iVar4 * 0x154 + DAT_080274d4 + 0x38);
  *puVar11 = *puVar11 & DAT_080274d8;
  FUN_0800b4a8();
  iVar4 = FUN_0800c860();
  uVar15 = DAT_080274e0;
  if ((((iVar4 == 0) && (*(short *)*DAT_080274dc != 0xb)) && (*(short *)*DAT_080274dc != 0xc)) ||
     (puVar6 = DAT_08027500, *(int *)(*DAT_080274dc + 0x70) == 3)) {
    uVar14 = 1;
    do {
      uVar8 = *(ushort *)(*DAT_080274dc + 0x22 + (uint)*param_1 * 2) - 1 & 0xffff;
      if (param_1[uVar8 * 0x12 + uVar14 * 4 + 4] == uVar15) {
        FUN_0802626c(param_1 + uVar8 * 0x12 + uVar14 * 4 + 2);
        FUN_0800c6ec();
      }
      else if (param_1[uVar8 * 0x12 + uVar14 * 4 + 2] != 0) {
        FUN_08025708(param_1 + uVar8 * 0x12 + uVar14 * 4 + 2,uVar14 - 1);
      }
      uVar14 = uVar14 + 1;
      puVar6 = DAT_08027500;
    } while (uVar14 < 4);
  }
  while (iVar4 = FUN_0800942c(*(undefined2 *)*puVar6,*(undefined4 *)((undefined2 *)*puVar6 + 0x20)),
        iVar4 == 0) {
    FUN_080003f0();
  }
  while (iVar4 = FUN_0800b3d4(), iVar4 == 0) {
    FUN_080003f0();
  }
  iVar4 = FUN_0800c860();
  if ((iVar4 == 0) || (*(int *)(*DAT_08027554 + 0x70) == 3)) {
    iVar4 = FUN_0800c710();
    if ((iVar4 == 0) && (*(int *)*DAT_08027554 != DAT_08027558)) {
      FUN_0805aab4(param_1);
    }
    else {
      *(undefined4 *)(*DAT_080275d0 + 0x48) = 0;
    }
  }
  iVar4 = FUN_0800c860();
  if ((iVar4 == 0) || (*(int *)(*DAT_080275d0 + 0x70) == 3)) {
    iVar4 = FUN_0800c710();
    if (((iVar4 == 0) && (*(short *)*DAT_080275d0 != 0xb)) || (0xe < *(ushort *)*DAT_080275d0)) {
      puVar12 = (undefined2 *)*DAT_080275d0;
      puVar12[6] = 0;
      FUN_08023eb0(*puVar12,*(uint *)(puVar12 + 0x20) & 0xffff);
      uVar15 = 0;
      do {
        FUN_080003f0();
        uVar15 = uVar15 + 1;
      } while (uVar15 < 0x78);
    }
    *(undefined4 *)(*DAT_080275d0 + 0x70) = 0;
  }
  iVar4 = FUN_0800c860();
  if ((iVar4 == 0) && (iVar4 = FUN_0800c4ec(), iVar4 != 0)) {
    while (iVar4 = FUN_08068254(), iVar4 == 0) {
      FUN_080003f0();
    }
    while (iVar4 = FUN_08068244(), iVar4 == 0) {
      FUN_080003f0();
    }
    FUN_08068234();
  }
  iVar4 = FUN_08002204();
  if ((((iVar4 != 0) && (iVar3 != 3)) && (iVar3 != 4)) && (iVar3 = FUN_0800c860(), iVar3 == 0)) {
    local_30 = 1;
    psVar18 = *(short **)(*DAT_08027634 + DAT_08027638);
    local_2c = 0;
    sVar1 = *psVar18;
    piVar19 = DAT_08027634;
    piVar2 = DAT_0802777c;
    while (DAT_0802777c = piVar2, sVar1 != 0) {
      if (*psVar18 == 4) {
        uVar15 = 0;
        do {
          puVar16 = (ushort *)(psVar18 + uVar15 * 0x12 + 2);
          uVar14 = 0;
          uVar15 = uVar15 + 1;
          do {
            if (puVar16[2] != 0) {
              local_2e = puVar16[2];
              FUN_08066b04((uint)*puVar16 << 0xb,(uint)puVar16[1] << 0xb,
                           *(uint *)(*DAT_08027680 + 0x40) & 0xffff,&local_30);
            }
            uVar14 = uVar14 + 1;
            puVar16 = puVar16 + 4;
          } while (uVar14 < 4);
          piVar19 = DAT_08027680;
        } while (uVar15 < 8);
      }
      else if (*psVar18 == 5) {
        puVar16 = (ushort *)(psVar18 + (*(ushort *)(*piVar19 + 0x2c) - 1 & 0xffff) * 0x12 + 2);
        uVar15 = 0;
        do {
          if (puVar16[2] != 0) {
            local_2e = puVar16[2];
            FUN_08066b04((uint)*puVar16 << 0xb,(uint)puVar16[1] << 0xb,
                         *(uint *)(*DAT_0802777c + 0x40) & 0xffff,&local_30);
          }
          uVar15 = uVar15 + 1;
          puVar16 = puVar16 + 4;
          piVar19 = piVar2;
        } while (uVar15 < 4);
      }
      psVar18 = psVar18 + 0x92;
      piVar2 = DAT_0802777c;
      sVar1 = *psVar18;
    }
  }
  piVar19 = DAT_0802777c;
  if (*(int *)(*(int *)((ushort *)*DAT_0802777c + 0x20) * 4 + (*(ushort *)*DAT_0802777c - 1) * 100 +
              DAT_08027780) != 0) {
    FUN_080587ec(0);
  }
  FUN_0800c84c();
  FUN_0800ca58();
  iVar3 = *piVar19;
  *(undefined2 *)(iVar3 + 0x10) = 1;
  *(short *)(iVar3 + 2) = (short)*(undefined4 *)(iVar3 + 0x40);
  iVar4 = FUN_080020f4();
  iVar3 = DAT_08027784;
  iVar5 = DAT_08027784 + 0x38;
  puVar11 = (uint *)(iVar4 * 0x154 + iVar5);
  *puVar11 = *puVar11 & 0x2000;
  iVar4 = FUN_080020f4();
  *(short *)(iVar4 * 0x154 + iVar3 + 0x30) = (short)*(undefined4 *)(*piVar19 + 0x40);
  iVar4 = FUN_080020f4();
  if ((*(uint *)(iVar4 * 0x154 + iVar5) & 0x2000) == 0) {
    iVar4 = FUN_080020f4();
    *(undefined1 *)(iVar4 * 0x154 + iVar3 + 0x70) = 1;
  }
  FUN_0801563c();
  FUN_080667ac();
  FUN_080683b0();
  iVar3 = 0;
  for (uVar15 = 0; uVar14 = FUN_08002164(), uVar15 < uVar14; uVar15 = uVar15 + 1) {
    if ((*(byte *)(*(int *)(iVar3 + DAT_080277e0 + 0x150) + 4) & 0x20) == 0) {
      FUN_08065e64(*(undefined2 *)(iVar3 + DAT_080277e0),0x78);
    }
    iVar3 = iVar3 + 0x154;
  }
  iVar3 = FUN_0800c4ec();
  if (iVar3 != 0) {
    FUN_08002298(0x50);
  }
  FUN_08068a20();
  return unaff_lr;
}

