
undefined8 FUN_080179d8(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 unaff_lr;
  int local_2c;
  int local_28;
  undefined4 local_24;
  uint local_20;
  
  local_24 = DAT_08017a70;
  local_20 = (local_20 & DAT_08017a68 | 0x20) & DAT_08017a6c | 0x200000;
  uVar6 = 0;
  uVar1 = FUN_08002164();
  uVar5 = 0;
  iVar4 = DAT_08017a74;
  if (uVar1 != 0) {
    do {
      puVar3 = *(ushort **)(iVar4 + 0x150);
      if ((puVar3[2] & 0x20) == 0) {
        local_2c = (uint)(*puVar3 >> 4) << 8;
        local_28 = (*(ushort *)(*(int *)(iVar4 + 0x150) + 2) & 0xfff) << 8;
        iVar2 = FUN_08021ef0(&local_2c,param_1,&local_24,&local_20);
        if (iVar2 != 0) {
          uVar6 = 1;
        }
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x154;
    } while (uVar5 < uVar1);
  }
  return CONCAT44(unaff_lr,uVar6);
}

