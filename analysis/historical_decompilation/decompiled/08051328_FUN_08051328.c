
undefined4 FUN_08051328(void)

{
  short sVar1;
  uint *puVar2;
  short sVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 unaff_lr;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  iVar4 = FUN_0800c780();
  if (iVar4 == 0) {
    pbVar5 = (byte *)(*DAT_080513a0 + 0x1b8);
  }
  else {
    pbVar5 = (byte *)(*DAT_0805134c + 0x1c4);
  }
  if ((int)(uint)*pbVar5 >> 7 == 0) {
    iVar4 = FUN_080020f4();
    iVar4 = iVar4 * 0x154 + DAT_080513a4;
    *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) | 1;
    FUN_0800ca44();
    iVar4 = FUN_0800c5e8();
    if (iVar4 == 0) {
      iVar4 = FUN_0801a720();
      if (iVar4 == 1) {
        FUN_0801a74c(6);
      }
      else if (iVar4 < 2) {
        if (iVar4 == 0) {
          FUN_08058b6c();
        }
      }
      else if (iVar4 == 2) {
        FUN_0801a78c(6);
      }
      while (iVar4 = FUN_0801a6dc(), iVar4 == 0) {
        FUN_080003f0();
      }
    }
    uVar7 = *(uint *)(*DAT_0805140c + 0x38);
    if ((uVar7 & 1) == 0) {
      *(uint *)(*DAT_0805140c + 0x38) = uVar7 | 1;
      *DAT_08051410 = 0xc4;
      if ((*DAT_08051414 & 0x20) == 0) {
        FUN_08006794(0xc4);
      }
      sVar3 = 0x1e;
      do {
        FUN_080003f0();
        iVar4 = FUN_080021a8();
        if (iVar4 != 0) break;
        sVar3 = sVar3 + -1;
      } while (sVar3 != 0);
      sVar3 = *(short *)(DAT_08051484 + 0x80);
      sVar1 = *(short *)(DAT_08051484 + 0x82);
      iVar4 = 0;
      do {
        FUN_08066020(local_30,(int)sVar3,0xc0,iVar4);
        FUN_08066020(local_2c,(int)sVar1,0x28,iVar4);
        FUN_0800b4e8((int)local_30._0_2_,(int)local_2c._0_2_);
        FUN_080003f0();
        iVar4 = iVar4 + 0x11;
      } while (iVar4 < 0x401);
      while (iVar4 = FUN_0805fa94(), iVar4 != 0) {
        FUN_080003f0();
      }
      while (iVar4 = FUN_0805f8b4(), iVar4 != 0) {
        FUN_080003f0();
      }
      uVar6 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_080514bc);
      while (iVar4 = FUN_0805f820(uVar6), iVar4 == 0) {
        FUN_080003f0();
      }
      sVar3 = *(short *)(DAT_0805155c + 0x80);
      sVar1 = *(short *)(DAT_0805155c + 0x82);
      iVar4 = 0;
      do {
        FUN_08066020(local_28,(int)sVar3,0,iVar4);
        FUN_08066020(local_24,(int)sVar1,0,iVar4);
        FUN_0800b4e8((int)local_28._0_2_,(int)local_24._0_2_);
        FUN_080003f0();
        iVar4 = iVar4 + 0x22;
      } while (iVar4 < 0x401);
      iVar4 = FUN_080020f4();
      iVar4 = iVar4 * 0x154 + DAT_08051560;
      *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) & 0xfffffffe;
      FUN_0800ca58();
      iVar4 = FUN_0800c4ec();
      if (iVar4 == 0) {
        if ((*DAT_08051564 & 0x20) == 0) {
          *DAT_08051568 = 7;
          FUN_08006794();
        }
      }
      else {
        FUN_08059ae4(0);
      }
      puVar2 = DAT_080515a4;
      iVar4 = *DAT_080515a0;
      uVar7 = 0;
      do {
        if (((*puVar2 & 1 << (uVar7 & 0xff)) != 0) && (*(short *)(iVar4 + 0xc) == 0xc)) {
          *(undefined2 *)(iVar4 + 0xc) = 0;
        }
        uVar7 = uVar7 + 1;
        iVar4 = iVar4 + DAT_080515a8;
      } while (uVar7 < 5);
    }
    else {
      iVar4 = FUN_080020f4();
      iVar4 = iVar4 * 0x154 + DAT_080515ec;
      *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) & 0xfffffffe;
      FUN_0800ca58();
      iVar4 = FUN_0800c4ec();
      if (iVar4 == 0) {
        if ((*DAT_080515f0 & 0x20) == 0) {
          *DAT_080515f4 = 7;
          FUN_08006794();
        }
      }
      else {
        FUN_08059ae4(0);
      }
      puVar2 = DAT_08051638;
      iVar4 = *DAT_08051634;
      uVar7 = 0;
      do {
        if (((*puVar2 & 1 << (uVar7 & 0xff)) != 0) && (*(short *)(iVar4 + 0xc) == 0xc)) {
          *(undefined2 *)(iVar4 + 0xc) = 0;
        }
        uVar7 = uVar7 + 1;
        iVar4 = iVar4 + DAT_0805163c;
      } while (uVar7 < 5);
    }
    FUN_08019a4c();
    FUN_0805170c();
  }
  else {
    FUN_08028b3c(1,DAT_08051668,DAT_08051668,0);
    iVar4 = FUN_0800c5e8();
    if (iVar4 == 0) {
      iVar4 = FUN_0801a720();
      if (iVar4 == 1) {
        FUN_0801a74c(6);
      }
      else if (iVar4 < 2) {
        if (iVar4 == 0) {
          FUN_08058b6c();
        }
      }
      else if (iVar4 == 2) {
        FUN_0801a78c(6);
      }
      while (iVar4 = FUN_0801a6dc(), iVar4 == 0) {
        FUN_080003f0();
      }
    }
    iVar4 = FUN_0800c4ec();
    if (iVar4 == 0) {
      if ((*DAT_080516b4 & 0x20) == 0) {
        *DAT_080516b8 = 7;
        FUN_08006794();
      }
    }
    else {
      FUN_08059ae4(0);
    }
    puVar2 = DAT_08051704;
    iVar4 = *DAT_08051700;
    uVar7 = 0;
    do {
      if (((*puVar2 & 1 << (uVar7 & 0xff)) != 0) && (*(short *)(iVar4 + 0xc) == 0xc)) {
        *(undefined2 *)(iVar4 + 0xc) = 0;
      }
      uVar7 = uVar7 + 1;
      iVar4 = iVar4 + DAT_08051708;
    } while (uVar7 < 5);
    FUN_08019a4c();
  }
  return unaff_lr;
}

