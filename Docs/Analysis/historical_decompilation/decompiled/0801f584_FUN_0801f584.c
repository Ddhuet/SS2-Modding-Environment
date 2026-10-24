
undefined4 FUN_0801f584(ushort *param_1,undefined2 *param_2,int param_3,uint param_4)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 unaff_lr;
  uint local_2c;
  uint local_28;
  undefined2 *local_24;
  
  if ((param_4 & 1) == 0) {
    uVar3 = FUN_0801e73c(param_1,param_2,param_3,0);
    uVar2 = DAT_0801f770;
    local_28 = local_28 & DAT_0801f770 | uVar3 & 0xffff;
    local_2c = local_2c & DAT_0801f778 | (uint)*(byte *)(param_3 + DAT_0801f774) << 0x10;
    uVar3 = FUN_080b9a80((int)(((uint)(**(ushort **)(param_2 + 0xa8) >> 4) -
                               (*(int *)(param_1 + 0x4a) >> 8)) * 0x10000) >> 0x10,
                         (int)((((*(ushort **)(param_2 + 0xa8))[1] & 0xfff) -
                               (*(int *)(param_1 + 0x4c) >> 8)) * 0x10000) >> 0x10);
    local_2c = local_2c & DAT_0801f780 |
               (uint)*(byte *)(((uVar3 & 0xffff) >> 0xc) + DAT_0801f77c) << 0x18;
    if ((param_1[0x13] == 5) && (param_1[0xb] == 8)) {
      uVar3 = FUN_080ba8a4((local_28 & 0xffff) *
                           (((*(uint *)(*(int *)(param_1 + 0xa8) + 4) & 0x1ffff) >> 0xe) + 5),10);
      local_28 = local_28 & uVar2 | uVar3 & 0xffff;
    }
  }
  else {
    uVar2 = FUN_0801e73c(param_1,param_2,param_3,1);
    local_28 = local_28 & DAT_0801f5d0 | uVar2 & 0xffff | 0x8000;
    local_2c = local_2c & DAT_0801f5d4 & DAT_0801f5d8 & DAT_0801f5dc;
  }
  local_24 = param_2 + 0x2a;
  FUN_080699ec(&local_2c,local_24,1,*(undefined2 *)(param_3 + 0x194),*param_2);
  uVar2 = DAT_0801f784;
  puVar5 = param_1 + 0x66;
  sVar1 = FUN_080ba8a4((local_28 & 0xffff & DAT_0801f784) * (int)(char)param_1[0x39],100);
  *puVar5 = *puVar5 + sVar1;
  puVar4 = param_1 + 0x65;
  sVar1 = FUN_080ba8a4((int)*(char *)((int)param_1 + 0x73) * (local_28 & 0xffff & uVar2),100);
  *puVar4 = sVar1 * 10 + *puVar4;
  if ((short)param_1[0x35] < (short)*puVar5) {
    *puVar5 = param_1[0x35];
  }
  if ((short)param_1[0x34] < (short)*puVar4) {
    *puVar4 = param_1[0x34];
  }
  *(undefined4 *)(param_2 + (uint)*param_1 * 2 + 0x80) = *(undefined4 *)(param_1 + 0x72);
  local_2c = CONCAT31(local_2c._1_3_,(char)*param_2);
  FUN_0806671c();
  FUN_080696dc(local_24,DAT_0801f788 & local_28 & 0xffff,0,*param_1,*param_2,
               *(undefined2 *)(param_3 + 0x194));
  return unaff_lr;
}

