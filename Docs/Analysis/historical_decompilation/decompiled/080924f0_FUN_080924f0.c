
undefined8 FUN_080924f0(uint param_1,int param_2)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 unaff_lr;
  ushort *local_20;
  
  puVar2 = (ushort *)FUN_08006d88();
  iVar3 = FUN_08006d88(*(undefined4 *)puVar2);
  uVar4 = FUN_08006d88(*puVar2 | 0x70000);
  uVar5 = 0;
  do {
    FUN_08001348(iVar3 + uVar5 * 0x800,uVar5 * 0x800 + 0x6000000,0x800);
    FUN_080003f0();
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 0x10);
  local_20 = (ushort *)(param_1 & 0x40000000);
  if (local_20 == (ushort *)0x0) {
    local_20 = (ushort *)FUN_08000bc8(puVar2 + 2,&local_20);
    FUN_08001348(local_20,param_2 * 0x800 + 0x6000000,0x800);
    bVar1 = 0;
    do {
      FUN_080003f0();
      bVar1 = bVar1 + 1;
    } while (bVar1 < 8);
    if (local_20 != (ushort *)0x0) {
      FUN_08001538();
    }
  }
  else {
    local_20 = puVar2 + 2;
    FUN_08001348(local_20,param_2 * 0x800 + 0x6000000,0x800);
    FUN_080003f0();
  }
  FUN_08000af0(0,uVar4,0x10);
  *DAT_080925bc = 0;
  return CONCAT44(unaff_lr,uVar4);
}

