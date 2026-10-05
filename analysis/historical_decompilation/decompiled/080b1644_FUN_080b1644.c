
undefined4 FUN_080b1644(byte *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  undefined2 uVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  undefined4 *unaff_r9;
  undefined4 unaff_lr;
  undefined4 auStack_f0 [13];
  undefined4 auStack_bc [13];
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_6c [24];
  short local_54;
  short local_52;
  byte *local_50;
  int local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  byte *local_28;
  byte *local_24;
  
  *DAT_080b17d8 = param_1;
  local_50 = param_1 + 0x204;
  FUN_08015c70(param_1,DAT_080b17dc,0);
  FUN_08019aa8(local_50);
  FUN_08019c08(param_1);
  FUN_08065784(auStack_f0,DAT_080b17e0,5,0xffffffff,0);
  FUN_08065784(auStack_bc,DAT_080b17e4,5,0xffffffff,0);
  FUN_08065784(local_88,DAT_080b17e8,5,0xffffffff,0);
  sVar7 = *(short *)(param_1 + DAT_080b17ec);
  *(short *)(param_1 + 0x1d6) = sVar7 * 3;
  *(short *)(param_1 + 0x5c) = sVar7 * 3;
  *(short *)(param_1 + 0x1d4) = *(short *)(param_1 + 0x37c) * 0x14;
  *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x37c) * 0x14;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_44 = 0;
  local_40 = DAT_080b17f0;
  local_38 = 0;
  local_34 = 0;
  param_1[DAT_080b17f4] = 2;
  param_1[0x1fe] = 2;
  param_1[0x3a0] = 0xb3;
  param_1[0x3a1] = 0;
  iVar8 = FUN_08006d98(0xb00b3);
  local_48 = (uint)*(ushort *)(iVar8 + 0x174);
  param_1[0x39c] = 2;
  param_1[0x39d] = 0;
  param_1[DAT_080b17f8] = 0;
  param_1[0x50] = 1;
  iVar8 = DAT_080b17fc;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  uVar11 = 0;
  pbVar16 = param_1 + 0x6c;
  local_24 = param_1 + 0x6a;
  local_28 = param_1 + 0x68;
  do {
    uVar14 = 0;
    do {
      *(undefined4 *)((short)uVar14 * 4 + ((int)(uVar11 * 0x10000) >> 0x10) * 0x154 + iVar8) = 0;
      uVar12 = (int)(short)uVar14 + 1;
      uVar14 = uVar12 & 0xffff;
    } while ((int)(uVar12 * 0x10000) >> 0x10 < 5);
    uVar14 = uVar11 * 0x10000 + 0x10000;
    uVar11 = uVar14 >> 0x10;
  } while ((int)uVar14 >> 0x10 < 4);
  pbVar16[0] = 0;
  pbVar16[1] = 0;
  local_24[0] = 0;
  local_24[1] = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_08098358();
  FUN_080982f8();
  FUN_08097d60();
  param_1[0x1fc] = param_1[0x1fc] & 0xf0 | *param_1 & 0xf;
  *(undefined2 *)(param_1 + DAT_080b1800) = *(undefined2 *)(param_1 + 2);
  param_1[0x200] = 0xff;
  local_2c = 0;
  FUN_08068254();
  while (iVar8 = FUN_08068244(), iVar8 == 0) {
    FUN_080003f0();
  }
  FUN_08068234();
  do {
    iVar8 = FUN_0800c4c8();
    if ((iVar8 != 0) || (iVar8 = FUN_08058354(), iVar8 != 0)) break;
    if ((*(short *)(param_1 + 0xc) == 10) && (local_38 == 0)) {
      local_38 = 8;
    }
    iVar8 = FUN_0805a1e4();
    if (iVar8 == 0) {
      FUN_0801c540(*DAT_080b1854);
      if (param_1[DAT_080b1858] - 1 < 5) {
                    /* WARNING: Could not recover jumptable at 0x080b1850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (**(code **)((param_1[DAT_080b1858] - 1) * 4 + DAT_080b185c))();
        return uVar9;
      }
    }
    if (local_44 == 1) {
      unaff_r9 = auStack_f0;
      *(short *)local_28 = *(short *)(param_1 + 8) + 8;
      local_3c = 1;
    }
    else if (local_44 < 2) {
      if (local_44 == 0) {
        unaff_r9 = auStack_f0;
        *(undefined2 *)local_28 = *(undefined2 *)(param_1 + 8);
        local_3c = 1;
      }
    }
    else if (local_44 == 2) {
      unaff_r9 = auStack_bc;
      *(undefined2 *)local_28 = *(undefined2 *)(param_1 + 8);
      local_3c = 0;
    }
    iVar8 = *DAT_080b1a30;
    if (local_40 != *(ushort *)(iVar8 + 0x68)) {
      local_40 = (uint)*(ushort *)(iVar8 + 0x68);
      *(undefined2 *)(iVar8 + 0x6c) = 0;
      *(undefined2 *)(iVar8 + 0x6a) = 0;
    }
    *(undefined1 *)(unaff_r9 + 7) = 5;
    FUN_08000af0(0x15,unaff_r9[3],1);
    uVar11 = FUN_08098318();
    if ((uVar11 & 1) == 0) {
      uVar3 = FUN_0800b5ac(*(int *)(param_1 + 0x14) >> 8,*(int *)(param_1 + 0x18) >> 8,0);
    }
    else {
      uVar3 = FUN_0809830c();
    }
    iVar8 = FUN_0800c6dc();
    if (iVar8 == 0) {
      uVar6 = FUN_0806599c(unaff_r9,*(undefined2 *)local_28,local_24,pbVar16,local_3c);
      *(undefined2 *)(param_1 + 0x6e) = uVar6;
    }
    FUN_0800b570((*(int *)(param_1 + 0x14) << 8) >> 0x10,(*(int *)(param_1 + 0x18) << 8) >> 0x10,
                 &local_54,&local_52,0,0);
    if (local_38 == 0) {
      iVar8 = FUN_0800c61c();
      if (((iVar8 == 0) && (iVar8 = FUN_0800c5e8(), iVar8 == 0)) &&
         (iVar8 = FUN_0800c684(), iVar8 == 0)) {
        FUN_08007378((int)local_54,(int)local_52,*(undefined2 *)local_28,*(undefined2 *)local_24,
                     uVar3,unaff_r9 + 7,unaff_r9[2],*unaff_r9);
      }
    }
    else {
      uVar11 = local_38 - 1 & 0xffff;
      uVar14 = local_38 & 1;
      local_38 = uVar11;
      if (((uVar14 != 0) && (iVar8 = FUN_0800c61c(), iVar8 == 0)) &&
         ((iVar8 = FUN_0800c5e8(), iVar8 == 0 && (iVar8 = FUN_0800c684(), iVar8 == 0)))) {
        FUN_08007378((int)local_54,(int)local_52,*(undefined2 *)local_28,*(undefined2 *)local_24,
                     uVar3,unaff_r9 + 7,unaff_r9[2],*unaff_r9);
      }
    }
    iVar8 = *(int *)(param_1 + 0x4c);
    if ((iVar8 != 0) && (local_4c != iVar8)) {
      local_34 = 10;
      local_30 = 0;
      local_4c = iVar8;
    }
    if (local_34 == 0) {
      local_4c = 0;
      param_1[0x4c] = 0;
      param_1[0x4d] = 0;
      param_1[0x4e] = 0;
      param_1[0x4f] = 0;
    }
    else {
      iVar8 = FUN_0800c5e8();
      if (((iVar8 == 0) && (iVar8 = FUN_0800c61c(), iVar8 == 0)) &&
         (iVar8 = FUN_0800c684(), iVar8 == 0)) {
        FUN_08019c88(param_1,local_4c,(int)(short)local_30);
      }
      if ((local_34 & 2) != 0) {
        local_30 = local_30 * 0x10000 + DAT_080b1b84 >> 0x10;
      }
      local_34 = local_34 - 1 & 0xffff;
    }
    sVar7 = FUN_08019824(param_1);
    if (sVar7 != 0) {
      local_2c = 1;
    }
    FUN_0802056c(param_1);
    FUN_080003f0();
  } while (local_2c == 0);
  iVar8 = FUN_080020f4();
  puVar13 = (uint *)(iVar8 * 0x154 + DAT_080b1d1c + 0x38);
  *puVar13 = *puVar13 | 1;
  piVar1 = DAT_080b1d20;
  local_6c[0] = 5;
  iVar8 = *DAT_080b1d20;
  *(undefined2 *)(iVar8 + 0x6c) = 0;
  *(undefined2 *)(iVar8 + 0x6a) = 0;
  *(undefined2 *)(iVar8 + 0x68) = 0;
  local_30 = 0;
  local_34 = 10;
  do {
    iVar8 = FUN_080020f4();
    puVar13 = (uint *)(iVar8 * 0x154 + DAT_080b1d24);
    *puVar13 = *puVar13 | 1;
    iVar8 = FUN_0800c61c();
    if (((iVar8 == 0) && (iVar8 = FUN_0800c5e8(), iVar8 == 0)) &&
       (iVar8 = FUN_0800c684(), iVar8 == 0)) {
      FUN_08000af0(0x15,local_7c,1);
      uVar3 = FUN_0800b5ac(*(int *)(*piVar1 + 0x14) >> 8,*(int *)(*piVar1 + 0x18) >> 8,0);
      iVar8 = *piVar1;
      uVar6 = FUN_0806599c(local_88,*(undefined2 *)(iVar8 + 0x68),iVar8 + 0x6a,iVar8 + 0x6c,1);
      iVar8 = *piVar1;
      *(undefined2 *)(iVar8 + 0x6e) = uVar6;
      FUN_0800b570((*(int *)(iVar8 + 0x14) << 8) >> 0x10,(*(int *)(iVar8 + 0x18) << 8) >> 0x10,
                   &local_54,&local_52,0,0);
      FUN_08007378((int)local_54,(int)local_52,*(undefined2 *)(*piVar1 + 0x68),
                   *(undefined2 *)(*piVar1 + 0x6a),uVar3,local_6c,local_80,local_88[0]);
      FUN_08019c88(param_1,local_4c,(int)(short)local_30);
    }
    if ((local_34 & 2) != 0) {
      local_30 = local_30 * 0x10000 + DAT_080b1d28 >> 0x10;
    }
    FUN_080003f0();
    local_34 = local_34 - 1 & 0xffff;
  } while (local_34 != DAT_080b1d2c);
  FUN_08068a68();
  piVar1 = DAT_080b1d20;
  FUN_080682e4(*(undefined2 *)(*DAT_080b1d20 + 2));
  FUN_080689cc(DAT_080b1d30);
  while (iVar8 = FUN_08068954(DAT_080b1e18), iVar8 == 0) {
    iVar8 = FUN_080020f4();
    puVar13 = (uint *)(iVar8 * 0x154 + DAT_080b1e14);
    *puVar13 = *puVar13 | 1;
    iVar8 = FUN_0800c61c();
    if (((iVar8 == 0) && (iVar8 = FUN_0800c5e8(), iVar8 == 0)) &&
       ((iVar8 = FUN_0800c6dc(), iVar8 == 0 && (iVar8 = FUN_0800c684(), iVar8 == 0)))) {
      FUN_08000af0(0x15,local_7c,1);
      uVar3 = FUN_0800b5ac(*(int *)(*piVar1 + 0x14) >> 8,*(int *)(*piVar1 + 0x18) >> 8,0);
      iVar8 = *piVar1;
      uVar6 = FUN_0806599c(local_88,*(undefined2 *)(iVar8 + 0x68),iVar8 + 0x6a,iVar8 + 0x6c,1);
      iVar8 = *piVar1;
      *(undefined2 *)(iVar8 + 0x6e) = uVar6;
      FUN_0800b570((*(int *)(iVar8 + 0x14) << 8) >> 0x10,(*(int *)(iVar8 + 0x18) << 8) >> 0x10,
                   &local_54,&local_52,0,0);
      FUN_08007378((int)local_54,(int)local_52,*(undefined2 *)(*piVar1 + 0x68),
                   *(undefined2 *)(*piVar1 + 0x6a),uVar3,local_6c,local_80,local_88[0]);
    }
    FUN_080003f0();
  }
  FUN_08066468(DAT_080b1e18);
  piVar1 = DAT_080b1e1c;
  while (iVar8 = FUN_0805a1e4(), iVar8 != 0) {
    iVar8 = FUN_080020f4();
    puVar13 = (uint *)(iVar8 * 0x154 + DAT_080b1f38);
    *puVar13 = *puVar13 | 1;
    iVar8 = FUN_0800c61c();
    if ((((iVar8 == 0) && (iVar8 = FUN_0800c5e8(), iVar8 == 0)) &&
        (iVar8 = FUN_0800c6dc(), iVar8 == 0)) && (iVar8 = FUN_0800c684(), iVar8 == 0)) {
      FUN_08000af0(0x15,local_7c,1);
      uVar3 = FUN_0800b5ac(*(int *)(*piVar1 + 0x14) >> 8,*(int *)(*piVar1 + 0x18) >> 8,0);
      iVar8 = *piVar1;
      uVar6 = FUN_0806599c(local_88,*(undefined2 *)(iVar8 + 0x68),iVar8 + 0x6a,iVar8 + 0x6c,1);
      iVar8 = *piVar1;
      *(undefined2 *)(iVar8 + 0x6e) = uVar6;
      FUN_0800b570((*(int *)(iVar8 + 0x14) << 8) >> 0x10,(*(int *)(iVar8 + 0x18) << 8) >> 0x10,
                   &local_54,&local_52,0,0);
      FUN_08007378((int)local_54,(int)local_52,*(undefined2 *)(*piVar1 + 0x68),
                   *(undefined2 *)(*piVar1 + 0x6a),uVar3,local_6c,local_80,local_88[0]);
    }
    FUN_080003f0();
  }
  FUN_08059ae4(0);
  iVar8 = FUN_080020f4();
  puVar13 = (uint *)(iVar8 * 0x154 + DAT_080b1f3c + 0x38);
  *puVar13 = *puVar13 | 1;
  iVar8 = FUN_0805a910();
  if (iVar8 == 0) {
    uVar9 = FUN_0805e608(1,0xe,0x19,2,0x3c,DAT_080b1f70);
    iVar8 = *DAT_080b1f74;
  }
  else {
    uVar9 = FUN_0805e608(1,0xe,0x19,2,0x3c,DAT_080b1f40);
    iVar8 = *DAT_080b1f44;
  }
  *(undefined4 *)(iVar8 + 0x720) = uVar9;
  piVar1 = DAT_080b1f78;
  while (iVar8 = FUN_0805f820(*(undefined4 *)(*DAT_080b20c8 + 0x720)), piVar2 = DAT_080b20cc,
        iVar8 == 0) {
    iVar8 = FUN_080020f4();
    puVar13 = (uint *)(iVar8 * 0x154 + DAT_080b20c4);
    *puVar13 = *puVar13 | 1;
    iVar8 = FUN_0800c61c();
    if (((iVar8 == 0) && (iVar8 = FUN_0800c5e8(), iVar8 == 0)) &&
       ((iVar8 = FUN_0800c6dc(), iVar8 == 0 && (iVar8 = FUN_0800c684(), iVar8 == 0)))) {
      FUN_08000af0(0x15,local_7c,1);
      uVar3 = FUN_0800b5ac(*(int *)(*piVar1 + 0x14) >> 8,*(int *)(*piVar1 + 0x18) >> 8,0);
      iVar8 = *piVar1;
      uVar6 = FUN_0806599c(local_88,*(undefined2 *)(iVar8 + 0x68),iVar8 + 0x6a,iVar8 + 0x6c,1);
      iVar8 = *piVar1;
      *(undefined2 *)(iVar8 + 0x6e) = uVar6;
      FUN_0800b570((*(int *)(iVar8 + 0x14) << 8) >> 0x10,(*(int *)(iVar8 + 0x18) << 8) >> 0x10,
                   &local_54,&local_52,0,0);
      FUN_08007378((int)local_54,(int)local_52,*(undefined2 *)(*piVar1 + 0x68),
                   *(undefined2 *)(*piVar1 + 0x6a),uVar3,local_6c,local_80,local_88[0]);
    }
    FUN_080003f0();
  }
  local_6c[0] = 5;
  iVar8 = *DAT_080b20cc;
  *(undefined2 *)(iVar8 + 0x68) = 0;
  *(undefined2 *)(iVar8 + 0x6c) = 0;
  *(undefined2 *)(iVar8 + 0x6a) = 0;
  bVar4 = 100;
  do {
    iVar8 = FUN_080020f4();
    puVar13 = (uint *)(iVar8 * 0x154 + DAT_080b20c4);
    *puVar13 = *puVar13 | 1;
    iVar8 = FUN_0800c61c();
    if (((iVar8 == 0) && (iVar8 = FUN_0800c5e8(), iVar8 == 0)) &&
       ((iVar8 = FUN_0800c6dc(), iVar8 == 0 && (iVar8 = FUN_0800c684(), iVar8 == 0)))) {
      if (bVar4 < 0x50) {
        if (bVar4 < 0x3c) {
          iVar8 = *piVar2;
          uVar10 = 0x12;
        }
        else {
          if ((bVar4 & 2) == 0) goto LAB_080b20f6;
          iVar8 = *piVar2;
          uVar10 = *(ushort *)(iVar8 + 0x68);
          if (uVar10 < 8) {
            uVar10 = uVar10 + 1;
            *(ushort *)(iVar8 + 0x68) = uVar10;
          }
          else {
            uVar10 = 8;
          }
        }
        *(ushort *)(iVar8 + 0x68) = uVar10;
      }
LAB_080b20f6:
      FUN_08000af0(0x15,local_7c,1);
      uVar3 = FUN_0800b5ac(*(int *)(*piVar2 + 0x14) >> 8,*(int *)(*piVar2 + 0x18) >> 8,0);
      iVar8 = *piVar2;
      uVar6 = FUN_0806599c(local_88,*(undefined2 *)(iVar8 + 0x68),iVar8 + 0x6a,iVar8 + 0x6c,1);
      iVar8 = *piVar2;
      *(undefined2 *)(iVar8 + 0x6e) = uVar6;
      FUN_0800b570((*(int *)(iVar8 + 0x14) << 8) >> 0x10,(*(int *)(iVar8 + 0x18) << 8) >> 0x10,
                   &local_54,&local_52,0,0);
      FUN_08007378((int)local_54,(int)local_52,*(undefined2 *)local_28,*(undefined2 *)local_24,uVar3
                   ,local_6c,local_80,local_88[0]);
    }
    FUN_080003f0();
    piVar1 = DAT_080b235c;
    bVar4 = bVar4 - 1;
    if (bVar4 == 0xff) {
      iVar8 = *DAT_080b235c;
      *(undefined2 *)(iVar8 + 0x68) = 0x12;
      *(undefined2 *)(iVar8 + 0x6c) = 0;
      *(undefined2 *)(iVar8 + 0x6a) = 0;
      uVar11 = 0;
      FUN_0809839c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),1);
      do {
        iVar8 = FUN_080020f4();
        puVar13 = (uint *)(iVar8 * 0x154 + DAT_080b2360);
        *puVar13 = *puVar13 | 1;
        iVar8 = FUN_0800c61c();
        if ((((iVar8 == 0) && (iVar8 = FUN_0800c5e8(), iVar8 == 0)) &&
            (iVar8 = FUN_0800c6dc(), iVar8 == 0)) && (iVar8 = FUN_0800c684(), iVar8 == 0)) {
          uVar11 = ((uVar11 + 1) * 0x1000000 & 0xf000000) >> 0x18;
          FUN_08008b8c(0,0,uVar11,0);
          FUN_08000af0(0x15,local_7c,1);
          uVar3 = FUN_0800b5ac(*(int *)(*piVar1 + 0x14) >> 8,*(int *)(*piVar1 + 0x18) >> 8,0);
          iVar8 = *piVar1;
          uVar6 = FUN_0806599c(local_88,*(undefined2 *)(iVar8 + 0x68),iVar8 + 0x6a,iVar8 + 0x6c,1);
          iVar8 = *piVar1;
          *(undefined2 *)(iVar8 + 0x6e) = uVar6;
          FUN_0800b570((*(int *)(iVar8 + 0x14) << 8) >> 0x10,(*(int *)(iVar8 + 0x18) << 8) >> 0x10,
                       &local_54,&local_52,0,0);
          FUN_0800747c((int)local_54,(int)local_52,*(undefined2 *)local_28,*(undefined2 *)local_24,
                       uVar3,1,0,local_6c,local_80,local_88[0]);
        }
        FUN_080003f0();
        cVar5 = FUN_08098404();
      } while (cVar5 == '\0');
      FUN_08008b8c(0,0,0,0);
      FUN_08098374();
      iVar8 = FUN_080020f4();
      iVar15 = DAT_080b2364 + 0x38;
      puVar13 = (uint *)(iVar8 * 0x154 + iVar15);
      *puVar13 = *puVar13 & 0xfffffffe;
      iVar8 = FUN_080020f4();
      if (((*(uint *)(iVar8 * 0x154 + iVar15) & 0x2000) == 0) &&
         (*(short *)(*DAT_080b235c + 0x5a) != 0)) {
        uVar9 = FUN_0801e274(*DAT_080b2368,local_50);
        local_30 = 0x1d;
        do {
          iVar8 = *DAT_080b235c;
          *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + -0x20;
          FUN_08061e9c(iVar8,uVar9);
          FUN_080003f0();
          uVar11 = local_30 * 0x10000 + DAT_080b236c;
          local_30 = uVar11 >> 0x10;
        } while ((int)uVar11 >> 0x10 != -1);
        FUN_0801c87c(*DAT_080b2368,uVar9);
      }
      FUN_080582e8();
      return unaff_lr;
    }
  } while( true );
}

