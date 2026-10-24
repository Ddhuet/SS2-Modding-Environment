
undefined8 FUN_08097134(uint *param_1,char param_2,uint param_3,uint param_4)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_lr;
  undefined4 local_24;
  
  uVar2 = 1;
  if ((param_3 & 0xffff) < (param_4 & 0xffff)) {
    bVar1 = 0;
    local_24 = param_1;
    do {
      uVar3 = FUN_080ba8a4((int)param_2 * (param_3 & 0xffff),param_4 & 0xffff);
      uVar3 = uVar3 & 0xffff;
      uVar4 = uVar3 + (*local_24 & 0x1f) & 0xffff;
      if (0x1f < uVar4) {
        uVar4 = 0x1f;
      }
      *(byte *)local_24 = (byte)*local_24 & 0xe0 | (byte)uVar4 & 0x1f;
      uVar4 = uVar3 + ((*local_24 & 0x3ff) >> 5) & 0xffff;
      if (0x1f < uVar4) {
        uVar4 = 0x1f;
      }
      *(ushort *)local_24 = (ushort)*local_24 & (ushort)DAT_0809720c | (ushort)((uVar4 & 0x1f) << 5)
      ;
      uVar3 = uVar3 + ((*local_24 & 0x7fff) >> 10) & 0xffff;
      if (0x1f < uVar3) {
        uVar3 = 0x1f;
      }
      *(byte *)((int)local_24 + 1) = *(byte *)((int)local_24 + 1) & 3 | (byte)((uVar3 & 0x1f) << 2);
      bVar1 = bVar1 + 1;
      local_24 = (uint *)((int)local_24 + 2);
    } while (bVar1 < 0x10);
    uVar2 = 0;
  }
  return CONCAT44(unaff_lr,uVar2);
}

