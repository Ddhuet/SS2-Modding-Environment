
undefined4 FUN_08097210(uint *param_1,char param_2)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  uVar1 = DAT_080972b0;
  bVar2 = 0;
  iVar4 = (int)param_2;
  do {
    uVar3 = (*param_1 & 0x1f) + iVar4 & 0xffff;
    if (0x1f < uVar3) {
      uVar3 = 0x1f;
    }
    *(byte *)param_1 = (byte)*param_1 & 0xe0 | (byte)uVar3 & 0x1f;
    uVar3 = ((*param_1 & 0x3ff) >> 5) + iVar4 & 0xffff;
    if (0x1f < uVar3) {
      uVar3 = 0x1f;
    }
    *(ushort *)param_1 = (ushort)uVar1 & (ushort)*param_1 | (ushort)((uVar3 & 0x1f) << 5);
    uVar3 = ((*param_1 & 0x7fff) >> 10) + iVar4 & 0xffff;
    if (0x1f < uVar3) {
      uVar3 = 0x1f;
    }
    *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 3 | (byte)((uVar3 & 0x1f) << 2);
    bVar2 = bVar2 + 1;
    param_1 = (uint *)((int)param_1 + 2);
  } while (bVar2 < 0x10);
  return unaff_lr;
}

