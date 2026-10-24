
undefined4 FUN_08008ee0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_lr;
  short local_16;
  
  uVar2 = param_3 & 0xffff;
  uVar3 = param_2 & 0xffff;
  if ((int)(param_2 * 0x10000) < 0) {
    uVar3 = 0;
  }
  if ((int)(param_3 * 0x10000) < 0) {
    uVar2 = 0;
  }
  uVar1 = uVar2 << 0x10 & 0xff0000;
  local_16 = (short)((int)uVar1 >> 0x13);
  uVar1 = 0x20U - ((int)uVar1 >> 0x13) & 0xffff;
  if (0x15 < uVar1) {
    uVar1 = 0x15;
  }
  iVar5 = *(int *)((uint)*(ushort *)(param_1 + 0x14) * 4 + DAT_08008fc4) +
          ((short)((ushort)uVar3 & 0xff) >> 3) * 2;
  iVar4 = *(int *)(param_1 + 0xc) + ((int)(uVar3 << 0x10) >> 0x13 & 0xffffU) * 2;
  uVar3 = 0;
  uVar2 = (uint)*(ushort *)(param_1 + 0x10) * ((int)(uVar2 << 0x10) >> 0x13 & 0xffffU) & 0xffff;
  if (uVar1 != 0) {
    do {
      *(undefined2 *)(local_16 * 0x40 + iVar5) = *(undefined2 *)(uVar2 * 2 + iVar4);
      uVar3 = uVar3 + 1 & 0xffff;
      local_16 = local_16 + 1;
      uVar2 = uVar2 + *(ushort *)(param_1 + 0x10) & 0xffff;
    } while (uVar3 < uVar1);
  }
  local_16 = 0;
  for (; uVar3 < 0x15; uVar3 = uVar3 + 1 & 0xffff) {
    *(undefined2 *)(local_16 * 0x40 + iVar5) = *(undefined2 *)(uVar2 * 2 + iVar4);
    local_16 = local_16 + 1;
    uVar2 = uVar2 + *(ushort *)(param_1 + 0x10) & 0xffff;
  }
  return unaff_lr;
}

