
undefined8 FUN_08074664(uint param_1,uint param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 unaff_lr;
  uint local_28;
  
  iVar3 = FUN_080020f4();
  iVar12 = iVar3 * 0x154 + DAT_0807479c;
  local_28 = DAT_080747a0;
  uVar7 = 0xffffffff;
  iVar3 = FUN_0800c8d0();
  if (iVar3 != 0) {
    uVar11 = FUN_08002164();
    uVar6 = 0;
    if (uVar11 != 0) {
      iVar3 = 0;
      do {
        cVar1 = *(char *)(iVar3 + DAT_0807479c + 0x70);
        if ((*(char *)(iVar12 + 0x70) != cVar1) && (cVar1 != '\0')) {
          puVar8 = *(ushort **)(iVar3 + DAT_0807479c + 0x150);
          iVar10 = (uint)(*puVar8 >> 4) - (*(int *)(iVar12 + 0x94) >> 8);
          iVar9 = (puVar8[1] & 0xfff) - (*(int *)(iVar12 + 0x98) >> 8);
          uVar4 = FUN_080b9a80(iVar10 * 0x10000 >> 0x10,iVar9 * 0x10000 >> 0x10);
          iVar5 = ((uVar4 & 0xffff) + 0x400 >> 0xc) -
                  (uint)*(ushort *)
                         ((uint)(*(byte *)(*(int *)(iVar12 + 0x150) + 3) >> 4) * 2 + DAT_080747a4);
          sVar2 = (short)iVar5;
          iVar5 = iVar5 * 0x10000;
          if (8 < iVar5 >> 0x10) {
            sVar2 = (short)((uint)iVar5 >> 0x10) + -0x10;
          }
          if (sVar2 < -8) {
            sVar2 = sVar2 + 0x10;
          }
          iVar5 = (int)sVar2;
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          if (iVar5 <= (int)(param_1 & 0xffff)) {
            uVar4 = FUN_080b9a9c(iVar10 * iVar10 + iVar9 * iVar9);
            uVar4 = uVar4 & 0xffff;
            if ((uVar4 < param_2) && (uVar4 < local_28)) {
              uVar7 = uVar6;
              local_28 = uVar4;
            }
          }
        }
        iVar3 = iVar3 + 0x154;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar11);
    }
    if (uVar7 != 0xffffffff) {
      uVar7 = (uint)*(ushort *)(uVar7 * 0x154 + DAT_0807479c);
      goto LAB_080748be;
    }
  }
  local_28 = DAT_080748a8;
  uVar7 = 0xffffffff;
  uVar11 = 0;
  do {
    if (((((*DAT_080748ac & 1 << (uVar11 & 0xff)) != 0) &&
         (iVar3 = *DAT_080748b0 + DAT_080748b4 * uVar11, *(short *)(iVar3 + 0xc) != 0xb)) &&
        (*(short *)(iVar3 + 0x5c) != 0)) && (*(char *)(iVar3 + 0x1dc) != '\0')) {
      iVar5 = *(int *)(iVar3 + 0x14) - *(int *)(iVar12 + 0x94);
      iVar10 = iVar5 >> 8;
      iVar3 = *(int *)(iVar3 + 0x18) - *(int *)(iVar12 + 0x98);
      iVar9 = iVar3 >> 8;
      uVar6 = FUN_080b9a80((int)(short)((uint)iVar5 >> 8),(int)(short)((uint)iVar3 >> 8));
      iVar3 = ((uVar6 & 0xffff) + 0x400 >> 0xc) -
              (uint)*(ushort *)
                     ((uint)(*(byte *)(*(int *)(iVar12 + 0x150) + 3) >> 4) * 2 + DAT_080748b8);
      sVar2 = (short)iVar3;
      iVar3 = iVar3 * 0x10000;
      if (8 < iVar3 >> 0x10) {
        sVar2 = (short)((uint)iVar3 >> 0x10) + -0x10;
      }
      if (sVar2 < -8) {
        sVar2 = sVar2 + 0x10;
      }
      iVar3 = (int)sVar2;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 <= (int)(param_1 & 0xffff)) {
        uVar6 = FUN_080b9a9c(iVar10 * iVar10 + iVar9 * iVar9);
        uVar6 = uVar6 & 0xffff;
        if ((uVar6 < param_2) && (uVar6 < local_28)) {
          uVar7 = uVar11;
          local_28 = uVar6;
        }
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 5);
  if (uVar7 == 0xffffffff) {
    uVar7 = 0xff;
  }
  else {
    uVar7 = (uint)*(ushort *)(*DAT_080748b0 + DAT_080748b4 * uVar7 + 2);
  }
LAB_080748be:
  return CONCAT44(unaff_lr,uVar7);
}

