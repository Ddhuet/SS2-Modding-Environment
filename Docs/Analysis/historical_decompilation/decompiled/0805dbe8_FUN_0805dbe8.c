
undefined4 FUN_0805dbe8(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_lr;
  
  iVar2 = *DAT_0805dc14;
  uVar3 = 0;
  do {
    uVar1 = *(ushort *)(iVar2 + 8) & 0x20;
    if ((*(ushort *)(iVar2 + 8) & 0x20) == 0) {
      *(ushort *)(iVar2 + 10) = uVar1;
      *(ushort *)(iVar2 + 0xc) = uVar1;
    }
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 0x20;
  } while (uVar3 < 0x10);
  return unaff_lr;
}

