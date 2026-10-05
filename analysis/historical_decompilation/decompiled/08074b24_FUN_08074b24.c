
undefined8 FUN_08074b24(uint param_1,short param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 unaff_lr;
  uint local_24;
  
  iVar1 = FUN_0800c8d0();
  if (iVar1 != 0) {
    local_24 = DAT_08074bf4;
    uVar4 = 0xffffffff;
    uVar2 = FUN_08002164();
    uVar7 = 0;
    if (uVar2 != 0) {
      puVar5 = (undefined4 *)(DAT_08074bf8 + 0x150);
      pcVar8 = (char *)(DAT_08074bf8 + 0x70);
      do {
        if ((((param_1 & 0xffff) != uVar7) &&
            (*(char *)((param_1 & 0xffff) * 0x154 + DAT_08074bf8 + 0x70) != *pcVar8)) &&
           (*pcVar8 != '\0')) {
          iVar6 = (uint)(*(ushort *)*puVar5 >> 4) - (param_3 >> 8);
          iVar1 = (((ushort *)*puVar5)[1] & 0xfff) - (param_4 >> 8);
          uVar3 = FUN_080b9a9c(iVar6 * iVar6 + iVar1 * iVar1);
          uVar3 = uVar3 & 0xffff;
          if (((int)uVar3 < param_5) && (uVar3 < local_24)) {
            uVar4 = uVar7;
            local_24 = uVar3;
          }
        }
        puVar5 = puVar5 + 0x55;
        pcVar8 = pcVar8 + 0x154;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar2);
    }
    if (uVar4 != 0xffffffff) {
      uVar4 = (uint)*(ushort *)(uVar4 * 0x154 + DAT_08074bf8);
      goto LAB_08074cae;
    }
  }
  local_24 = DAT_08074c9c;
  uVar4 = 0xffffffff;
  uVar2 = 0;
  do {
    if ((((*DAT_08074ca0 & 1 << (uVar2 & 0xff)) != 0) &&
        (iVar1 = *DAT_08074ca4 + DAT_08074ca8 * uVar2, *(short *)(iVar1 + 2) != param_2)) &&
       ((*(short *)(iVar1 + 0xc) != 0xb &&
        ((*(short *)(iVar1 + 0x5c) != 0 && (*(char *)(iVar1 + 0x1dc) != '\0')))))) {
      iVar6 = *(int *)(iVar1 + 0x14) - param_3 >> 8;
      iVar1 = *(int *)(iVar1 + 0x18) - param_4 >> 8;
      uVar7 = FUN_080b9a9c(iVar6 * iVar6 + iVar1 * iVar1);
      uVar7 = uVar7 & 0xffff;
      if (((int)uVar7 < param_5) && (uVar7 < local_24)) {
        uVar4 = uVar2;
        local_24 = uVar7;
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 5);
  if (uVar4 == 0xffffffff) {
    uVar4 = 0xff;
  }
  else {
    uVar4 = (uint)*(ushort *)(*DAT_08074ca4 + DAT_08074ca8 * uVar4 + 2);
  }
LAB_08074cae:
  return CONCAT44(unaff_lr,uVar4);
}

