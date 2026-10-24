
undefined8 FUN_080748d0(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 unaff_lr;
  uint local_28;
  int local_24;
  
  local_28 = DAT_080749f0;
  uVar6 = 0xffffffff;
  iVar3 = FUN_0800c8d0();
  if (iVar3 != 0) {
    uVar11 = FUN_08002164();
    uVar5 = 0;
    if (uVar11 != 0) {
      local_24 = 0;
      do {
        cVar1 = *(char *)(local_24 + DAT_080749f4 + 0x70);
        if ((*(char *)(param_1 + 0x70) != cVar1) && (cVar1 != '\0')) {
          puVar7 = *(ushort **)(local_24 + DAT_080749f4 + 0x150);
          puVar8 = *(ushort **)(param_1 + 0x150);
          iVar10 = (uint)(*puVar7 >> 4) - (uint)(*puVar8 >> 4);
          iVar9 = (puVar7[1] & 0xfff) - (puVar8[1] & 0xfff);
          uVar4 = FUN_080b9a80(iVar10,iVar9);
          iVar3 = ((uVar4 & 0xffff) + 0x400 >> 0xc) -
                  (uint)*(ushort *)
                         ((uint)(*(byte *)(*(int *)(param_1 + 0x150) + 3) >> 4) * 2 + DAT_080749f8);
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
          if (iVar3 <= (int)(param_2 & 0xffff)) {
            uVar4 = FUN_080b9a9c(iVar10 * iVar10 + iVar9 * iVar9);
            uVar4 = uVar4 & 0xffff;
            if ((uVar4 < param_3) && (uVar4 < local_28)) {
              uVar6 = uVar5;
              local_28 = uVar4;
            }
          }
        }
        local_24 = local_24 + 0x154;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar11);
    }
    if (uVar6 != 0xffffffff) {
      uVar6 = (uint)*(ushort *)(uVar6 * 0x154 + DAT_080749f4);
      goto LAB_08074b12;
    }
  }
  local_28 = DAT_08074afc;
  uVar6 = 0xffffffff;
  uVar11 = 0;
  do {
    if (((((*DAT_08074b00 & 1 << (uVar11 & 0xff)) != 0) &&
         (iVar3 = *DAT_08074b04 + DAT_08074b08 * uVar11, *(short *)(iVar3 + 0xc) != 0xb)) &&
        (*(short *)(iVar3 + 0x5c) != 0)) && (*(char *)(iVar3 + 0x1dc) != '\0')) {
      puVar7 = *(ushort **)(param_1 + 0x150);
      iVar10 = (*(int *)(iVar3 + 0x14) >> 8) - (uint)(*puVar7 >> 4);
      iVar9 = (*(int *)(iVar3 + 0x18) >> 8) - (puVar7[1] & 0xfff);
      uVar5 = FUN_080b9a80(iVar10 * 0x10000 >> 0x10,iVar9 * 0x10000 >> 0x10);
      iVar3 = ((uVar5 & 0xffff) + 0x400 >> 0xc) -
              (uint)*(ushort *)
                     ((uint)(*(byte *)(*(int *)(param_1 + 0x150) + 3) >> 4) * 2 + DAT_08074b0c);
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
      if (iVar3 <= (int)(param_2 & 0xffff)) {
        uVar5 = FUN_080b9a9c(iVar10 * iVar10 + iVar9 * iVar9);
        uVar5 = uVar5 & 0xffff;
        if ((uVar5 < param_3) && (uVar5 < local_28)) {
          uVar6 = uVar11;
          local_28 = uVar5;
        }
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 5);
  if (uVar6 == 0xffffffff) {
    uVar6 = 0xff;
  }
  else {
    uVar6 = (uint)*(ushort *)(*DAT_08074b04 + DAT_08074b08 * uVar6 + 2);
  }
LAB_08074b12:
  return CONCAT44(unaff_lr,uVar6);
}

