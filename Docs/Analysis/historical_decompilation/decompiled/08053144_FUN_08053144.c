
undefined4 FUN_08053144(void)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_lr;
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = DAT_08053164;
  if ((*(uint *)(*DAT_08053160 + 0x38) & 8) == 0) {
    iVar4 = *DAT_08053160 + DAT_08053168;
    for (uVar5 = 0; uVar5 < 0x1e; uVar5 = uVar5 + 1) {
      iVar3 = FUN_08000470(iVar4);
      if (iVar3 == 0) {
        local_20 = uVar1;
        local_1c = 0;
        *(undefined4 *)(iVar4 + 8) = 0x3c;
        iVar3 = FUN_08001494(0x400);
        *(int *)(iVar4 + 0x20) = iVar3;
        *(undefined4 *)(iVar4 + 0xc) = DAT_080531b8;
        *(int *)(iVar4 + 0x10) = iVar3 + 0x3fc;
        *(undefined4 *)(iVar4 + 0x24) = 0;
        FUN_08000274(iVar4,auStack_2c,6);
        FUN_080003f0();
        FUN_080003f0();
        break;
      }
      iVar4 = iVar4 + 0x28;
    }
  }
  else {
    FUN_08028b3c(7,0x108,0x158,0);
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
  puVar2 = DAT_08053248;
  iVar4 = *DAT_08053244;
  uVar5 = 0;
  do {
    if (((*puVar2 & 1 << (uVar5 & 0xff)) != 0) && (*(short *)(iVar4 + 0xc) == 0xc)) {
      *(undefined2 *)(iVar4 + 0xc) = 0;
    }
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + DAT_0805324c;
  } while (uVar5 < 5);
  FUN_08019a4c();
  return unaff_lr;
}

