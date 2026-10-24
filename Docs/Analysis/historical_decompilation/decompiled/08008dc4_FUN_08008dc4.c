
undefined4 FUN_08008dc4(ushort param_1,short *param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined4 unaff_lr;
  int local_2c;
  int local_28;
  undefined4 local_24;
  
  iVar3 = DAT_08008ed4;
  uVar4 = (uint)param_1;
  uVar1 = param_2[1];
  sVar2 = *param_2;
  iVar7 = uVar4 * 0x18;
  puVar9 = (undefined2 *)(iVar7 + DAT_08008ed4);
  puVar9[10] = param_1;
  *(uint *)(iVar3 + 0xc + iVar7) = (int)param_2 + (int)sVar2 * (uint)uVar1 * (3 - uVar4) * 2 + 0x10;
  puVar9[8] = *param_2;
  puVar9[9] = param_2[1];
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[0xb] = 1;
  local_24 = *(undefined4 *)(uVar4 * 4 + DAT_08008ed8);
  local_2c = (param_3 & 0xffff) << 0xb;
  local_28 = (param_4 & 0xffff) << 0xb;
  FUN_0800a804(&local_2c,&local_28,0);
  iVar5 = (int)*(short *)(iVar3 + 0x7c);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 7;
  }
  *puVar9 = (short)(iVar5 >> 3);
  puVar6 = (ushort *)(iVar3 + 0x7e);
  iVar5 = (int)(short)*puVar6;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 7;
  }
  puVar9[1] = (short)(iVar5 >> 3);
  uVar8 = (uint)*puVar6;
  if ((int)uVar8 < (short)*puVar6 + 0x100) {
    do {
      FUN_08008fc8(iVar7 + iVar3,(int)*(short *)(iVar3 + 0x7c),(int)(short)uVar8);
      uVar8 = uVar8 + 8 & 0xffff;
    } while ((int)uVar8 < (short)*puVar6 + 0x100);
  }
  FUN_08001348(local_24,(*(ushort *)(DAT_08008edc + uVar4 * 2) >> 8 & 0x1f) * 0x800 + 0x6000000,
               0x800);
  FUN_080003f0();
  return unaff_lr;
}

