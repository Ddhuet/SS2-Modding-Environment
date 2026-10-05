
undefined4 FUN_08087ab8(uint param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 unaff_lr;
  int local_28;
  
  uVar6 = param_1 >> 0x10;
  puVar1 = (uint *)FUN_08001494(uVar6 << 5);
  FUN_080b9a88((param_1 & 0xffff) * 0x20 + DAT_08087bc0,puVar1,uVar6 << 3 | 0x4000000);
  uVar12 = 100;
  uVar10 = 0;
  iVar8 = 10;
  iVar11 = 0;
  local_28 = 0x3d0;
  iVar2 = *param_2;
  do {
    if (iVar2 == 0) {
      FUN_08001538(puVar1);
      return unaff_lr;
    }
    puVar5 = (ushort *)((param_1 & 0xffff) * 0x20 + DAT_08087bc0);
    uVar9 = 0;
    iVar8 = iVar8 + -1;
    puVar7 = puVar1;
    if (uVar6 != 0) {
      do {
        *(byte *)puVar5 =
             (byte)*puVar5 & 0xe0 | (byte)((int)((*puVar7 & 0x1f) * uVar12) >> 10) & 0x1f;
        *puVar5 = (ushort)DAT_08087bc4 & *puVar5 |
                  (ushort)(((int)(((*puVar7 & 0x3ff) >> 5) * uVar12) >> 10 & 0x1fU) << 5);
        *(byte *)((int)puVar5 + 1) =
             *(byte *)((int)puVar5 + 1) & 0x83 |
             (byte)(((int)(((*puVar7 & 0x7fff) >> 10) * uVar12) >> 10 & 0x1fU) << 2);
        uVar9 = uVar9 + 1;
        puVar5 = puVar5 + 1;
        puVar7 = (uint *)((int)puVar7 + 2);
      } while (uVar9 < uVar6 << 4);
    }
    FUN_08000b38();
    FUN_080003f0();
    uVar12 = local_28 +
             ((uint)((int)*(short *)(DAT_08087bc8 + uVar10 * 2) * (0x400 - local_28)) >> 8) & 0xffff
    ;
    if (iVar11 == 1) {
      uVar10 = uVar10 + 0x10 & 0xffff;
      local_28 = 0x3c8;
    }
    else if (iVar11 == 0) {
      uVar10 = uVar10 + 0x30 & 0xffff;
      local_28 = 0x3d0;
    }
    else if (iVar11 == 2) {
      uVar10 = uVar10 + 4 & 0xffff;
      local_28 = 0x380;
    }
    if (0x100 < uVar10) {
      uVar10 = 0;
    }
    if (iVar8 == -1) {
      iVar11 = FUN_080baaf4(*DAT_08087c28,3);
      if (iVar11 == 1) {
        uVar3 = FUN_080008c8();
        uVar4 = 10;
      }
      else if (iVar11 == 0) {
        uVar3 = FUN_080008c8();
        uVar4 = 10;
      }
      else {
        if (iVar11 != 2) goto LAB_08087c48;
        uVar3 = FUN_080008c8();
        uVar4 = 0x1e;
      }
      iVar8 = FUN_080baaf4(uVar3,uVar4);
    }
LAB_08087c48:
    iVar2 = *param_2;
  } while( true );
}

