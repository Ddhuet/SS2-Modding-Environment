
undefined4 FUN_0802a20c(int param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 unaff_lr;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  
  iVar2 = DAT_0802a234;
  local_1c = 0;
  local_2c = param_1 << 8;
  local_28 = param_2 << 8;
  local_18 = param_3 & 0xffff | param_4 << 0x10;
  do {
    bVar1 = true;
    piVar5 = (int *)(iVar2 + 0x150);
    for (uVar6 = 0; uVar4 = FUN_08002164(), uVar6 < uVar4; uVar6 = uVar6 + 1) {
      local_24 = (uint)(*(ushort *)*piVar5 >> 4) << 8;
      local_20 = (*(ushort *)(*piVar5 + 2) & 0xfff) << 8;
      if (((*(byte *)(*piVar5 + 4) & 0x20) == 0) &&
         (iVar3 = FUN_08021ef0(&local_24,&local_2c,&local_1c,&local_18), iVar3 != 0)) {
        bVar1 = false;
      }
      piVar5 = piVar5 + 0x55;
    }
    FUN_080003f0();
  } while (bVar1);
  return unaff_lr;
}

