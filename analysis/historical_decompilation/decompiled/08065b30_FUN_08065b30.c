
undefined4 FUN_08065b30(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined1 uVar2;
  short *psVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 unaff_lr;
  byte local_30 [12];
  int local_24;
  
  pbVar5 = local_30;
  pbVar6 = local_30;
  param_5 = param_5 & 0xff;
  if (param_3 < 0) {
    param_3 = DAT_08065be8;
  }
  local_24 = param_3;
  uVar7 = 0;
  puVar9 = (undefined4 *)((10 - param_5) * 4 + DAT_08065bec);
  if (param_5 != 0) {
    do {
      uVar2 = FUN_08000498(&local_24,*puVar9);
      *pbVar5 = uVar2;
      uVar7 = uVar7 + 1;
      pbVar5 = pbVar5 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar7 < param_5);
  }
  iVar1 = DAT_08065bf0;
  bVar4 = false;
  iVar8 = (param_1 + 1) - param_5;
  uVar7 = 0;
  if (param_5 != 0) {
    psVar3 = (short *)((param_4 & 0xff) * 2 + DAT_08065bf4);
    do {
      if (((bVar4) || (*pbVar6 != 0)) || (uVar7 == param_5 - 1)) {
        bVar4 = true;
        *(ushort *)(iVar8 * 2 + param_2 * 0x40 + iVar1) = *psVar3 + (ushort)*pbVar6;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 1;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 < param_5);
  }
  FUN_0801a23c(param_2,1);
  return unaff_lr;
}

