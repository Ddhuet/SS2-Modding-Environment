
undefined4 FUN_08098284(int param_1,uint *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 unaff_lr;
  
  uVar1 = DAT_080982f4;
  bVar2 = 0;
  puVar4 = (ushort *)(param_1 + -2);
  do {
    puVar5 = puVar4 + 1;
    uVar3 = *param_2;
    *(byte *)puVar5 = (byte)*puVar5 & 0xe0 | (byte)uVar3 & 0x1f;
    *puVar5 = (ushort)uVar1 & *puVar5 | (ushort)uVar3 & 0x3e0;
    *(byte *)((int)puVar4 + 3) =
         *(byte *)((int)puVar4 + 3) & 0x83 | (byte)(((uVar3 & 0x7fff) >> 10) << 2);
    bVar2 = bVar2 + 1;
    puVar4 = puVar5;
    param_2 = (uint *)((int)param_2 + 2);
  } while (bVar2 < 0x10);
  return unaff_lr;
}

