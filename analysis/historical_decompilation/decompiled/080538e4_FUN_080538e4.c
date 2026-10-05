
undefined4 FUN_080538e4(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 unaff_lr;
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar2 = FUN_0800c780();
  piVar3 = DAT_08053920;
  piVar5 = DAT_08053900;
  if (iVar2 == 0) {
    *(undefined1 *)(*DAT_08053920 + DAT_08053924) = 0;
  }
  else {
    *(undefined1 *)(*DAT_08053900 + DAT_08053904) = 0;
    piVar3 = piVar5;
  }
  uVar1 = DAT_08053928;
  iVar2 = *piVar3 + DAT_0805392c;
  for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
    iVar4 = FUN_08000470(iVar2);
    if (iVar4 == 0) goto LAB_08053948;
    iVar2 = iVar2 + 0x28;
  }
LAB_08053972:
  uVar1 = DAT_08053980;
  iVar2 = *DAT_08053984 + DAT_08053988;
  for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
    iVar4 = FUN_08000470(iVar2);
    if (iVar4 == 0) goto LAB_080539a4;
    iVar2 = iVar2 + 0x28;
  }
LAB_080539ce:
  uVar1 = DAT_080539dc;
  iVar2 = *DAT_080539e0 + DAT_080539e4;
  for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
    iVar4 = FUN_08000470(iVar2);
    if (iVar4 == 0) goto LAB_08053a00;
    iVar2 = iVar2 + 0x28;
  }
LAB_08053a2a:
  iVar2 = FUN_0800c780();
  uVar1 = DAT_08053a7c;
  if (iVar2 == 0) {
    pbVar6 = (byte *)(*DAT_08053a68 + 0x1b8);
    piVar5 = DAT_08053a68;
  }
  else {
    pbVar6 = (byte *)(*DAT_08053a40 + 0x1c4);
    piVar5 = DAT_08053a40;
  }
  if (((int)(uint)*pbVar6 >> 4 & 1U) == 0) {
    iVar2 = *piVar5 + DAT_08053a80;
    for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
      iVar4 = FUN_08000470(iVar2);
      if (iVar4 == 0) {
        local_20 = uVar1;
        local_1c = 0;
        *(undefined4 *)(iVar2 + 8) = 0x3c;
        iVar4 = FUN_08001494(0x400);
        *(int *)(iVar2 + 0x20) = iVar4;
        *(undefined4 *)(iVar2 + 0xc) = DAT_08053ae8;
        *(int *)(iVar2 + 0x10) = iVar4 + 0x3fc;
        *(undefined4 *)(iVar2 + 0x24) = 0;
        FUN_08000274(iVar2,auStack_2c,9);
        FUN_080003f0();
        FUN_080003f0();
        break;
      }
      iVar2 = iVar2 + 0x28;
    }
  }
  else {
    FUN_08028b3c(9,DAT_08053a6c,DAT_08053a6c,0);
  }
  iVar2 = FUN_0800c5e8();
  if (iVar2 == 0) {
    iVar2 = FUN_0801a720();
    if (iVar2 == 1) {
      FUN_0801a74c(6);
    }
    else if (iVar2 < 2) {
      if (iVar2 == 0) {
        FUN_08058b6c();
      }
    }
    else if (iVar2 == 2) {
      FUN_0801a78c(6);
    }
    while (iVar2 = FUN_0801a6dc(), iVar2 == 0) {
      FUN_080003f0();
    }
  }
  return unaff_lr;
LAB_08053948:
  while( true ) {
    iVar4 = FUN_08001494(0x400);
    *(int *)(iVar2 + 0x20) = iVar4;
    if (iVar4 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar2 + 8) = 0x3c;
  *(undefined4 *)(iVar2 + 0xc) = uVar1;
  *(int *)(iVar2 + 0x10) = iVar4 + 0x3fc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_08000274(iVar2,3);
  goto LAB_08053972;
LAB_080539a4:
  while( true ) {
    iVar4 = FUN_08001494(0x400);
    *(int *)(iVar2 + 0x20) = iVar4;
    if (iVar4 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar2 + 8) = 0x3c;
  *(undefined4 *)(iVar2 + 0xc) = uVar1;
  *(int *)(iVar2 + 0x10) = iVar4 + 0x3fc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_08000274(iVar2,4);
  goto LAB_080539ce;
LAB_08053a00:
  while( true ) {
    iVar4 = FUN_08001494(0x400);
    *(int *)(iVar2 + 0x20) = iVar4;
    if (iVar4 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar2 + 8) = 0x3c;
  *(undefined4 *)(iVar2 + 0xc) = uVar1;
  *(int *)(iVar2 + 0x10) = iVar4 + 0x3fc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_08000274(iVar2,5);
  goto LAB_08053a2a;
}

