
undefined4 FUN_0802a7d0(uint param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_lr;
  ushort local_ac [16];
  ushort local_8c;
  int local_2c;
  uint local_28;
  ushort *local_24;
  
  iVar4 = FUN_08006d98(param_1 | 0x140000);
  uVar8 = DAT_0802a83c;
  uVar10 = 0;
  local_2c = 0;
  local_28 = 0;
  uVar2 = (ushort)DAT_0802a83c;
  uVar1 = *(ushort *)(iVar4 + 4);
  puVar5 = (ushort *)(iVar4 + 4);
  uVar6 = 0;
  local_ac[0] = uVar2;
  local_8c = uVar2;
  do {
    if (uVar1 == uVar8) {
      iVar4 = 0xb3;
      do {
        uVar6 = 0;
        iVar4 = iVar4 + -1;
        if (uVar10 != 0) {
          uVar8 = 0xf0000;
          puVar5 = local_ac;
          do {
            FUN_08019f30(puVar5,1,uVar8 >> 0x10);
            uVar8 = uVar8 + 0x20000;
            puVar5 = (ushort *)((int)puVar5 + 0x20);
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar10);
        }
        FUN_080003f0();
      } while (iVar4 != -1);
      FUN_0801a23c(0xf,4);
      FUN_080003f0();
      return unaff_lr;
    }
    uVar9 = uVar6 + 1;
    if (5 < uVar6) {
      uVar6 = (uint)*puVar5;
      if (uVar6 == DAT_0802a840) {
        local_2c = 0;
        uVar10 = uVar10 + 1;
        if (uVar10 < 2) {
          local_ac[uVar10 * 0x10] = uVar2;
        }
        else {
          uVar10 = 0;
          local_ac[0] = uVar2;
          local_8c = uVar2;
        }
        local_24 = puVar5 + 1;
      }
      else if (uVar6 == DAT_0802a8a4) {
        local_ac[uVar10 * 0x10 + local_2c] = *(ushort *)(local_28 * 2 + DAT_0802a8a8);
        local_2c = local_2c + 1;
        local_ac[uVar10 * 0x10 + local_2c] = uVar2;
        local_28 = local_28 + 1 & 0xffff;
        local_24 = puVar5;
        if (*(short *)(local_28 * 2 + DAT_0802a8a8) == 0) {
          local_28 = 0;
          local_2c = local_2c + -1;
          local_24 = puVar5 + 1;
        }
      }
      else if (uVar6 == DAT_0802a8c8) {
        uVar10 = 0;
        local_2c = 0;
        local_24 = puVar5 + 3;
        sVar3 = 0xb4;
        local_ac[0] = uVar2;
        local_8c = uVar2;
        do {
          FUN_080003f0();
          iVar4 = FUN_080021a8();
          if (iVar4 != 0) break;
          sVar3 = sVar3 + -1;
        } while (sVar3 != 0);
      }
      else {
        local_ac[uVar10 * 0x10 + local_2c] = *puVar5;
        local_2c = local_2c + 1;
        local_ac[uVar10 * 0x10 + local_2c] = uVar2;
        local_24 = puVar5 + 1;
      }
      uVar9 = 0;
      puVar5 = local_24;
    }
    uVar6 = 0;
    uVar7 = 0xf0000;
    local_24 = puVar5;
    puVar5 = local_ac;
    do {
      FUN_08019f30(puVar5,1,uVar7 >> 0x10);
      uVar7 = uVar7 + 0x20000;
      puVar5 = (ushort *)((int)puVar5 + 0x20);
      uVar6 = uVar6 + 1;
    } while (uVar6 < 2);
    FUN_080003f0();
    uVar1 = *local_24;
    puVar5 = local_24;
    uVar6 = uVar9;
  } while( true );
}

