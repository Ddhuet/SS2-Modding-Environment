
undefined4 FUN_0804b0d4(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_lr;
  
  piVar2 = DAT_0804b100;
  uVar5 = *(uint *)(*DAT_0804b100 + 0x38);
  if ((uVar5 & 0x20) == 0) {
    *(uint *)(*DAT_0804b100 + 0x38) = uVar5 | 0x20;
    iVar3 = FUN_0800c780();
    if (iVar3 == 0) {
      pbVar4 = (byte *)(*piVar2 + 0x1b8);
    }
    else {
      pbVar4 = (byte *)(*piVar2 + 0x1c4);
    }
    bVar1 = *pbVar4;
    iVar3 = FUN_080020f4();
    iVar7 = 0;
    uVar5 = 0;
    psVar6 = (short *)(*DAT_0804b194 + 0x158);
    do {
      if ((*psVar6 == 1) && (psVar6[1] == 0x2a)) {
        iVar7 = iVar7 + 1;
      }
      psVar6 = psVar6 + 8;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x19);
    iVar8 = 0;
    uVar5 = 0;
    psVar6 = (short *)(*DAT_0804b194 + 0x2e8);
    do {
      if ((*psVar6 == 1) && (psVar6[1] == 0x2a)) {
        iVar8 = iVar8 + 1;
      }
      psVar6 = psVar6 + 8;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x4b);
    if (((((int)(uint)bVar1 >> 5 & 1U) == 0 && iVar3 == 0) && iVar7 == 0) && iVar8 == 0) {
      FUN_08068ebc(DAT_0804b198,0,1);
    }
  }
  iVar3 = FUN_0800c5e8();
  if (iVar3 == 0) {
    iVar3 = FUN_0801a720();
    if (iVar3 == 1) {
      FUN_0801a74c(6);
    }
    else if (iVar3 < 2) {
      if (iVar3 == 0) {
        FUN_08058b6c();
      }
    }
    else if (iVar3 == 2) {
      FUN_0801a78c(6);
    }
    while (iVar3 = FUN_0801a6dc(), iVar3 == 0) {
      FUN_080003f0();
    }
  }
  return unaff_lr;
}

