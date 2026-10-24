
undefined4 FUN_080552c0(void)

{
  byte bVar1;
  short sVar2;
  uint *puVar3;
  short sVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 unaff_lr;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  
  iVar5 = FUN_080020f4();
  iVar5 = iVar5 * 0x154 + DAT_080552fc;
  *(uint *)(iVar5 + 0x38) = *(uint *)(iVar5 + 0x38) | 1;
  FUN_0800ca44();
  iVar5 = FUN_0800c780();
  if (iVar5 == 0) {
    pbVar6 = (byte *)(*DAT_08055328 + DAT_0805532c);
  }
  else {
    pbVar6 = (byte *)(*DAT_08055300 + DAT_08055304);
  }
  bVar1 = *pbVar6;
  iVar5 = FUN_0800c780();
  puVar3 = DAT_080556dc;
  uVar8 = DAT_080556d8;
  if (iVar5 == 0) {
    pbVar6 = (byte *)(*DAT_08055370 + DAT_08055374);
    piVar9 = DAT_08055370;
  }
  else {
    pbVar6 = (byte *)(*DAT_08055328 + DAT_08055330);
    piVar9 = DAT_08055328;
  }
  if (((int)(uint)*pbVar6 >> 5 & 1U) == 0) {
    if (((int)(uint)bVar1 >> 1 & 1U) == 0) {
      uVar7 = *(uint *)(*piVar9 + 0x38);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*piVar9 + 0x38) = uVar7 | 1;
        sVar4 = *(short *)(DAT_080554dc + 0x80);
        sVar2 = *(short *)(DAT_080554dc + 0x82);
        iVar5 = 0;
        local_28 = &local_30;
        local_24 = &local_2c;
        do {
          FUN_08066020(local_38,(int)sVar4,200,iVar5);
          FUN_08066020(local_34,(int)sVar2,0x32,iVar5);
          FUN_0800b4e8((int)local_38._0_2_,(int)local_34._0_2_);
          FUN_080003f0();
          iVar5 = iVar5 + 0x400;
        } while (iVar5 < 0x401);
        sVar4 = 1;
        do {
          FUN_080003f0();
          iVar5 = FUN_080021a8();
          puVar3 = DAT_0805557c;
          uVar8 = DAT_08055578;
          if (iVar5 != 0) break;
          sVar4 = sVar4 + -1;
        } while (sVar4 != 0);
        uVar7 = *DAT_0805557c;
        while ((uVar7 & 1) == 0) {
          FUN_080003f0();
          uVar7 = *puVar3;
        }
        iVar5 = *DAT_08055580;
        *(undefined4 *)(iVar5 + 0x38) = uVar8;
        *(undefined4 *)(iVar5 + 0x3c) = 1;
        *(undefined4 *)(iVar5 + 0x30) = 0;
        *(undefined4 *)(iVar5 + 0x34) = 0;
        uVar8 = DAT_08055588;
        puVar3 = DAT_0805557c;
        uVar7 = *DAT_0805557c;
        while ((uVar7 & 2) == 0) {
          FUN_080003f0();
          uVar7 = *puVar3;
        }
        iVar5 = *DAT_08055580 + DAT_08055584;
        *(undefined4 *)(iVar5 + 0x38) = uVar8;
        *(undefined4 *)(iVar5 + 0x3c) = 2;
        *(undefined4 *)(iVar5 + 0x30) = 0;
        *(undefined4 *)(iVar5 + 0x34) = 0;
        iVar5 = FUN_0800c5e8();
        if (iVar5 == 0) {
          iVar5 = FUN_0801a720();
          if (iVar5 == 1) {
            FUN_0801a74c(6);
          }
          else if (iVar5 < 2) {
            if (iVar5 == 0) {
              FUN_08058b6c();
            }
          }
          else if (iVar5 == 2) {
            FUN_0801a78c(6);
          }
          while (iVar5 = FUN_0801a6dc(), iVar5 == 0) {
            FUN_080003f0();
          }
        }
        while (iVar5 = FUN_0805fa94(), iVar5 != 0) {
          FUN_080003f0();
        }
        while (iVar5 = FUN_0805f8b4(), iVar5 != 0) {
          FUN_080003f0();
        }
        uVar8 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_080555e8);
        while (iVar5 = FUN_0805f820(uVar8), iVar5 == 0) {
          FUN_080003f0();
        }
        sVar4 = *(short *)(DAT_08055650 + 0x80);
        sVar2 = *(short *)(DAT_08055650 + 0x82);
        iVar5 = 0;
        do {
          FUN_08066020(local_28,(int)sVar4,0,iVar5);
          FUN_08066020(local_24,(int)sVar2,0,iVar5);
          FUN_0800b4e8((int)(short)local_30,(int)(short)local_2c);
          FUN_080003f0();
          iVar5 = iVar5 + 0x19;
        } while (iVar5 < 0x401);
      }
      else {
        uVar7 = *DAT_080556dc;
        while ((uVar7 & 1) == 0) {
          FUN_080003f0();
          uVar7 = *puVar3;
        }
        iVar5 = *DAT_080556e0;
        *(undefined4 *)(iVar5 + 0x38) = uVar8;
        *(undefined4 *)(iVar5 + 0x3c) = 1;
        *(undefined4 *)(iVar5 + 0x30) = 0;
        *(undefined4 *)(iVar5 + 0x34) = 0;
        uVar8 = DAT_080556e8;
        puVar3 = DAT_080556dc;
        uVar7 = *DAT_080556dc;
        while ((uVar7 & 2) == 0) {
          FUN_080003f0();
          uVar7 = *puVar3;
        }
        iVar5 = *DAT_080556e0 + DAT_080556e4;
        *(undefined4 *)(iVar5 + 0x38) = uVar8;
        *(undefined4 *)(iVar5 + 0x3c) = 2;
        *(undefined4 *)(iVar5 + 0x30) = 0;
        *(undefined4 *)(iVar5 + 0x34) = 0;
        iVar5 = FUN_0800c5e8();
        if (iVar5 == 0) {
          iVar5 = FUN_0801a720();
          if (iVar5 == 1) {
            FUN_0801a74c(6);
          }
          else if (iVar5 < 2) {
            if (iVar5 == 0) {
              FUN_08058b6c();
            }
          }
          else if (iVar5 == 2) {
            FUN_0801a78c(6);
          }
          while (iVar5 = FUN_0801a6dc(), iVar5 == 0) {
            FUN_080003f0();
          }
        }
      }
    }
    else {
      FUN_08028b3c(1,DAT_08055414,DAT_08055414,0);
      FUN_08028b3c(2,0x138,200,0);
      puVar3 = DAT_0805541c;
      uVar8 = DAT_08055418;
      uVar7 = *DAT_0805541c;
      while ((uVar7 & 2) == 0) {
        FUN_080003f0();
        uVar7 = *puVar3;
      }
      iVar5 = *DAT_08055420 + DAT_08055424;
      *(undefined4 *)(iVar5 + 0x38) = uVar8;
      *(undefined4 *)(iVar5 + 0x3c) = 2;
      *(undefined4 *)(iVar5 + 0x30) = 0;
      *(undefined4 *)(iVar5 + 0x34) = 0;
      iVar5 = FUN_0800c5e8();
      if (iVar5 == 0) {
        iVar5 = FUN_0801a720();
        if (iVar5 == 1) {
          FUN_0801a74c(6);
        }
        else if (iVar5 < 2) {
          if (iVar5 == 0) {
            FUN_08058b6c();
          }
        }
        else if (iVar5 == 2) {
          FUN_0801a78c(6);
        }
        while (iVar5 = FUN_0801a6dc(), iVar5 == 0) {
          FUN_080003f0();
        }
      }
    }
  }
  else {
    FUN_08028b3c(1,DAT_08055378,DAT_08055378,0);
    iVar5 = FUN_0800c5e8();
    if (iVar5 == 0) {
      iVar5 = FUN_0801a720();
      if (iVar5 == 1) {
        FUN_0801a74c(6);
      }
      else if (iVar5 < 2) {
        if (iVar5 == 0) {
          FUN_08058b6c();
        }
      }
      else if (iVar5 == 2) {
        FUN_0801a78c(6);
      }
      while (iVar5 = FUN_0801a6dc(), iVar5 == 0) {
        FUN_080003f0();
      }
    }
  }
  iVar5 = FUN_080020f4();
  iVar5 = iVar5 * 0x154 + DAT_08055744;
  *(uint *)(iVar5 + 0x38) = *(uint *)(iVar5 + 0x38) & 0xfffffffe;
  FUN_0800ca58();
  return unaff_lr;
}

