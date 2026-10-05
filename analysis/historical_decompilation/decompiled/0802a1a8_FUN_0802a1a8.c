
undefined4 FUN_0802a1a8(void)

{
  uint *puVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_lr;
  
  uVar2 = DAT_0802a204;
  puVar1 = DAT_0802a200;
  iVar4 = *DAT_0802a1fc;
  uVar5 = 0;
  do {
    if (((*puVar1 & 1 << (uVar5 & 0xff)) != 0) &&
       (puVar3 = (ushort *)(iVar4 + 0x7a), (*puVar3 & 8) != 0)) {
      *(undefined2 *)(iVar4 + 100) = 0x1e;
      *(undefined2 *)(iVar4 + 0x66) = 1;
      *puVar3 = (ushort)uVar2 & *puVar3;
    }
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + DAT_0802a208;
  } while (uVar5 < 5);
  return unaff_lr;
}

