
void FUN_0800a804(uint *param_1,uint *param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  short *psVar8;
  short *psVar9;
  
  iVar3 = DAT_0800a888;
  uVar4 = *param_1;
  uVar5 = *param_2;
  if ((*(uint *)(DAT_0800a888 + 0x9c) & 0x10) == 0) {
    *(short *)(DAT_0800a888 + 0x7c) =
         (short)((uVar4 & 0xffffff) >> 8) + *(short *)(DAT_0800a888 + 0x80) + -0x78;
    *(short *)(iVar3 + 0x7e) = (short)((uVar5 & 0xffffff) >> 8) + *(short *)(iVar3 + 0x82) + -0x60;
  }
  if (param_3 == 0) {
    iVar6 = (*(ushort *)(iVar3 + 0x70) - 0x1e) * 8;
    if (iVar6 < *(short *)(iVar3 + 0x7c)) {
      *(short *)(iVar3 + 0x7c) = (short)iVar6;
    }
    sVar1 = *(short *)(iVar3 + 0x7e);
    puVar7 = (ushort *)(iVar3 + 0x72);
  }
  else {
    iVar6 = (*(ushort *)(iVar3 + 0x74) - 0x1e) * 8;
    if (iVar6 < *(short *)(iVar3 + 0x7c)) {
      *(short *)(iVar3 + 0x7c) = (short)iVar6;
    }
    sVar1 = *(short *)(iVar3 + 0x7e);
    puVar7 = (ushort *)(iVar3 + 0x76);
  }
  iVar6 = (*puVar7 - 0x14) * 8;
  if (iVar6 < sVar1) {
    *(short *)(iVar3 + 0x7e) = (short)iVar6;
  }
  psVar8 = (short *)(iVar3 + 0x7c);
  if (*psVar8 < 0) {
    *psVar8 = 0;
  }
  psVar9 = (short *)(iVar3 + 0x7e);
  if (*psVar9 < 0) {
    *psVar9 = 0;
  }
  if ((*(uint *)(iVar3 + 0x9c) & 0x10) == 0) {
    *(short *)(iVar3 + 0x88) = *psVar8 - *(short *)(iVar3 + 0x80);
    *(short *)(iVar3 + 0x8a) = *psVar9 - *(short *)(iVar3 + 0x82);
  }
  else {
    *psVar8 = *(short *)(iVar3 + 0x88) + *(short *)(iVar3 + 0x80);
    *psVar9 = *(short *)(iVar3 + 0x8a) + *(short *)(iVar3 + 0x82);
  }
  uVar2 = *param_2;
  *param_1 = (uint)(byte)*param_1 + ((int)(((uVar4 & 0xffffff) >> 8) << 0x10) >> 8);
  *param_2 = (uint)(byte)uVar2 + ((int)(((uVar5 & 0xffffff) >> 8) << 0x10) >> 8);
  return;
}

