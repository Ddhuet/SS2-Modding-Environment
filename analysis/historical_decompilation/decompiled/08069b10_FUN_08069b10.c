
undefined4 FUN_08069b10(uint *param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  undefined4 uVar9;
  ushort *unaff_r8;
  ushort *puVar10;
  ushort *unaff_r9;
  ushort *unaff_r10;
  undefined4 unaff_lr;
  undefined4 local_28;
  uint local_24;
  
  iVar3 = FUN_0805a1e4();
  if (iVar3 != 0) {
    return unaff_lr;
  }
  iVar3 = FUN_0800c748();
  if (iVar3 != 0) {
    return unaff_lr;
  }
  local_28 = local_28 & DAT_08069b54;
  uVar6 = *param_1;
  if (uVar6 < 4) {
    puVar10 = (ushort *)(uVar6 * 0x154 + DAT_08069b58);
  }
  else {
    unaff_r9 = (ushort *)(*DAT_08069b98 + uVar6 * DAT_08069b9c + DAT_08069ba0);
    puVar10 = unaff_r8;
  }
  uVar6 = param_1[2];
  if (uVar6 < 4) {
    unaff_r10 = (ushort *)(uVar6 * 0x154 + DAT_08069ba4);
    puVar8 = unaff_r10 + 0x42;
    uVar9 = 8;
    unaff_r10[0x8c] = 0;
    unaff_r10[0x8d] = 0;
    puVar4 = unaff_r10 + 0x38;
  }
  else {
    unaff_r8 = (ushort *)(*DAT_08069c38 + uVar6 * DAT_08069c3c + DAT_08069c40);
    puVar8 = unaff_r8 + 0x1c6;
    uVar9 = 1;
    puVar4 = unaff_r8 + 0xee;
  }
  if ((byte)*puVar4 == 0) {
    return unaff_lr;
  }
  sVar2 = FUN_080695f4(param_1,puVar8);
  uVar6 = FUN_080ba8a4((int)sVar2,uVar9);
  local_24 = local_24 & DAT_08069c44 | uVar6 & 0xffff;
  if (param_1[3] == 0x13) {
    uVar1 = *(ushort *)(param_1[5] * 2 + DAT_08069c48);
    uVar9 = FUN_080008c8();
    uVar6 = FUN_080baaf4(uVar9,100);
    if (uVar6 <= uVar1) {
      local_28 = local_28 & DAT_08069c4c | 0x300;
    }
  }
  if (param_1[3] != 0xc) {
    local_28 = local_28 & DAT_08069dac & DAT_08069db0;
    goto LAB_08069d30;
  }
  if (*(int *)(unaff_r8 + 0x1c2) == 0xff) {
    local_28 = local_28 & DAT_08069c50;
  }
  else {
    local_28 = local_28 & DAT_08069c9c | 0x100000;
  }
  if (*param_1 < 4) {
    if (3 < param_1[2]) {
      iVar3 = (*(int *)(unaff_r8 + 10) - *(int *)(puVar10 + 0x4a)) * 0x100 >> 0x10;
      iVar5 = *(int *)(unaff_r8 + 0xc);
      iVar7 = *(int *)(puVar10 + 0x4c);
      goto LAB_08069cec;
    }
    iVar3 = (int)(((uint)(**(ushort **)(unaff_r10 + 0xa8) >> 4) - (*(int *)(puVar10 + 0x4a) >> 8)) *
                 0x10000) >> 0x10;
    iVar5 = (((*(ushort **)(unaff_r10 + 0xa8))[1] & 0xfff) - (*(int *)(puVar10 + 0x4c) >> 8)) *
            0x10000;
  }
  else {
    if (param_1[2] < 4) {
      iVar3 = (*(int *)(unaff_r10 + 0x4a) - *(int *)(unaff_r9 + 10)) * 0x100 >> 0x10;
      iVar5 = *(int *)(unaff_r10 + 0x4c);
      iVar7 = *(int *)(puVar10 + 0x4c);
    }
    else {
      iVar3 = (*(int *)(unaff_r8 + 10) - *(int *)(unaff_r9 + 10)) * 0x100 >> 0x10;
      iVar5 = *(int *)(unaff_r8 + 0xc);
      iVar7 = *(int *)(unaff_r9 + 0xc);
    }
LAB_08069cec:
    iVar5 = (iVar5 - iVar7) * 0x100;
  }
  uVar6 = FUN_080b9a80(iVar3,iVar5 >> 0x10);
  uVar6 = local_28 & DAT_08069d1c | ((uVar6 & 0xffff) >> 0xc) << 0x18;
  local_28 = DAT_08069d1c & uVar6 | (uint)*(byte *)(((int)uVar6 >> 0x18) + DAT_08069d20) << 0x18;
LAB_08069d30:
  if (param_1[2] < 4) {
    local_28 = local_28 & DAT_08069db4 | (uint)(byte)*unaff_r10;
    uVar6 = FUN_080020f4();
    if (param_1[2] == uVar6) {
      unaff_r10[0x13] = 10;
      unaff_r10[0x48] = (short)local_24 + unaff_r10[0x48];
      FUN_0801f0fc(unaff_r10,&local_28);
    }
    FUN_080699ec(&local_28,puVar8,(short)param_1[5],
                 *(undefined2 *)(param_1[3] * 0x18 + DAT_08069db8 + 2),(short)param_1[2]);
    if (param_1[3] == 0x12) {
      local_28._0_2_ = (ushort)(byte)local_28;
    }
    if (*param_1 < 4) {
      iVar3 = (uint)*puVar10 * 2 + 0x80;
      uVar9 = *(undefined4 *)(puVar10 + 0x72);
    }
    else {
      iVar3 = (uint)*unaff_r9 * 2 + 0x76;
      uVar9 = *(undefined4 *)(unaff_r9 + 0x28);
    }
    *(undefined4 *)(unaff_r10 + iVar3) = uVar9;
    uVar6 = FUN_080020f4();
    if (param_1[2] == uVar6) {
      iVar3 = FUN_0801dfa8(unaff_r10,local_28._1_1_);
      if (iVar3 == 0) {
        iVar3 = FUN_0801df68(unaff_r10,local_28._1_1_);
        if (iVar3 != 0) {
          FUN_0801d968(*unaff_r10,iVar3,local_28._1_1_);
        }
      }
      else {
        FUN_0801d968(*unaff_r10,iVar3,local_28._1_1_);
      }
    }
    uVar1 = *unaff_r10;
    uVar6 = FUN_080020f4();
    if (uVar1 == uVar6) {
      *(uint *)(unaff_r10 + 0x74) = (uint)*(ushort *)(param_1[3] * 0x18 + DAT_08069e38 + 2);
      FUN_08069888(local_28._1_1_,local_24 & 0xffff,*DAT_08069e3c + 0x2c);
    }
  }
  else {
    unaff_r8[6] = 10;
    local_28 = CONCAT31(local_28._1_3_,(char)unaff_r8[1]);
    unaff_r8[0x25] = (short)local_24 + unaff_r8[0x25];
    *(uint *)(unaff_r8 + 0x26) = local_24 & 0xffff;
    FUN_0801f0a8(unaff_r8);
    if (*param_1 < 4) {
      uVar9 = *(undefined4 *)(puVar10 + 0x72);
    }
    else {
      uVar9 = *(undefined4 *)(unaff_r9 + 0x28);
    }
    *(undefined4 *)(unaff_r8 + 0x2a) = uVar9;
    unaff_r8[0x2c] = (ushort)*param_1;
    unaff_r8[0x2d] = (ushort)(1 << (*param_1 & 0xff)) | unaff_r8[0x2d];
    FUN_080699ec(&local_28,puVar8,(short)param_1[5],
                 *(undefined2 *)(param_1[3] * 0x18 + DAT_08069edc + 2),(short)param_1[2]);
    if (param_1[3] == 0x12) {
      local_28._0_2_ = (ushort)(byte)local_28;
    }
    if (*(char *)((int)unaff_r8 + DAT_08069ee0) != '\x03') {
      iVar3 = FUN_0801e048(unaff_r8,local_28._1_1_);
      if (iVar3 == 0) {
        iVar3 = FUN_0801df08(unaff_r8,0);
        if (iVar3 != 0) {
          FUN_0801d968(*unaff_r8 + 4,iVar3,local_28._1_1_);
        }
      }
      else {
        FUN_0801d968(*unaff_r8 + 4,iVar3,local_28._1_1_);
      }
    }
    FUN_0806671c(&local_28);
  }
  FUN_080696dc(puVar8,local_24 & 0xffff,param_1[5],*param_1,param_1[2],
               *(undefined2 *)(param_1[3] * 0x18 + DAT_08069f34 + 2));
  return unaff_lr;
}

