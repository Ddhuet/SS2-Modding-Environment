
undefined4 FUN_08056d58(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_lr;
  
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
  *DAT_08056de8 = 0xb;
  if ((*DAT_08056dec & 0x20) == 0) {
    FUN_08006794(0xb);
  }
  puVar1 = DAT_08056df4;
  iVar2 = *DAT_08056df0;
  uVar3 = 0;
  do {
    if (((*puVar1 & 1 << (uVar3 & 0xff)) != 0) && (*(short *)(iVar2 + 0xc) == 0xc)) {
      *(undefined2 *)(iVar2 + 0xc) = 0;
    }
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + DAT_08056df8;
  } while (uVar3 < 5);
  FUN_08019a4c();
  return unaff_lr;
}

