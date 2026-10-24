
/* WARNING: Control flow encountered bad instruction data */

void FUN_0809841c(ushort *param_1)

{
  ushort *puVar1;
  int *piVar2;
  undefined1 uVar3;
  ushort uVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int extraout_r1;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 *unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 local_e4 [2];
  undefined4 local_dc;
  int local_d8;
  undefined1 local_c8 [24];
  undefined4 auStack_b0 [13];
  short local_7c;
  short local_7a;
  ushort *local_78;
  int local_74;
  int local_70;
  uint local_6c;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_48;
  int local_3c;
  int local_38;
  ushort *local_2c;
  ushort *local_28;
  ushort *local_24;
  
  *puRam08098494 = param_1;
  local_78 = param_1 + 0x102;
  FUN_08015c70(param_1,uRam08098498,0);
  FUN_08019aa8(local_78);
  FUN_08019c08(param_1);
  puVar1 = puRam0809849c;
  uVar4 = FUN_08016844(*(undefined2 *)((int)param_1 + iRam080984a0),
                       *(undefined2 *)((int)param_1 + iRam080984a4));
  *puVar1 = uVar4;
  puVar12 = DAT_080984ac;
  puVar1 = DAT_080985c4;
  uVar8 = DAT_080984a8;
  while (DAT_080985c4 = puVar1, uVar4 == uVar8) {
    param_1[6] = 0xb;
    iVar7 = FUN_0800c4c8();
    if ((iVar7 != 0) || (iVar7 = FUN_08058354(), iVar7 != 0)) {
      iVar7 = 1;
      do {
        param_1 = (ushort *)(uint)*param_1;
        *puVar12 = *puVar12 & ~(iVar7 << ((uint)param_1 & 0xff));
        FUN_0809929c();
        iVar7 = extraout_r1;
      } while ((uVar4 & 0x80) == 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_080003f0();
    puVar1 = DAT_080985c4;
    uVar8 = (uint)*DAT_080985c4;
  }
  FUN_08065784(local_e4,0x50000,*puVar1,0xffffffff,1);
  FUN_08065784(auStack_b0,DAT_080985c8,*puVar1,0xffffffff,1);
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  uVar4 = local_78[0xbd];
  param_1[0xeb] = uVar4 * 3;
  param_1[0x2e] = uVar4 * 3;
  uVar4 = local_78[0xbc];
  param_1[0xea] = uVar4 * 0x14;
  param_1[0x2f] = uVar4 * 0x14;
  param_1[6] = 0;
  local_70 = 0;
  local_6c = DAT_080985cc;
  local_64 = 0;
  *(byte *)((int)param_1 + 0x1fd) = 2;
  *(byte *)(param_1 + 0xff) = 2;
  FUN_08065ce4(1);
  FUN_08099ba0();
  uVar8 = 0;
  local_3c = 0;
  local_5c = 0;
  local_60 = 0;
  param_1[0x28] = 1;
  iVar7 = DAT_080985d0;
  param_1[0x29] = 0;
  do {
    uVar13 = 0;
    do {
      *(undefined4 *)((short)uVar13 * 4 + ((int)(uVar8 * 0x10000) >> 0x10) * 0x154 + iVar7) = 0;
      uVar11 = (int)(short)uVar13 + 1;
      uVar13 = uVar11 & 0xffff;
    } while ((int)(uVar11 * 0x10000) >> 0x10 < 5);
    uVar13 = uVar8 * 0x10000 + 0x10000;
    uVar8 = uVar13 >> 0x10;
  } while ((int)uVar13 >> 0x10 < 4);
  local_2c = param_1 + 0x34;
  local_28 = param_1 + 0x35;
  local_24 = param_1 + 0x36;
  iVar7 = FUN_0800c780();
  if (iVar7 == 1) {
    local_58 = 0x78;
    local_54 = 0x168;
  }
  else {
    local_58 = 0xf0;
    local_54 = 0xf0;
  }
  *(byte *)(param_1 + 0xfe) = (byte)param_1[0xfe] & 0xf0 | (byte)*param_1 & 0xf;
  *(ushort *)((int)param_1 + DAT_08098618) = param_1[1];
  *(byte *)(param_1 + 0x100) = 0xff;
  FUN_080982f8();
  FUN_08097d60();
  local_38 = 0;
  FUN_08068254();
  while (iVar7 = FUN_08068244(), iVar7 == 0) {
    FUN_080003f0();
  }
  FUN_08068234();
  do {
    iVar7 = FUN_0800c4c8();
    if ((iVar7 != 0) || (iVar7 = FUN_08058354(), iVar7 != 0)) break;
    if ((param_1[6] == 10) && (local_64 == 0)) {
      local_64 = 8;
    }
    iVar7 = FUN_0805a1e4();
    if (iVar7 == 0) {
      FUN_0801c540(param_1);
      uVar8 = *(byte *)((int)param_1 + DAT_0809866c) - 1;
      if (uVar8 < 8) {
                    /* WARNING: Could not recover jumptable at 0x0809866a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(uVar8 * 4 + DAT_08098670))();
        return;
      }
    }
    if (local_70 == 1) {
      uVar4 = param_1[4] + 8;
      goto LAB_08098ad0;
    }
    if (local_70 < 2) {
      if (local_70 == 0) {
        unaff_r10 = local_e4;
        if (*(byte *)((int)param_1 + DAT_08098aa8) == 7) {
          uVar4 = 0x10;
LAB_08098ad0:
          unaff_r10 = local_e4;
          *local_2c = uVar4;
          local_68 = 1;
        }
        else {
          if (*(byte *)((int)param_1 + DAT_08098aa8) == 8) {
            *local_2c = 0x11;
            local_68 = 0;
          }
          else {
            if ((byte)param_1[0xff] == 7) {
              uVar4 = 0x10;
              goto LAB_08098ad0;
            }
            if ((byte)param_1[0xff] != 8) {
              *local_2c = param_1[4];
              local_68 = 1;
              goto LAB_08098afc;
            }
            *local_2c = 0x11;
            local_68 = 0;
          }
LAB_08098afa:
        }
      }
    }
    else if (local_70 == 2) {
      unaff_r10 = auStack_b0;
      if (local_3c != 0) {
        *local_2c = 0;
        local_68 = 1;
        goto LAB_08098afa;
      }
      *local_2c = param_1[4] + 2;
      local_68 = 0;
    }
LAB_08098afc:
    iVar7 = *DAT_08098b50;
    if (local_6c != *(ushort *)(iVar7 + 0x68)) {
      local_6c = (uint)*(ushort *)(iVar7 + 0x68);
      *(undefined2 *)(iVar7 + 0x6c) = 0;
      *(undefined2 *)(iVar7 + 0x6a) = 0;
    }
    *(char *)(unaff_r10 + 7) = (char)*DAT_08098b54;
    FUN_08000af0(*DAT_08098b54 + 0x10,
                 unaff_r10[3] + (uint)*(ushort *)((int)local_78 + DAT_08098b58) * 0x20,1);
    uVar8 = FUN_08098318();
    if ((uVar8 & 1) == 0) {
      uVar3 = FUN_0800b5ac(*(int *)(param_1 + 10) >> 8,*(int *)(param_1 + 0xc) >> 8,0);
    }
    else {
      uVar3 = FUN_0809830c();
    }
    iVar7 = FUN_0800c6dc();
    if (iVar7 == 0) {
      uVar4 = FUN_0806599c(unaff_r10,*local_2c,local_28,local_24,local_68);
      param_1[0x37] = uVar4;
    }
    FUN_0800b570((*(int *)(param_1 + 10) << 8) >> 0x10,(*(int *)(param_1 + 0xc) << 8) >> 0x10,
                 &local_7c,&local_7a,0,0);
    if (local_64 == 0) {
      iVar7 = FUN_0800c61c();
      if (((iVar7 == 0) && (iVar7 = FUN_0800c5e8(), iVar7 == 0)) &&
         (iVar7 = FUN_0800c684(), iVar7 == 0)) {
        FUN_08007378((int)local_7c,(int)local_7a,*local_2c,*local_28,uVar3,unaff_r10 + 7,
                     unaff_r10[2],*unaff_r10);
      }
    }
    else {
      uVar8 = local_64 - 1 & 0xffff;
      uVar13 = local_64 & 1;
      local_64 = uVar8;
      if (((uVar13 != 0) && (iVar7 = FUN_0800c61c(), iVar7 == 0)) &&
         ((iVar7 = FUN_0800c5e8(), iVar7 == 0 && (iVar7 = FUN_0800c684(), iVar7 == 0)))) {
        FUN_08007378((int)local_7c,(int)local_7a,*local_2c,*local_28,uVar3,unaff_r10 + 7,
                     unaff_r10[2],*unaff_r10);
      }
    }
    iVar7 = *(int *)(param_1 + 0x26);
    if ((iVar7 != 0) && (local_74 != iVar7)) {
      local_60 = 10;
      local_48 = 0;
      local_74 = iVar7;
    }
    if (local_60 == 0) {
      local_74 = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
    }
    else {
      iVar7 = FUN_0800c5e8();
      if (((iVar7 == 0) && (iVar7 = FUN_0800c61c(), iVar7 == 0)) &&
         (iVar7 = FUN_0800c684(), iVar7 == 0)) {
        FUN_08019c88(param_1,local_74,(int)(short)local_48);
      }
      if ((local_60 & 2) != 0) {
        local_48 = local_48 * 0x10000 + DAT_08098cb0 >> 0x10;
      }
      local_60 = local_60 - 1 & 0xffff;
    }
    sVar5 = FUN_08019824(param_1);
    if (sVar5 != 0) {
      local_38 = 1;
    }
    FUN_080003f0();
  } while (local_38 == 0);
  *DAT_08098e6c = 0;
  iVar7 = FUN_080020f4();
  puVar12 = (uint *)(iVar7 * 0x154 + DAT_08098e70 + 0x38);
  *puVar12 = *puVar12 | 1;
  FUN_08099bcc();
  FUN_08065d18();
  piVar2 = DAT_08098e78;
  local_c8[0] = (undefined1)*DAT_08098e74;
  iVar7 = *DAT_08098e78;
  *(undefined2 *)(iVar7 + 0x68) = 0x10;
  *(undefined2 *)(iVar7 + 0x6c) = 0;
  *(undefined2 *)(iVar7 + 0x6a) = 0;
  local_48 = 0;
  local_60 = 10;
  do {
    iVar7 = FUN_080020f4();
    puVar12 = (uint *)(iVar7 * 0x154 + DAT_08098e7c);
    *puVar12 = *puVar12 | 1;
    iVar7 = FUN_0800c61c();
    if (((iVar7 == 0) && (iVar7 = FUN_0800c5e8(), iVar7 == 0)) &&
       (iVar7 = FUN_0800c684(), iVar7 == 0)) {
      FUN_08000af0(*DAT_08098e74 + 0x10,
                   local_d8 + (uint)*(ushort *)((int)local_78 + DAT_08098e80) * 0x20,1);
      uVar3 = FUN_0800b5ac(*(int *)(*piVar2 + 0x14) >> 8,*(int *)(*piVar2 + 0x18) >> 8,0);
      iVar7 = *piVar2;
      uVar6 = FUN_0806599c(local_e4,*(undefined2 *)(iVar7 + 0x68),iVar7 + 0x6a,iVar7 + 0x6c,1);
      iVar7 = *piVar2;
      *(undefined2 *)(iVar7 + 0x6e) = uVar6;
      FUN_0800b570((*(int *)(iVar7 + 0x14) << 8) >> 0x10,(*(int *)(iVar7 + 0x18) << 8) >> 0x10,
                   &local_7c,&local_7a,0,0);
      FUN_08007378((int)local_7c,(int)local_7a,*(undefined2 *)(*piVar2 + 0x68),
                   *(undefined2 *)(*piVar2 + 0x6a),uVar3,local_c8,local_dc,local_e4[0]);
      FUN_08019c88(param_1,local_74,(int)(short)local_48);
    }
    if ((local_60 & 2) != 0) {
      local_48 = local_48 * 0x10000 + DAT_08098e84 >> 0x10;
    }
    FUN_080003f0();
    local_60 = local_60 - 1 & 0xffff;
  } while (local_60 != DAT_08098e88);
  FUN_08068a68();
  FUN_080682e4(param_1[1]);
  FUN_080689cc(DAT_08098e8c);
  iVar7 = DAT_08098e7c;
  piVar2 = DAT_08098e78;
  while (iVar9 = FUN_08068954(DAT_08098f80), iVar9 == 0) {
    iVar9 = FUN_080020f4();
    puVar12 = (uint *)(iVar9 * 0x154 + iVar7);
    *puVar12 = *puVar12 | 1;
    iVar9 = FUN_0800c61c();
    if (((iVar9 == 0) && (iVar9 = FUN_0800c5e8(), iVar9 == 0)) &&
       (iVar9 = FUN_0800c684(), iVar9 == 0)) {
      FUN_08000af0(*DAT_08098f78 + 0x10,
                   local_d8 + (uint)*(ushort *)((int)local_78 + DAT_08098f7c) * 0x20,1);
      uVar3 = FUN_0800b5ac(*(int *)(*piVar2 + 0x14) >> 8,*(int *)(*piVar2 + 0x18) >> 8,0);
      iVar9 = *piVar2;
      uVar6 = FUN_0806599c(local_e4,*(undefined2 *)(iVar9 + 0x68),iVar9 + 0x6a,iVar9 + 0x6c,1);
      iVar9 = *piVar2;
      *(undefined2 *)(iVar9 + 0x6e) = uVar6;
      FUN_0800b570((*(int *)(iVar9 + 0x14) << 8) >> 0x10,(*(int *)(iVar9 + 0x18) << 8) >> 0x10,
                   &local_7c,&local_7a,0,0);
      FUN_08007378((int)local_7c,(int)local_7a,*(undefined2 *)(*piVar2 + 0x68),
                   *(undefined2 *)(*piVar2 + 0x6a),uVar3,local_c8,local_dc,local_e4[0]);
    }
    FUN_080003f0();
  }
  FUN_08066468(DAT_08098f80);
  piVar2 = DAT_08098f88;
  iVar7 = DAT_08098f84;
  while (iVar9 = FUN_0805a1e4(), iVar9 != 0) {
    iVar9 = FUN_080020f4();
    puVar12 = (uint *)(iVar9 * 0x154 + iVar7);
    *puVar12 = *puVar12 | 1;
    iVar9 = FUN_0800c61c();
    if (((iVar9 == 0) && (iVar9 = FUN_0800c5e8(), iVar9 == 0)) &&
       (iVar9 = FUN_0800c684(), iVar9 == 0)) {
      FUN_08000af0(*DAT_080990ac + 0x10,
                   local_d8 + (uint)*(ushort *)((int)local_78 + DAT_080990b0) * 0x20,1);
      uVar3 = FUN_0800b5ac(*(int *)(*piVar2 + 0x14) >> 8,*(int *)(*piVar2 + 0x18) >> 8,0);
      iVar9 = *piVar2;
      uVar6 = FUN_0806599c(local_e4,*(undefined2 *)(iVar9 + 0x68),iVar9 + 0x6a,iVar9 + 0x6c,1);
      iVar9 = *piVar2;
      *(undefined2 *)(iVar9 + 0x6e) = uVar6;
      FUN_0800b570((*(int *)(iVar9 + 0x14) << 8) >> 0x10,(*(int *)(iVar9 + 0x18) << 8) >> 0x10,
                   &local_7c,&local_7a,0,0);
      FUN_08007378((int)local_7c,(int)local_7a,*(undefined2 *)(*piVar2 + 0x68),
                   *(undefined2 *)(*piVar2 + 0x6a),uVar3,local_c8,local_dc,local_e4[0]);
    }
    FUN_080003f0();
  }
  FUN_08059ae4(0);
  iVar7 = FUN_080020f4();
  iVar9 = DAT_080990b4 + 0x38;
  puVar12 = (uint *)(iVar7 * 0x154 + iVar9);
  *puVar12 = *puVar12 | 1;
  uVar10 = FUN_0805e608(1,0xe,0x19,2,0x3c,DAT_080990b8);
  *(undefined4 *)(*DAT_080990bc + 0x720) = uVar10;
  piVar2 = DAT_080990c0;
  while (iVar7 = FUN_0805f820(*(undefined4 *)(*DAT_08099274 + 0x720)), iVar7 == 0) {
    iVar7 = FUN_080020f4();
    puVar12 = (uint *)(iVar7 * 0x154 + iVar9);
    *puVar12 = *puVar12 | 1;
    iVar7 = FUN_0800c61c();
    if (((iVar7 == 0) && (iVar7 = FUN_0800c5e8(), iVar7 == 0)) &&
       (iVar7 = FUN_0800c684(), iVar7 == 0)) {
      FUN_08000af0(*DAT_0809926c + 0x10,
                   local_d8 + (uint)*(ushort *)((int)local_78 + DAT_08099270) * 0x20,1);
      uVar3 = FUN_0800b5ac(*(int *)(*piVar2 + 0x14) >> 8,*(int *)(*piVar2 + 0x18) >> 8,0);
      iVar7 = *piVar2;
      uVar6 = FUN_0806599c(local_e4,*(undefined2 *)(iVar7 + 0x68),iVar7 + 0x6a,iVar7 + 0x6c,1);
      iVar7 = *piVar2;
      *(undefined2 *)(iVar7 + 0x6e) = uVar6;
      FUN_0800b570((*(int *)(iVar7 + 0x14) << 8) >> 0x10,(*(int *)(iVar7 + 0x18) << 8) >> 0x10,
                   &local_7c,&local_7a,0,0);
      FUN_08007378((int)local_7c,(int)local_7a,*(undefined2 *)(*piVar2 + 0x68),
                   *(undefined2 *)(*piVar2 + 0x6a),uVar3,local_c8,local_dc,local_e4[0]);
    }
    FUN_080003f0();
  }
  iVar7 = FUN_080020f4();
  iVar9 = DAT_08099278 + 0x38;
  puVar12 = (uint *)(iVar7 * 0x154 + iVar9);
  *puVar12 = *puVar12 & 0xfffffffe;
  FUN_08059ab8(0xd);
  piVar2 = DAT_0809927c;
  FUN_080973e0(*DAT_0809927c,local_e4,*(undefined2 *)((int)local_78 + DAT_08099270),*DAT_0809926c);
  iVar7 = FUN_080020f4();
  if (((*(uint *)(iVar7 * 0x154 + iVar9) & 0x2000) == 0) && (*(short *)(*piVar2 + 0x5a) != 0)) {
    uVar10 = FUN_0801e274(*DAT_08099280,local_78);
    local_48 = 0x1d;
    do {
      iVar7 = *DAT_0809927c;
      *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + -0x20;
      FUN_08061e9c(iVar7,uVar10);
      FUN_080003f0();
      uVar8 = local_48 * 0x10000 + DAT_08099284;
      local_48 = uVar8 >> 0x10;
    } while ((int)uVar8 >> 0x10 != -1);
    FUN_0801c87c(*DAT_08099280,uVar10);
  }
  local_48 = 0x6f;
  do {
    FUN_080003f0();
    uVar8 = local_48 * 0x10000 + DAT_08099284;
    local_48 = uVar8 >> 0x10;
  } while ((int)uVar8 >> 0x10 != -1);
  FUN_08068254();
  while (iVar7 = FUN_08068244(), iVar7 == 0) {
    FUN_080003f0();
  }
  FUN_08068234();
  FUN_080582e8();
                    /* WARNING: Could not recover jumptable at 0x080992aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

