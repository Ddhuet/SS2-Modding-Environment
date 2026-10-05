
undefined4 FUN_08019a4c(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  *(undefined2 *)(*DAT_08019a94 + 0x5a) = 1;
  iVar2 = DAT_08019aa0;
  puVar1 = DAT_08019a9c;
  iVar3 = *DAT_08019a98;
  uVar4 = 0;
  do {
    if (((*puVar1 & 1 << (uVar4 & 0xff)) != 0) && ((*(ushort *)(iVar3 + 0x7a) & 4) != 0)) {
      *(undefined1 *)(iVar3 + iVar2) = 1;
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + DAT_08019aa4;
  } while (uVar4 < 5);
  return unaff_lr;
}

