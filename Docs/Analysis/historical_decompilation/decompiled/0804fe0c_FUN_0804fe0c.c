
undefined4 FUN_0804fe0c(void)

{
  byte bVar1;
  undefined4 uVar2;
  uint *puVar3;
  short sVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int unaff_r7;
  undefined4 unaff_lr;
  
  piVar8 = DAT_0804fe30;
  if ((*(uint *)(*DAT_0804fe30 + 0x38) & 4) == 0) {
    iVar7 = FUN_0800c780();
    if (iVar7 == 0) {
      pbVar5 = (byte *)(*piVar8 + DAT_0804fe58);
    }
    else {
      pbVar5 = (byte *)(*piVar8 + DAT_0804fe34);
    }
    bVar1 = *pbVar5;
    iVar7 = FUN_0800c780();
    if (iVar7 == 0) {
      pbVar5 = (byte *)(*DAT_0804ff2c + DAT_0804ff30);
    }
    else {
      pbVar5 = (byte *)(*DAT_0804fe5c + DAT_0804fe60);
    }
    if ((((int)(uint)*pbVar5 >> 2 & 1U) == 0) && (((int)(uint)bVar1 >> 1 & 1U) != 0)) {
      FUN_08028b3c(1,0x80,0x50,0);
      puVar3 = DAT_0804ff38;
      uVar2 = DAT_0804ff34;
      uVar6 = *DAT_0804ff38;
      while ((uVar6 & 1) == 0) {
        FUN_080003f0();
        uVar6 = *puVar3;
      }
      iVar7 = *DAT_0804ff3c;
      *(undefined4 *)(iVar7 + 0x38) = uVar2;
      *(undefined4 *)(iVar7 + 0x3c) = 1;
      *(undefined4 *)(iVar7 + 0x30) = 0;
      *(undefined4 *)(iVar7 + 0x34) = 0;
      unaff_r7 = FUN_08028a50(DAT_0804ff44,0x80,0x50);
      piVar8 = (int *)(*DAT_0804ff2c + DAT_0804ff48);
      uVar6 = 0;
      do {
        if (*piVar8 == unaff_r7) goto LAB_0804feee;
        uVar6 = uVar6 + 1;
        piVar8 = piVar8 + 0x1c;
      } while (uVar6 < 0xf);
      FUN_080003f0();
      piVar8 = (int *)0x0;
LAB_0804feee:
      if (piVar8 != (int *)0x0) {
        *(undefined2 *)(piVar8 + 6) = 8;
        *(undefined2 *)((int)piVar8 + 0x1a) = 4;
        piVar8[0xf] = piVar8[0xf] | 0x10;
      }
      iVar7 = DAT_0804ff4c;
      piVar8 = (int *)(*DAT_0804ff2c + DAT_0804ff48);
      uVar6 = 0;
      do {
        if (*piVar8 == unaff_r7) goto LAB_0804ff22;
        uVar6 = uVar6 + 1;
        piVar8 = piVar8 + 0x1c;
      } while (uVar6 < 0xf);
      FUN_080003f0();
      piVar8 = (int *)0x0;
LAB_0804ff22:
      if (piVar8 != (int *)0x0) {
        piVar8[0x11] = iVar7;
      }
    }
    else {
      FUN_08028b3c(1,DAT_0804ff80,DAT_0804ff80,0);
      FUN_0806870c(DAT_0804ff84,2);
    }
    iVar7 = FUN_0800c5e8();
    piVar8 = DAT_0804ffb8;
    if (iVar7 == 0) {
      iVar7 = FUN_0801a720();
      if (iVar7 == 1) {
        FUN_0801a74c(6);
      }
      else if (iVar7 < 2) {
        if (iVar7 == 0) {
          FUN_08058b6c();
        }
      }
      else if (iVar7 == 2) {
        FUN_0801a78c(6);
      }
      while (iVar7 = FUN_0801a6dc(), piVar8 = DAT_0804ffb8, iVar7 == 0) {
        FUN_080003f0();
      }
    }
    do {
      sVar4 = 1;
      do {
        FUN_080003f0();
        iVar7 = FUN_080021a8();
        if (iVar7 != 0) break;
        sVar4 = sVar4 + -1;
      } while (sVar4 != 0);
      iVar7 = FUN_0800c780();
      if (iVar7 == 0) {
        pbVar5 = (byte *)(*piVar8 + DAT_08050020);
      }
      else {
        pbVar5 = (byte *)(*piVar8 + DAT_0804ffe4);
      }
    } while (((int)(uint)*pbVar5 >> 2 & 1U) == 0);
    piVar8 = (int *)(*DAT_08050024 + DAT_08050028);
    uVar6 = 0;
    do {
      if (*piVar8 == unaff_r7) goto LAB_08050016;
      uVar6 = uVar6 + 1;
      piVar8 = piVar8 + 0x1c;
    } while (uVar6 < 0xf);
    FUN_080003f0();
    piVar8 = (int *)0x0;
LAB_08050016:
    if (piVar8 != (int *)0x0) {
      *(undefined2 *)((int)piVar8 + 0x36) = 4;
    }
  }
  else {
    iVar7 = FUN_0800c5e8();
    if (iVar7 == 0) {
      iVar7 = FUN_0801a720();
      if (iVar7 == 1) {
        FUN_0801a74c(6);
      }
      else if (iVar7 < 2) {
        if (iVar7 == 0) {
          FUN_08058b6c();
        }
      }
      else if (iVar7 == 2) {
        FUN_0801a78c(6);
      }
      while (iVar7 = FUN_0801a6dc(), iVar7 == 0) {
        FUN_080003f0();
      }
    }
  }
  return unaff_lr;
}

