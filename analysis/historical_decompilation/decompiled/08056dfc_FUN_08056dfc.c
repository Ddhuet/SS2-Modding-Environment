
undefined4 FUN_08056dfc(void)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_lr;
  
  uVar1 = DAT_08056e0c;
  iVar4 = *DAT_08056e10 + DAT_08056e14;
  for (uVar5 = 0; uVar5 < 0x1e; uVar5 = uVar5 + 1) {
    iVar2 = FUN_08000470(iVar4);
    if (iVar2 == 0) goto LAB_08056e30;
    iVar4 = iVar4 + 0x28;
  }
LAB_08056e5a:
  iVar4 = FUN_0800c780();
  if (iVar4 == 0) {
    pbVar3 = (byte *)(*DAT_08056eb0 + 0x1ba);
  }
  else {
    pbVar3 = (byte *)(*DAT_08056e70 + 0x1c6);
  }
  if ((*pbVar3 & 1) != 0) {
    FUN_08028b3c(8,DAT_08056eb4,DAT_08056eb4,0);
  }
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
  return unaff_lr;
LAB_08056e30:
  while( true ) {
    iVar2 = FUN_08001494(0x400);
    *(int *)(iVar4 + 0x20) = iVar2;
    if (iVar2 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar4 + 8) = 0x3c;
  *(undefined4 *)(iVar4 + 0xc) = uVar1;
  *(int *)(iVar4 + 0x10) = iVar2 + 0x3fc;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  FUN_08000274(iVar4,0);
  goto LAB_08056e5a;
}

