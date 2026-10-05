
undefined4 FUN_0805ce60(uint param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  uint *puVar9;
  uint *puVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  ushort *puVar15;
  undefined4 uVar16;
  ushort *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 unaff_lr;
  uint local_a8 [24];
  uint local_48;
  uint local_44;
  short *local_40;
  short *local_3c;
  ushort *local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  short *local_24;
  
  puVar10 = local_a8;
  puVar18 = local_a8;
  puVar9 = local_a8;
  puVar19 = local_a8;
  local_48 = param_1;
  iVar3 = FUN_0800c780();
  if (iVar3 == 0) {
    uVar20 = 0;
    iVar3 = *DAT_0805cef4;
    local_40 = (short *)(iVar3 + 0x798);
    local_3c = (short *)(iVar3 + DAT_0805cef8);
    local_38 = (ushort *)(iVar3 + DAT_0805cefc);
  }
  else {
    uVar20 = 10;
    iVar3 = *DAT_0805ce94;
    local_40 = (short *)(iVar3 + DAT_0805ce98);
    local_3c = (short *)(iVar3 + DAT_0805ce9c);
    local_38 = (ushort *)(iVar3 + DAT_0805cea0);
  }
  uVar4 = FUN_080591bc();
  uVar12 = 1;
  do {
    if ((1 << (uVar12 & 0xff) & uVar4) != 0) {
      uVar20 = uVar20 + 1;
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 10);
  iVar3 = FUN_0800c780();
  if (iVar3 == 0) {
    if (9 < uVar20) {
      uVar20 = 9;
    }
  }
  else if (0x13 < uVar20) {
    uVar20 = 0x13;
  }
  local_44 = FUN_0801dc54();
  local_44 = local_44 & 0xff;
  iVar3 = 0;
  local_34 = uVar20 * 2;
  uVar12 = 0;
  uVar4 = 0;
  psVar7 = (short *)(local_44 * 0x3c0 + uVar20 * 0x30 + DAT_0805cf70);
  psVar8 = local_40;
  do {
    *psVar8 = *psVar7;
    psVar8[1] = psVar7[1];
    psVar8[2] = 0;
    *(undefined1 *)(psVar8 + 3) = 0;
    *(undefined1 *)((int)psVar8 + 7) = 0;
    *(undefined1 *)(psVar8 + 4) = 0;
    if (*psVar7 != 0) {
      if (*psVar7 == -1) {
        *psVar8 = 0;
        iVar3 = iVar3 + 1;
      }
      else {
        *puVar10 = uVar4;
        local_a8[uVar12 * 2 + 1] = 0;
        puVar10 = puVar10 + 2;
        uVar12 = uVar12 + 1;
      }
    }
    psVar8 = psVar8 + 8;
    psVar7 = psVar7 + 2;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xc);
  uVar5 = FUN_080008c8();
  uVar4 = FUN_080baaf4(uVar5,iVar3 + 1);
  local_30 = local_44 << 4;
  if (uVar4 != 0) {
    uVar13 = 0;
    if (uVar4 != 0) {
      do {
        uVar5 = FUN_080008c8();
        iVar3 = FUN_080baaf4(uVar5,uVar12);
        if (local_a8[iVar3 * 2 + 1] == 0) {
          local_a8[iVar3 * 2 + 1] = 1;
        }
        else {
          uVar13 = uVar13 - 1;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar4);
    }
    uVar4 = 0;
    if (uVar12 != 0) {
      uVar5 = 0;
      psVar8 = local_40 + 2;
      local_24 = local_40 + 0x48;
      do {
        if (local_a8[uVar4 * 2 + 1] != 0) {
          psVar7 = local_40 + *puVar18 * 8;
          uVar14 = *(undefined4 *)(psVar7 + 2);
          uVar16 = *(undefined4 *)(psVar7 + 4);
          *(undefined4 *)local_24 = *(undefined4 *)psVar7;
          *(undefined4 *)(local_24 + 2) = uVar14;
          *(undefined4 *)(local_24 + 4) = uVar16;
          *(undefined4 *)(local_24 + 6) = *(undefined4 *)(psVar7 + 6);
          *psVar8 = 0;
          uVar2 = (undefined1)uVar5;
          *(undefined1 *)(psVar8 + 1) = uVar2;
          *(undefined1 *)((int)psVar8 + 3) = uVar2;
          *(undefined1 *)(psVar8 + 2) = uVar2;
          local_2c = uVar5;
          FUN_0805c884(local_24,1);
          local_24 = local_24 + 8;
          uVar5 = local_2c;
        }
        psVar8 = psVar8 + 8;
        puVar18 = puVar18 + 2;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar12);
    }
  }
  iVar3 = 0;
  uVar12 = 0;
  uVar4 = 0;
  psVar7 = (short *)((local_30 - local_44) * 0x40 + (local_34 + uVar20) * 0x10 + DAT_0805d07c);
  psVar8 = local_3c;
  do {
    *psVar8 = *psVar7;
    psVar8[1] = psVar7[1];
    psVar8[2] = 0;
    *(undefined1 *)(psVar8 + 3) = 0;
    *(undefined1 *)((int)psVar8 + 7) = 0;
    *(undefined1 *)(psVar8 + 4) = 0;
    if (*psVar7 != 0) {
      if (*psVar7 == -1) {
        *psVar8 = 0;
        iVar3 = iVar3 + 1;
      }
      else {
        *puVar9 = uVar4;
        local_a8[uVar12 * 2 + 1] = 0;
        puVar9 = puVar9 + 2;
        uVar12 = uVar12 + 1;
      }
    }
    psVar8 = psVar8 + 8;
    psVar7 = psVar7 + 2;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xc);
  uVar5 = FUN_080008c8();
  uVar20 = FUN_080baaf4(uVar5,iVar3 + 1);
  if (uVar20 != 0) {
    uVar4 = 0;
    if (uVar20 != 0) {
      do {
        uVar5 = FUN_080008c8();
        iVar3 = FUN_080baaf4(uVar5,uVar12);
        if (local_a8[iVar3 * 2 + 1] == 0) {
          local_a8[iVar3 * 2 + 1] = 1;
        }
        else {
          uVar4 = uVar4 - 1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar20);
    }
    uVar20 = 0;
    if (uVar12 != 0) {
      uVar5 = 0;
      psVar7 = local_3c + 2;
      psVar8 = local_3c + 0x48;
      do {
        if (local_a8[uVar20 * 2 + 1] != 0) {
          psVar6 = local_3c + *puVar19 * 8;
          uVar14 = *(undefined4 *)(psVar6 + 2);
          uVar16 = *(undefined4 *)(psVar6 + 4);
          *(undefined4 *)psVar8 = *(undefined4 *)psVar6;
          *(undefined4 *)(psVar8 + 2) = uVar14;
          *(undefined4 *)(psVar8 + 4) = uVar16;
          *(undefined4 *)(psVar8 + 6) = *(undefined4 *)(psVar6 + 6);
          *psVar7 = 0;
          uVar2 = (undefined1)uVar5;
          *(undefined1 *)(psVar7 + 1) = uVar2;
          *(undefined1 *)((int)psVar7 + 3) = uVar2;
          *(undefined1 *)(psVar7 + 2) = uVar2;
          local_2c = uVar5;
          FUN_0805c884(psVar8,1);
          psVar8 = psVar8 + 8;
          uVar5 = local_2c;
        }
        psVar7 = psVar7 + 8;
        puVar19 = puVar19 + 2;
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar12);
    }
  }
  uVar20 = DAT_0805d194;
  if (1 < local_48) {
    local_48 = 0;
  }
  uVar4 = 0;
  local_28 = 0;
  puVar15 = (ushort *)(local_48 * 0x30 + DAT_0805d190);
  puVar11 = local_38;
  puVar17 = local_38;
  do {
    uVar1 = *puVar15;
    *puVar11 = uVar1;
    puVar11[1] = puVar15[1];
    if (uVar1 == 2) {
      uVar2 = (undefined1)local_28;
      *(undefined1 *)(puVar11 + 4) = uVar2;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = uVar2;
      *(undefined1 *)((int)puVar11 + 7) = uVar2;
      *(undefined1 *)((int)puVar11 + 9) = uVar2;
    }
    if (*puVar11 == uVar20) {
      uVar12 = FUN_080008c8();
      if ((uVar12 & 1) == 0) {
        *puVar11 = 0;
        puVar11[1] = 0;
      }
      else {
        FUN_0805cba4(puVar17,0x14,local_48);
      }
    }
    puVar11 = puVar11 + 8;
    puVar15 = puVar15 + 2;
    puVar17 = puVar17 + 8;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xc);
  return unaff_lr;
}

