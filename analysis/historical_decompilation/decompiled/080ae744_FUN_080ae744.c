
undefined4 FUN_080ae744(uint param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  ushort uVar11;
  ushort uVar12;
  int iVar13;
  byte *pbVar14;
  ushort *puVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  ushort uVar19;
  undefined4 unaff_lr;
  undefined1 auStack_70 [32];
  short local_50;
  short local_4e;
  int local_4c;
  int local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  short *local_28;
  short *local_24;
  
  iVar13 = DAT_080ae7a0;
  param_1 = param_1 & 0xff;
  piVar18 = (int *)(param_1 * 4 + DAT_080ae7a0);
  iVar6 = *DAT_080ae7a4 + DAT_080ae7a8 * param_1 + DAT_080ae7a8;
  *piVar18 = iVar6;
  *DAT_080ae7ac = *DAT_080ae7ac | 1 << (param_1 + 1 & 0xff);
  FUN_08015c70(iVar6,DAT_080ae7b0);
  local_4c = *piVar18 + 0x204;
  FUN_08019aa8(local_4c);
  if (param_1 == 3) {
    FUN_08019c08(*(undefined4 *)(iVar13 + 0xc));
  }
  else {
    FUN_08019c14(*piVar18);
  }
  iVar16 = param_1 * 4;
  piVar18 = (int *)(DAT_080ae900 + iVar16);
  iVar13 = *piVar18;
  *(undefined4 *)(iVar13 + 0x54) = 0;
  *(undefined4 *)(iVar13 + 0x4c) = 0;
  *(undefined2 *)(iVar13 + 0x4a) = 0;
  *(undefined2 *)(iVar13 + 0x6c) = 0;
  *(undefined2 *)(iVar13 + 0x6a) = 0;
  *(undefined2 *)(iVar13 + 8) = 0;
  iVar6 = param_1 + 1;
  *(short *)*piVar18 = (short)iVar6;
  ((short *)*piVar18)[1] = *(short *)*piVar18 + 4;
  iVar13 = *piVar18;
  *(undefined4 *)(iVar13 + 0x50) = 1;
  sVar5 = *(short *)(local_4c + 0x17a) * 3;
  *(short *)(iVar13 + 0x1d6) = sVar5;
  *(short *)(iVar13 + 0x5c) = sVar5;
  iVar13 = *piVar18;
  sVar5 = *(short *)(local_4c + 0x178) * 0x14;
  *(short *)(iVar13 + 0x1d4) = sVar5;
  *(short *)(iVar13 + 0x5e) = sVar5;
  *(undefined1 *)(*piVar18 + DAT_080ae904) = 0;
  *(undefined2 *)(*piVar18 + 0xc) = 0;
  pbVar14 = (byte *)*piVar18 + 0x1fc;
  *pbVar14 = *pbVar14 & 0xf0 | *(byte *)*piVar18 & 0xf;
  *(undefined2 *)(*piVar18 + 0x202) = *(undefined2 *)(*piVar18 + 2);
  *(undefined1 *)(*piVar18 + 0x200) = 0xff;
  iVar13 = DAT_080ae908;
  local_40 = 0;
  local_34 = 1;
  uVar19 = 0;
  local_44 = 0;
  local_2c = 0;
  iVar17 = *piVar18;
  *(int *)(iVar17 + 0x14) = *(int *)(iVar6 * 8 + DAT_080ae908) << 8;
  *(int *)(iVar17 + 0x18) = *(int *)(iVar6 * 8 + iVar13 + 4) << 8;
  FUN_08098284(auStack_70,*(undefined4 *)(DAT_080ae90c + 0xc));
  *(undefined1 *)(DAT_080ae910 + param_1) = 0;
  local_30 = 1;
  local_28 = &local_50;
  local_24 = &local_4e;
  do {
    if (*(short *)(*(int *)(iVar16 + DAT_080ae900) + 0xc) == 10) {
      if (uVar19 == 0) {
        uVar19 = 8;
      }
      *(undefined2 *)(*(int *)(iVar16 + DAT_080ae900) + 0xc) = 2;
    }
    iVar13 = FUN_0805a1e4();
    if (iVar13 == 0) {
      piVar18 = (int *)(iVar16 + DAT_080ae900);
      FUN_0801c540(*piVar18);
      uVar7 = (uint)*(byte *)(*piVar18 + DAT_080ae904);
      if (uVar7 < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x080ae8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (**(code **)(uVar7 * 4 + DAT_080ae914))();
        return uVar10;
      }
    }
    iVar13 = DAT_080aebf0;
    puVar1 = DAT_080aebec;
    if (*(char *)(*(int *)(iVar16 + DAT_080aeb28) + DAT_080aeb34) == '\0') {
      if (*(byte *)(DAT_080aeb38 + param_1) < 8) {
                    /* WARNING: Could not recover jumptable at 0x080aeb20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (**(code **)((uint)*(byte *)(DAT_080aeb38 + param_1) * 4 + DAT_080aeb3c))();
        return uVar10;
      }
      piVar18 = DAT_080aebec + param_1 * 2;
      puVar15 = (ushort *)(local_38 * 2 + DAT_080aebf4);
      *piVar18 = *piVar18 + ((int)*(short *)((*puVar15 + 0x40) * 2 + DAT_080aebf0) >> 4);
      puVar1[param_1 * 2 + 1] =
           puVar1[param_1 * 2 + 1] + (*(short *)((uint)*puVar15 * 2 + iVar13) * 3 >> 6);
      if (param_1 == 0) {
        FUN_08097dd4(*DAT_080aebf8,*puVar1,puVar1[1],0x240,4,1);
      }
      else {
        FUN_08097dd4(*(undefined4 *)(iVar16 + DAT_080aec58),*piVar18,piVar18[1],0x240,4,0);
      }
    }
    iVar13 = DAT_080aec5c;
    iVar17 = *(int *)(iVar16 + DAT_080aec58);
    *(int *)(iVar6 * 8 + DAT_080aec5c) = *(int *)(iVar17 + 0x14) >> 8;
    *(int *)(iVar6 * 8 + iVar13 + 4) = *(int *)(iVar17 + 0x18) >> 8;
    *(char *)(DAT_080aec60 + iVar6) = (char)*(undefined2 *)(iVar17 + 8);
    puVar15 = DAT_080aec68;
    iVar13 = DAT_080aec64;
    *(char *)(DAT_080aec64 + 0x1c) = (char)*DAT_080aec68;
    if (local_34 == 0) {
      FUN_08000af0(*puVar15 + 0x10,auStack_70,1);
    }
    else {
      FUN_08000af0(*puVar15 + 0x10,*(undefined4 *)(iVar13 + 0xc),1);
    }
    uVar7 = FUN_08098318();
    if ((uVar7 & 1) == 0) {
      uVar2 = FUN_0800b5ac(*(int *)(iVar6 * 8 + DAT_080aed4c) >> 8,
                           *(int *)(iVar6 * 8 + DAT_080aed4c + 4) >> 8,0);
    }
    else {
      uVar2 = FUN_0809830c();
    }
    iVar13 = FUN_0800c6dc();
    if (iVar13 == 0) {
      piVar18 = (int *)(iVar16 + DAT_080aed54);
      iVar13 = *piVar18;
      uVar4 = FUN_0806599c(DAT_080aed50,0x18,iVar13 + 0x6a,iVar13 + 0x6c,0);
      *(undefined2 *)(*piVar18 + 0x6e) = uVar4;
    }
    FUN_0800b570((int)*(short *)(iVar6 * 8 + DAT_080aed4c),
                 (int)*(short *)(iVar6 * 8 + DAT_080aed4c + 4),local_28,local_24,0,0);
    if (uVar19 == 0) {
      iVar13 = FUN_0800c61c();
      if (((iVar13 == 0) && (iVar13 = FUN_0800c5e8(), iVar13 == 0)) &&
         (iVar13 = FUN_0800c684(), iVar13 == 0)) {
        FUN_08007378((int)*local_28,(int)*local_24,0x18,
                     *(undefined2 *)(*(int *)(iVar16 + DAT_080aedb0) + 0x6a),uVar2,DAT_080aedb4,
                     *(undefined4 *)(DAT_080aedb4 + -0x14),*(undefined4 *)(DAT_080aedb4 + -0x1c));
      }
    }
    else {
      uVar11 = uVar19 - 1;
      uVar12 = uVar19 & 1;
      uVar19 = uVar11;
      if (((uVar12 != 0) && (iVar13 = FUN_0800c61c(), iVar13 == 0)) &&
         ((iVar13 = FUN_0800c5e8(), iVar13 == 0 && (iVar13 = FUN_0800c684(), iVar13 == 0)))) {
        FUN_08007378((int)*local_28,(int)*local_24,0x18,
                     *(undefined2 *)(*(int *)(iVar16 + DAT_080aed54) + 0x6a),uVar2,DAT_080aed58,
                     *(undefined4 *)(DAT_080aed58 + -0x14),*(undefined4 *)(DAT_080aed58 + -0x1c));
      }
    }
    if (local_2c == 0) {
      cVar3 = FUN_080af048(*(undefined4 *)(iVar16 + DAT_080aee3c));
      if (cVar3 != '\0') {
        local_2c = 0x1e;
      }
    }
    else {
      local_2c = local_2c - 1 & 0xff;
    }
    iVar13 = *(int *)(*(int *)(iVar16 + DAT_080aee3c) + 0x4c);
    if ((iVar13 != 0) && (local_48 != iVar13)) {
      local_44 = 10;
      local_3c = 0;
      local_48 = iVar13;
    }
    if (local_44 == 0) {
      local_48 = 0;
      *(undefined4 *)(*(int *)(iVar16 + DAT_080aee3c) + 0x4c) = 0;
    }
    else {
      iVar13 = FUN_0800c5e8();
      if (((iVar13 == 0) && (iVar13 = FUN_0800c61c(), iVar13 == 0)) &&
         (iVar13 = FUN_0800c684(), iVar13 == 0)) {
        FUN_08019c88(*(undefined4 *)(iVar16 + DAT_080aee3c),local_48,(int)(short)local_3c);
      }
      if ((local_44 & 2) != 0) {
        local_3c = local_3c * 0x10000 + DAT_080aee40 >> 0x10;
      }
      local_44 = local_44 - 1 & 0xffff;
    }
    iVar13 = DAT_080aeed8;
    piVar18 = (int *)(iVar16 + DAT_080aeed8);
    sVar5 = FUN_08019824(*piVar18);
    if (sVar5 != 0) {
      local_30 = 0;
    }
    FUN_080003f0();
  } while (local_30 != 0);
  FUN_080682e4(*(undefined2 *)(*piVar18 + 2));
  *DAT_080aeedc = *DAT_080aeedc & ~(1 << (*(ushort *)*piVar18 & 0xff));
  *(undefined1 *)(DAT_080aeee0 + param_1) = 0xff;
  if (param_1 != 0) {
    FUN_08019c08(*(undefined4 *)((param_1 - 1) * 4 + iVar13));
  }
  puVar1 = DAT_080aeee4;
  uVar7 = 0x14;
  iVar6 = iVar6 * 8;
  piVar8 = (int *)(DAT_080aeee8 + 4 + iVar6);
  do {
    puVar15 = DAT_080aeeec;
    *(char *)(puVar1 + 7) = (char)*DAT_080aeeec;
    FUN_08000af0(*puVar15 + 0x10,puVar1[3],1);
    uVar9 = FUN_08098318();
    if ((uVar9 & 1) == 0) {
      uVar2 = FUN_0800b5ac(*(int *)(DAT_080af028 + iVar6) >> 8,*piVar8 >> 8,0);
    }
    else {
      uVar2 = FUN_0809830c();
    }
    iVar13 = FUN_0800c6dc();
    if (iVar13 == 0) {
      uVar4 = FUN_0806599c(DAT_080af02c,0x18,*piVar18 + 0x6a,*piVar18 + 0x6c,0);
      *(undefined2 *)(*piVar18 + 0x6e) = uVar4;
    }
    FUN_0800b570((int)*(short *)(DAT_080af028 + iVar6),(int)(short)*piVar8,local_28,local_24,0,0);
    iVar13 = FUN_0800c61c();
    if (((iVar13 == 0) && (iVar13 = FUN_0800c5e8(), iVar13 == 0)) &&
       ((iVar13 = FUN_0800c6dc(), iVar13 == 0 &&
        ((iVar13 = FUN_0800c684(), iVar13 == 0 && ((uVar7 & 1) != 0)))))) {
      FUN_08007378((int)*local_28,(int)*local_24,0x18,*(undefined2 *)(*piVar18 + 0x6a),uVar2,
                   DAT_080af030,puVar1[2],*puVar1);
    }
    FUN_080003f0();
    uVar7 = uVar7 - 1 & 0xffff;
  } while (uVar7 != DAT_080af034);
  iVar13 = FUN_080020f4();
  if (((*(uint *)(iVar13 * 0x154 + DAT_080af038 + 0x38) & 0x2000) == 0) &&
     (piVar18 = (int *)(iVar16 + DAT_080af03c), *(short *)(*piVar18 + 0x5a) != 0)) {
    uVar10 = FUN_0801e274(*DAT_080af040,local_4c);
    local_3c = 0x1d;
    do {
      iVar13 = *piVar18;
      *(int *)(iVar13 + 0x18) = *(int *)(iVar13 + 0x18) + -0x20;
      FUN_08061e9c(iVar13,uVar10);
      FUN_080003f0();
      uVar7 = local_3c * 0x10000 + DAT_080af044;
      local_3c = uVar7 >> 0x10;
    } while ((int)uVar7 >> 0x10 != -1);
    FUN_0801c87c(*DAT_080af040,uVar10);
  }
  return unaff_lr;
}

