
undefined4 FUN_0804d8d4(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = DAT_0804d8f4;
  if ((*(uint *)(*DAT_0804d8f0 + 0x38) & 8) == 0) {
    iVar3 = *DAT_0804d8f0 + DAT_0804d8f8;
    for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
      iVar2 = FUN_08000470(iVar3);
      if (iVar2 == 0) {
        local_20 = uVar1;
        local_1c = 0;
        *(undefined4 *)(iVar3 + 8) = 0x3c;
        iVar2 = FUN_08001494(0x400);
        *(int *)(iVar3 + 0x20) = iVar2;
        *(undefined4 *)(iVar3 + 0xc) = DAT_0804d948;
        *(int *)(iVar3 + 0x10) = iVar2 + 0x3fc;
        *(undefined4 *)(iVar3 + 0x24) = 0;
        FUN_08000274(iVar3,auStack_2c,6);
        FUN_080003f0();
        FUN_080003f0();
        break;
      }
      iVar3 = iVar3 + 0x28;
    }
  }
  else {
    FUN_08028b3c(7,DAT_0804d974,DAT_0804d974,0);
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

