
undefined4 FUN_08054fa8(void)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_lr;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  iVar4 = DAT_08055018;
  sVar3 = *(short *)(DAT_08055014 + 0x80);
  sVar1 = *(short *)(DAT_08055014 + 0x82);
  iVar5 = 0;
  do {
    FUN_08066020(local_28,(int)sVar3,0,iVar5);
    FUN_08066020(local_24,(int)sVar1,iVar4 >> 0x10,iVar5);
    FUN_0800b4e8((int)local_28._0_2_,(int)local_24._0_2_);
    FUN_080003f0();
    iVar5 = iVar5 + 0x400;
  } while (iVar5 < 0x401);
  sVar3 = 1;
  do {
    FUN_080003f0();
    iVar4 = FUN_080021a8();
    uVar2 = DAT_08055040;
    if (iVar4 != 0) break;
    sVar3 = sVar3 + -1;
  } while (sVar3 != 0);
  iVar4 = *DAT_08055044 + DAT_08055048;
  for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
    iVar5 = FUN_08000470(iVar4);
    if (iVar5 == 0) goto LAB_08055064;
    iVar4 = iVar4 + 0x28;
  }
LAB_0805508e:
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
LAB_08055064:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar4 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar4 + 8) = 0x3c;
  *(undefined4 *)(iVar4 + 0xc) = uVar2;
  *(int *)(iVar4 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  FUN_08000274(iVar4,1);
  goto LAB_0805508e;
}

