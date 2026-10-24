
undefined4 FUN_08053058(void)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
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
  uVar4 = *(uint *)(*DAT_080530b4 + 0x38);
  if ((uVar4 & 4) == 0) {
    *(uint *)(*DAT_080530b4 + 0x38) = uVar4 | 4;
    sVar2 = 0x3c;
    do {
      FUN_080003f0();
      iVar3 = FUN_080021a8();
      if (iVar3 != 0) break;
      sVar2 = sVar2 + -1;
    } while (sVar2 != 0);
    FUN_08029548(1,0);
    FUN_08019a00(*(undefined2 *)(*DAT_080530e8 + 2),3);
    sVar2 = 0x3c;
    do {
      FUN_080003f0();
      iVar3 = FUN_080021a8();
      if (iVar3 != 0) break;
      sVar2 = sVar2 + -1;
    } while (sVar2 != 0);
  }
  puVar1 = DAT_0805313c;
  iVar3 = *DAT_08053138;
  uVar4 = 0;
  do {
    if (((*puVar1 & 1 << (uVar4 & 0xff)) != 0) && (*(short *)(iVar3 + 0xc) == 0xc)) {
      *(undefined2 *)(iVar3 + 0xc) = 0;
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + DAT_08053140;
  } while (uVar4 < 5);
  FUN_08019a4c();
  return unaff_lr;
}

