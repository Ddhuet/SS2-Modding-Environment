
undefined4 FUN_080b8ea4(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 unaff_lr;
  
  if ((*(short *)(param_1 + 0x24) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x26) + -1, *(short *)(param_1 + 0x26) = sVar1,
     uVar5 = DAT_080b8eec, sVar1 == 0)) {
    uVar2 = *(ushort *)(param_1 + 0x28) - 0x10;
    *(short *)(param_1 + 0x28) = (short)uVar2;
    if ((int)((uVar2 & uVar5) * 0x10000) < 1) {
      uVar5 = (uint)*(byte *)(param_1 + 8);
      puVar3 = *(undefined1 **)(param_1 + 0x2c);
      if (uVar5 != 0) {
        do {
          FUN_080b82f0(param_1,puVar3);
          *puVar3 = 0;
          uVar5 = uVar5 - 1;
          puVar3 = puVar3 + 0x50;
        } while (0 < (int)uVar5);
      }
    }
    else {
      *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x24);
      uVar5 = (uint)*(byte *)(param_1 + 8);
      pbVar4 = *(byte **)(param_1 + 0x2c);
      if (uVar5 != 0) {
        do {
          if ((*pbVar4 & 0x80) != 0) {
            pbVar4[0x13] = (byte)(*(ushort *)(param_1 + 0x28) >> 2);
            *pbVar4 = *pbVar4 | 3;
          }
          uVar5 = uVar5 - 1;
          pbVar4 = pbVar4 + 0x50;
        } while (0 < (int)uVar5);
      }
    }
  }
  return unaff_lr;
}

