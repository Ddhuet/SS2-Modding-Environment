
undefined4 FUN_080b8e64(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  if (*(int *)(param_1 + 0x34) == DAT_080b8ea0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000000;
    uVar1 = (uint)*(byte *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x2c);
    if (uVar1 != 0) {
      do {
        FUN_080b82f0(param_1,iVar2);
        uVar1 = uVar1 - 1;
        iVar2 = iVar2 + 0x50;
      } while (0 < (int)uVar1);
    }
    *(int *)(param_1 + 0x34) = DAT_080b8ea0;
  }
  return unaff_lr;
}

