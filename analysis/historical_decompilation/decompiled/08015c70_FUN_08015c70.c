
undefined4 FUN_08015c70(byte *param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 unaff_lr;
  undefined2 local_2c [2];
  int local_28;
  ushort *local_24;
  
  iVar8 = param_2 + param_3 * 8;
  uVar4 = DAT_08015d1c & *(ushort *)(iVar8 + 8);
  iVar6 = uVar4 - 1;
  local_28 = param_2;
  iVar2 = FUN_0800c780();
  if (iVar2 != 0) {
    iVar6 = uVar4 + 0xc4;
  }
  iVar2 = iVar6 * 0x24c + DAT_08015d20;
  param_1[0x1fc] = param_1[0x1fc] & 0xf0 | *param_1 & 0xf;
  param_1[2] = 4;
  param_1[3] = 0;
  *(int *)(param_1 + 0x14) = (int)*(short *)(iVar8 + 10) << 0xb;
  *(int *)(param_1 + 0x18) = (int)*(short *)(iVar8 + 0xc) << 0xb;
  *(int *)(param_1 + 0x24) = (int)*(short *)(iVar8 + 10) << 3;
  *(int *)(param_1 + 0x28) = (int)*(short *)(iVar8 + 0xc) << 3;
  *(int *)(param_1 + 0x2c) = local_28;
  FUN_080babb4(param_1 + 0x204,iVar2);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(iVar8 + 0xe);
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x54) = DAT_08015d24;
  iVar2 = FUN_0800c61c();
  if (iVar2 == 0) {
    uVar3 = *(undefined2 *)(DAT_08015e3c + 0x90);
  }
  else {
    uVar3 = (undefined2)*(undefined4 *)(*DAT_08015d28 + 0x40);
  }
  *(undefined2 *)(param_1 + 0x48) = uVar3;
  param_1[DAT_08015e40] = 0;
  param_1[DAT_08015e44] = 1;
  param_1[0x1fc] = param_1[0x1fc] & 0xf;
  param_1[0x1fe] = 0;
  param_1[DAT_08015e48] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(short *)(param_1 + 0x76) = *(short *)param_1 + 1;
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(local_28 + 0x32);
  local_24 = (ushort *)(param_1 + 0x7a);
  *local_24 = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x1dc] = 2;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  uVar4 = 0;
  pbVar7 = param_1 + 0x94;
  pbVar5 = param_1 + 0x8c;
  do {
    *(short *)pbVar5 = (short)DAT_08015e4c;
    local_2c[0] = 0;
    FUN_080b9a88(local_2c,pbVar7,DAT_08015e50);
    pbVar7 = pbVar7 + 0x28;
    pbVar5 = pbVar5 + 0x28;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  local_28 = local_28 + param_3 * 8;
  if ((*(ushort *)(local_28 + 8) & 0x8000) != 0) {
    *local_24 = *local_24 | 2;
  }
  uVar1 = *(ushort *)(local_28 + 8);
  if ((uVar1 & 0x4000) != 0) {
    *local_24 = *local_24 | 4;
    param_1[DAT_08015e44] = 0;
    param_1[DAT_08015e40] = 0xff;
  }
  if ((uVar1 & 0x2000) != 0) {
    *local_24 = *local_24 | 8;
  }
  return unaff_lr;
}

