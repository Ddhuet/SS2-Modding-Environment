
undefined4 FUN_0804d734(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_lr;
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar2 = FUN_0800c780();
  uVar1 = DAT_0804d774;
  if (iVar2 == 0) {
    iVar2 = *DAT_0804d770;
    iVar4 = 0x1b8;
    piVar3 = DAT_0804d770;
  }
  else {
    iVar2 = *DAT_0804d74c;
    iVar4 = 0x1c4;
    piVar3 = DAT_0804d74c;
  }
  if (((int)(uint)*(byte *)(iVar2 + iVar4) >> 2 & 1U) == 0) {
    iVar2 = *piVar3 + DAT_0804d778;
    for (uVar5 = 0; uVar5 < 0x1e; uVar5 = uVar5 + 1) {
      iVar4 = FUN_08000470(iVar2);
      if (iVar4 == 0) {
        local_20 = uVar1;
        local_1c = 0;
        *(undefined4 *)(iVar2 + 8) = 0x3c;
        iVar4 = FUN_08001494(0x400);
        *(int *)(iVar2 + 0x20) = iVar4;
        *(undefined4 *)(iVar2 + 0xc) = DAT_0804d7e0;
        *(int *)(iVar2 + 0x10) = iVar4 + 0x3fc;
        *(undefined4 *)(iVar2 + 0x24) = 0;
        FUN_08000274(iVar2,auStack_2c,6);
        FUN_080003f0();
        FUN_080003f0();
        break;
      }
      iVar2 = iVar2 + 0x28;
    }
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
}

