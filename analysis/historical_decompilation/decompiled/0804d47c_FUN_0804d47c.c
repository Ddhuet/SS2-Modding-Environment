
undefined4 FUN_0804d47c(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int *piVar6;
  uint uVar7;
  undefined4 unaff_lr;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  iVar3 = FUN_0800c780();
  if (iVar3 == 0) {
    pbVar5 = (byte *)(*DAT_0804d550 + 0x1b8);
    piVar6 = DAT_0804d550;
  }
  else {
    pbVar5 = (byte *)(*DAT_0804d4a0 + 0x1c4);
    piVar6 = DAT_0804d4a0;
  }
  *pbVar5 = *pbVar5 | 0x40;
  if ((*(uint *)(*piVar6 + 0x38) & 4) == 0) {
    iVar3 = FUN_080020f4();
    if (iVar3 == 0) {
      FUN_0806870c(DAT_0804d554,param_1);
    }
    *(uint *)(*piVar6 + 0x38) = *(uint *)(*piVar6 + 0x38) | 4;
    iVar3 = FUN_0800c61c();
    if (iVar3 == 0 && *(short *)(DAT_0804d558 + 0x90) == 4) {
      iVar3 = FUN_080020f4();
      iVar3 = iVar3 * 0x154 + DAT_0804d55c;
      *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) | 1;
      FUN_0800ca44();
      FUN_08028b3c(6,DAT_0804d560,DAT_0804d560,0);
      if ((*DAT_0804d564 & 0x20) == 0) {
        FUN_080067e8(0x23);
      }
      sVar2 = 0x1e;
      do {
        FUN_080003f0();
        iVar3 = FUN_080021a8();
        if (iVar3 != 0) break;
        sVar2 = sVar2 + -1;
      } while (sVar2 != 0);
      FUN_0805f8e0();
      do {
        FUN_080003f0();
        iVar3 = FUN_0805fa94();
      } while (iVar3 != 0);
      sVar2 = 4;
      do {
        FUN_080003f0();
        iVar3 = FUN_080021a8();
        if (iVar3 != 0) break;
        sVar2 = sVar2 + -1;
      } while (sVar2 != 0);
      iVar3 = FUN_080020f4();
      iVar3 = iVar3 * 0x154 + DAT_0804d5c8;
      *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) | 1;
      FUN_0800ca44();
      while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
        FUN_080003f0();
      }
      uVar4 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_0804d600);
      while (iVar3 = FUN_0805f820(uVar4), iVar3 == 0) {
        FUN_080003f0();
      }
      piVar6 = (int *)(*DAT_0804d720 + DAT_0804d724);
      uVar7 = 0;
      do {
        if (((1 << (uVar7 & 0xff) & *(uint *)(*DAT_0804d720 + 0x54)) != 0) && (piVar6[1] == 0x13)) {
          iVar3 = *piVar6;
          goto LAB_0804d63c;
        }
        uVar7 = uVar7 + 1;
        piVar6 = piVar6 + 0x1c;
      } while (uVar7 < 0xf);
      iVar3 = 0;
LAB_0804d63c:
      FUN_08029444(iVar3,8);
      FUN_08028b3c(iVar3,0xb8,0xe0,0x14);
      FUN_0802917c(iVar3,2);
      FUN_08028b3c(iVar3,0x97,0xe0,0x14);
      FUN_0802917c(iVar3,0);
      FUN_08028b3c(iVar3,0x97,DAT_0804d728,0x28);
      piVar6 = (int *)(*DAT_0804d720 + DAT_0804d724);
      uVar7 = 0;
      do {
        if (*piVar6 == iVar3) goto LAB_0804d696;
        uVar7 = uVar7 + 1;
        piVar6 = piVar6 + 0x1c;
      } while (uVar7 < 0xf);
      FUN_080003f0();
      piVar6 = (int *)0x0;
LAB_0804d696:
      if (piVar6 != (int *)0x0) {
        *(undefined2 *)((int)piVar6 + 0x36) = 4;
      }
      sVar2 = *(short *)(DAT_0804d72c + 0x80);
      sVar1 = *(short *)(DAT_0804d72c + 0x82);
      iVar3 = 0;
      do {
        FUN_08066020(local_28,(int)sVar2,0,iVar3);
        FUN_08066020(local_24,(int)sVar1,0,iVar3);
        FUN_0800b4e8((int)local_28._0_2_,(int)local_24._0_2_);
        FUN_080003f0();
        iVar3 = iVar3 + 0x22;
      } while (iVar3 < 0x401);
      iVar3 = FUN_080020f4();
      iVar3 = iVar3 * 0x154 + DAT_0804d730;
      *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) & 0xfffffffe;
      FUN_0800ca58();
    }
  }
  return unaff_lr;
}

