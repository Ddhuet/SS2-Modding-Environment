
undefined4 FUN_0800b150(uint param_1,int param_2,int param_3,undefined2 param_4,uint param_5)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 unaff_lr;
  uint *local_28;
  uint local_24;
  
  local_24 = param_5 & 0xffff;
  puVar1 = (uint *)FUN_08006d98(param_1);
  iVar2 = FUN_08006d98(*puVar1);
  uVar3 = FUN_08006d98((ushort)*puVar1 | 0x70000);
  local_28 = (uint *)(param_1 & 0x40000000);
  if (local_28 == (uint *)0x0) {
    local_28 = (uint *)FUN_08000bc8(puVar1 + 1,&local_28);
  }
  else {
    local_28 = puVar1 + 1;
  }
  if ((*DAT_0800b1f4 & 0x80) == 0) {
    if ((*puVar1 & 0x10000000) == 0) {
      uVar4 = 0;
      do {
        FUN_08001348(iVar2 + uVar4 * 0x800,param_3 + uVar4 * 0x800,0x800);
        FUN_080003f0();
        uVar4 = uVar4 + 1 & 0xffff;
      } while (uVar4 < 0x10);
    }
    else if ((*puVar1 & 0x20000000) == 0) {
      uVar4 = 0;
      do {
        FUN_08001348(iVar2 + uVar4 * 0x400,param_3 + uVar4 * 0x400,0x400);
        FUN_080003f0();
        uVar4 = uVar4 + 1 & 0xffff;
      } while (uVar4 < 0x10);
    }
    else {
      uVar4 = 0;
      do {
        FUN_08001348(iVar2 + uVar4 * 0x400,param_3 + uVar4 * 0x400 + 0x4000,0x400);
        FUN_080003f0();
        uVar4 = uVar4 + 1 & 0xffff;
      } while (uVar4 < 0x10);
    }
    FUN_08001348(local_28,param_2 * 0x800 + 0x6000000,0x800);
    FUN_080003f0();
  }
  else {
    if ((*puVar1 & 0x10000000) == 0) {
      FUN_080b9a84(iVar2,param_3,0x2000);
    }
    else if ((*puVar1 & 0x20000000) == 0) {
      FUN_080b9a84(iVar2,param_3,0x1000);
    }
    else {
      FUN_080b9a84(iVar2,param_3 + 0x4000,0x1000);
    }
    FUN_080b9a84(local_28,param_2 * 0x800 + 0x6000000,0x200);
  }
  if ((param_1 & 0x40000000) == 0) {
    FUN_08001538(local_28);
  }
  FUN_08000af0(param_4,uVar3,local_24);
  *DAT_0800b2d8 = 0;
  return unaff_lr;
}

