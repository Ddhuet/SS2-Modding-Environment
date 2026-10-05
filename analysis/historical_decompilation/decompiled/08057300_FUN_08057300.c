
undefined4 FUN_08057300(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 unaff_lr;
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar4 = DAT_080574bc;
  uVar3 = DAT_08057458;
  uVar2 = DAT_080573fc;
  uVar1 = DAT_080573a0;
  uVar8 = DAT_08057344;
  iVar5 = *DAT_08057340;
  uVar7 = *(uint *)(iVar5 + 0x38);
  if ((uVar7 & 1) == 0) {
    iVar5 = iVar5 + DAT_08057348;
    for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
      iVar6 = FUN_08000470(iVar5);
      if (iVar6 == 0) {
        local_20 = uVar8;
        local_1c = 0;
        *(undefined4 *)(iVar5 + 8) = 0x3c;
        iVar6 = FUN_08001494(0x400);
        *(int *)(iVar5 + 0x20) = iVar6;
        *(undefined4 *)(iVar5 + 0xc) = DAT_0805738c;
        *(int *)(iVar5 + 0x10) = iVar6 + 0x3fc;
        *(undefined4 *)(iVar5 + 0x24) = 0;
        uVar8 = 6;
LAB_0805749c:
        FUN_08000274(iVar5,auStack_2c,uVar8);
        FUN_080003f0();
        FUN_080003f0();
        break;
      }
      iVar5 = iVar5 + 0x28;
    }
  }
  else if ((uVar7 & 2) == 0) {
    iVar5 = iVar5 + DAT_080573a4;
    for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
      iVar6 = FUN_08000470(iVar5);
      if (iVar6 == 0) {
        local_20 = uVar1;
        local_1c = 2;
        *(undefined4 *)(iVar5 + 8) = 0x3c;
        iVar6 = FUN_08001494(0x400);
        *(int *)(iVar5 + 0x20) = iVar6;
        *(undefined4 *)(iVar5 + 0xc) = DAT_080573e8;
        *(int *)(iVar5 + 0x10) = iVar6 + 0x3fc;
        *(undefined4 *)(iVar5 + 0x24) = 0;
        uVar8 = 7;
        goto LAB_0805749c;
      }
      iVar5 = iVar5 + 0x28;
    }
  }
  else if ((uVar7 & 4) == 0) {
    iVar5 = iVar5 + DAT_08057400;
    for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
      iVar6 = FUN_08000470(iVar5);
      if (iVar6 == 0) {
        local_20 = uVar2;
        local_1c = 4;
        *(undefined4 *)(iVar5 + 8) = 0x3c;
        iVar6 = FUN_08001494(0x400);
        *(int *)(iVar5 + 0x20) = iVar6;
        *(undefined4 *)(iVar5 + 0xc) = DAT_08057444;
        *(int *)(iVar5 + 0x10) = iVar6 + 0x3fc;
        *(undefined4 *)(iVar5 + 0x24) = 0;
        uVar8 = 8;
        goto LAB_0805749c;
      }
      iVar5 = iVar5 + 0x28;
    }
  }
  else if ((uVar7 & 8) == 0) {
    iVar5 = iVar5 + DAT_0805745c;
    for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
      iVar6 = FUN_08000470(iVar5);
      if (iVar6 == 0) {
        local_20 = uVar3;
        local_1c = 6;
        *(undefined4 *)(iVar5 + 8) = 0x3c;
        iVar6 = FUN_08001494(0x400);
        *(int *)(iVar5 + 0x20) = iVar6;
        *(undefined4 *)(iVar5 + 0xc) = DAT_080574ac;
        *(int *)(iVar5 + 0x10) = iVar6 + 0x3fc;
        *(undefined4 *)(iVar5 + 0x24) = 0;
        uVar8 = 9;
        goto LAB_0805749c;
      }
      iVar5 = iVar5 + 0x28;
    }
  }
  else {
    iVar5 = iVar5 + DAT_080574c0;
    for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
      iVar6 = FUN_08000470(iVar5);
      if (iVar6 == 0) {
        local_20 = uVar4;
        local_1c = 8;
        *(undefined4 *)(iVar5 + 8) = 0x3c;
        iVar6 = FUN_08001494(0x400);
        *(int *)(iVar5 + 0x20) = iVar6;
        *(undefined4 *)(iVar5 + 0xc) = DAT_08057528;
        *(int *)(iVar5 + 0x10) = iVar6 + 0x3fc;
        *(undefined4 *)(iVar5 + 0x24) = 0;
        FUN_08000274(iVar5,auStack_2c,10);
        FUN_080003f0();
        FUN_080003f0();
        break;
      }
      iVar5 = iVar5 + 0x28;
    }
  }
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
  return unaff_lr;
}

