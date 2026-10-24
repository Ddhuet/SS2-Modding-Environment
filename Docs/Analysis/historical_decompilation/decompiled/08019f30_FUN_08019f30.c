
undefined4 FUN_08019f30(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ushort uVar10;
  undefined4 unaff_lr;
  
  param_3 = param_3 & 0xffff;
  iVar8 = 0;
  uVar9 = 0;
  uVar7 = param_3;
  do {
    pcVar5 = (char *)(uVar7 + uVar9 + DAT_08019f64);
    if (*pcVar5 == '\0') {
      *pcVar5 = '\x01';
      iVar8 = iVar8 + 1;
    }
    else {
      if (iVar8 != 0) {
        FUN_08001348(uVar7 * 0x40 + DAT_0801a0a8,uVar7 * 0x40 + DAT_0801a0a4,iVar8 << 6);
        uVar7 = uVar7 + iVar8;
        iVar8 = 0;
      }
      uVar7 = uVar7 + 1;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 2);
  if (iVar8 != 0) {
    FUN_08001348(uVar7 * 0x40 + DAT_0801a0a8,uVar7 * 0x40 + DAT_0801a0a4,iVar8 << 6);
  }
  uVar10 = (*DAT_0801a0ac >> 5) + 0x180;
  if ((*param_1 != DAT_0801a0b0) && ((*param_1 & 0x8000) == 0)) {
    iVar8 = (param_3 + 1) * 0x40;
    do {
      param_2 = param_2 & 0xffff;
      uVar1 = *param_1;
      iVar3 = *(int *)(((uVar1 - 1 & 0xffff) >> 8) * 4 + DAT_0801a0b4);
      *(ushort *)(param_2 * 2 + param_3 * 0x40 + DAT_0801a0a8) = uVar10 | 0xf000;
      iVar6 = (param_2 + 1) * 2;
      *(ushort *)(iVar6 + param_3 * 0x40 + DAT_0801a0a8) = uVar10 + 1 | 0xf000;
      uVar4 = uVar10 + 3;
      *(ushort *)(param_2 * 2 + iVar8 + DAT_0801a0a8) = uVar10 + 2 | 0xf000;
      uVar10 = uVar10 + 4;
      *(ushort *)(iVar6 + iVar8 + DAT_0801a0a8) = uVar4 | 0xf000;
      puVar2 = DAT_0801a0ac;
      FUN_08001348(iVar3 + (((uVar1 - 1) * 0x10000 & 0xff0000) >> 9),
                   (uint)*DAT_0801a0ac + DAT_0801a0b8,0x80);
      *puVar2 = *puVar2 + 0x80;
      param_2 = param_2 + 2;
      param_1 = param_1 + 1;
      if (*param_1 == DAT_0801a0b0) {
        return unaff_lr;
      }
    } while ((*param_1 & 0x8000) == 0);
  }
  return unaff_lr;
}

