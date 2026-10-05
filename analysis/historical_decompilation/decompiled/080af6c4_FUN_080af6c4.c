
void FUN_080af6c4(uint param_1)

{
  ushort uVar1;
  short sVar2;
  short *psVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  byte *pbVar18;
  undefined2 local_94;
  short sStack_92;
  short asStack_90 [2];
  uint local_8c;
  byte *local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint uStack_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  byte *local_48;
  byte *local_44;
  undefined2 *local_40;
  int local_3c;
  int iStack_38;
  short *local_34;
  short *local_30;
  ushort *local_2c;
  byte *local_28;
  byte *local_24;
  
  local_8c = param_1 & 0xff;
  pbVar18 = (byte *)(*DAT_080af8a0 + DAT_080af8a4 * local_8c);
  *DAT_080af8a8 = *DAT_080af8a8 | 1 << local_8c;
  iVar15 = DAT_080af8ac;
  local_4c = local_8c * 0xac;
  puVar14 = (undefined4 *)(local_4c + DAT_080af8ac);
  *puVar14 = pbVar18;
  FUN_08015c70(pbVar18,DAT_080af8b0,local_8c);
  local_88 = pbVar18 + 0x204;
  FUN_08019aa8();
  pbVar18[0x54] = 0;
  pbVar18[0x55] = 0;
  pbVar18[0x56] = 0;
  pbVar18[0x57] = 0;
  pbVar18[0x4c] = 0;
  pbVar18[0x4d] = 0;
  pbVar18[0x4e] = 0;
  pbVar18[0x4f] = 0;
  pbVar18[0x4a] = 0;
  pbVar18[0x4b] = 0;
  pbVar9 = pbVar18 + 0x6c;
  pbVar9[0] = 0;
  pbVar9[1] = 0;
  pbVar18[0x10] = 0;
  pbVar18[0x11] = 0;
  local_48 = pbVar18 + 0x68;
  local_48[0] = 0;
  local_48[1] = 0;
  local_94 = 0;
  local_44 = pbVar18 + 0x6a;
  local_44[0] = 0;
  local_44[1] = 0;
  pbVar18[8] = 0;
  pbVar18[9] = 0;
  *(short *)pbVar18 = (short)local_8c;
  *(short *)(pbVar18 + 2) = (short)local_8c + 4;
  pbVar18[0xc] = 0;
  pbVar18[0xd] = 0;
  *(undefined2 *)(pbVar18 + 0x48) = *(undefined2 *)(DAT_080af8b4 + 0x90);
  pbVar18[DAT_080af8b8] = 0x18;
  pbVar18[DAT_080af8bc] = 0x14;
  iVar8 = DAT_080af8c0;
  local_6c = (uint)*(ushort *)(DAT_080af8c0 + 0x12);
  local_40 = (undefined2 *)((int)puVar14 + 0xa6);
  *local_40 = 4;
  *(undefined2 *)(puVar14 + 0x2a) = *(undefined2 *)(iVar8 + 0x14);
  FUN_080b9a88(iVar8 + 0x60,pbVar18 + 0x1cc,0x18);
  FUN_080b9a88(iVar8 + 0x40,pbVar18 + 0x378,0x10);
  FUN_08019c08(pbVar18);
  pbVar18[0x1dc] = 4;
  *(undefined2 *)(pbVar18 + 0x5e) = *(undefined2 *)(pbVar18 + 0x1d4);
  iVar16 = DAT_080af8c4;
  *(undefined2 *)(pbVar18 + DAT_080af8c4) = *(undefined2 *)(iVar8 + 0x62);
  *(undefined2 *)(pbVar18 + DAT_080af8c8) = *(undefined2 *)(iVar8 + 0x6c);
  *(undefined2 *)(pbVar18 + iVar16 + 0xcc) = *local_40;
  pbVar18[0x50] = 1;
  pbVar18[0x51] = 0;
  pbVar18[0x52] = 0;
  pbVar18[0x53] = 0;
  pbVar18[DAT_080af8cc] = 3;
  pbVar18[0x1fe] = 3;
  pbVar18[0xc] = 0;
  pbVar18[0xd] = 0;
  local_78 = 0;
  local_74 = DAT_080af8d0;
  local_68 = 0;
  local_64 = 0;
  pbVar9[0] = 0;
  pbVar9[1] = 0;
  local_94 = 0;
  local_44[0] = 0;
  local_44[1] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_5c = 0;
  local_60 = 0;
  local_54 = 0;
  local_50 = 0;
  uVar7 = 0;
  local_34 = &sStack_92;
  local_30 = asStack_90;
  do {
    *(undefined1 *)((short)uVar7 + local_4c + iVar15 + 0xa0) = 0;
    uVar10 = (int)(short)uVar7 + 1;
    uVar7 = uVar10 & 0xffff;
  } while ((int)(uVar10 * 0x10000) >> 0x10 < 4);
  pbVar18[0x1fc] = pbVar18[0x1fc] & 0xf0 | *pbVar18 & 0xf;
  *(undefined2 *)(pbVar18 + DAT_080af8d4) = *(undefined2 *)(pbVar18 + 2);
  pbVar18[0x200] = 0xff;
  if (local_6c < 9) {
                    /* WARNING: Could not recover jumptable at 0x080af89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(local_6c * 4 + DAT_080af8d8))();
    return;
  }
  iVar8 = FUN_08006d98(*(ushort *)(local_88 + 0x19c) | 0xb0000);
  iVar15 = DAT_080afc50;
  local_70 = (uint)*(ushort *)(iVar8 + 0x174);
  iVar16 = local_8c * 0xac + DAT_080afc4c;
  iVar8 = local_70 * 4 + local_6c * 0x58;
  local_3c = local_8c * 0xac + DAT_080afc4c + -4;
  puVar13 = (undefined2 *)(local_3c + 0xa6);
  FUN_08065784(iVar16,*(undefined4 *)(iVar8 + DAT_080afc50),*puVar13,0xffffffff,0);
  FUN_08065784(iVar16 + 0x34,*(undefined4 *)(iVar8 + iVar15 + 0x2c),*puVar13,0xffffffff,0);
  *(char *)(local_3c + 0x20) = (char)*puVar13;
  *(char *)(local_3c + 0x54) = (char)*puVar13;
  if (((local_6c == 8) || (local_6c == 6)) || (local_6c == 1)) {
    iVar15 = local_8c * 0xac + DAT_080afc4c + -4;
    puVar13 = (undefined2 *)(iVar15 + 0xa6);
    FUN_08065784(local_8c * 0xac + DAT_080afc4c + 0x68,
                 *(undefined4 *)(local_6c * 0x58 + DAT_080afc50 + 0x50),*puVar13,0xffffffff,0);
    *(char *)(iVar15 + 0x88) = (char)*puVar13;
  }
  iVar15 = FUN_0800c780();
  if (iVar15 == 1) {
    *(short *)(pbVar18 + 0x5c) = (*(short *)(local_88 + 0x17a) + 1000) * 3;
    local_7c = 5;
    local_80 = 5;
  }
  else {
    *(short *)(pbVar18 + 0x5c) = (*(short *)(local_88 + 0x17a) + 500) * 3;
    local_7c = 3;
    local_80 = 3;
  }
  FUN_080689cc(*(undefined2 *)pbVar18);
  local_24 = pbVar18 + 0x6c;
  local_2c = (ushort *)(pbVar18 + 0x68);
  local_28 = pbVar18 + 0x6a;
  while (iVar15 = FUN_08068954(*(undefined2 *)pbVar18), iVar15 == 0) {
    FUN_080003f0();
  }
  FUN_08066468(*(undefined2 *)pbVar18);
  if ((*(short *)(pbVar18 + 0xc) == 10) && (local_68 == 0)) {
    local_68 = 8;
    pcVar11 = (char *)(local_8c * 0xac + (uint)*(ushort *)(pbVar18 + 0x58) + DAT_080afd08 + 0xa0);
    *pcVar11 = *pcVar11 + '\x01';
  }
  iVar15 = FUN_0805a1e4();
  if (iVar15 == 0) {
    FUN_0801c540(pbVar18);
    if (pbVar18[DAT_080afd0c] - 1 < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x080afd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((pbVar18[DAT_080afd0c] - 1) * 4 + DAT_080afd10))();
      return;
    }
  }
  if (local_78 == 1) {
    local_50 = 0;
    *local_2c = *(short *)(pbVar18 + 8) + 8;
    local_54 = 1;
  }
  else if (local_78 < 2) {
    if (local_78 == 0) {
      local_50 = 0;
      *local_2c = *(ushort *)(pbVar18 + 8);
      local_54 = 1;
    }
  }
  else if (local_78 == 2) {
    local_50 = 1;
    *local_2c = *(ushort *)(pbVar18 + 8);
    local_54 = 0;
  }
  else if (local_78 == 9) {
    local_50 = 2;
    local_54 = 0;
  }
  if (local_74 != *local_2c) {
    local_74 = (uint)*local_2c;
    local_24[0] = 0;
    local_24[1] = 0;
    local_28[0] = 0;
    local_28[1] = 0;
  }
  uVar7 = FUN_08098318();
  if ((uVar7 & 1) == 0) {
    uVar4 = FUN_0800b5ac(*(int *)(pbVar18 + 0x14) >> 8,*(int *)(pbVar18 + 0x18) >> 8,0);
  }
  else {
    uVar4 = FUN_0809830c();
  }
  iVar15 = FUN_0800c6dc();
  if (iVar15 == 0) {
    if ((pbVar18[DAT_080b0268] == 0xb) || (pbVar18[DAT_080b0268] == 9)) {
      iVar15 = local_8c * 0xac + DAT_080b026c + local_50 * 0x34;
      uVar1 = *local_2c;
      pbVar9 = (byte *)&local_94;
    }
    else {
      iVar15 = local_8c * 0xac + DAT_080b0340 + local_50 * 0x34;
      uVar1 = *local_2c;
      pbVar9 = local_28;
    }
    uVar5 = FUN_0806599c(iVar15,uVar1,pbVar9,local_24,local_54);
    *(undefined2 *)(pbVar18 + 0x6e) = uVar5;
  }
  FUN_0800b570((*(int *)(pbVar18 + 0x14) << 8) >> 0x10,(*(int *)(pbVar18 + 0x18) << 8) >> 0x10,
               local_34,local_30,0,0);
  if (local_68 == 0) {
    iVar15 = FUN_0800c61c();
    if (((iVar15 != 0) || (iVar15 = FUN_0800c5e8(), iVar15 != 0)) ||
       (iVar8 = FUN_0800c684(), iVar15 = DAT_080b03fc, iVar8 != 0)) goto LAB_080b043c;
    iVar16 = local_8c * 0xac;
    iVar8 = local_50 * 0x34;
    iVar12 = iVar8 + iVar16;
    FUN_08000af0(*(ushort *)(iVar16 + DAT_080b03fc + 0xa6) + 0x10,
                 *(int *)(iVar12 + DAT_080b03fc + 0x10) +
                 (uint)*(ushort *)(iVar16 + DAT_080b03fc + 0xa8) * 0x20,1);
    if ((pbVar18[DAT_080b0400] != 0xb) && (pbVar18[DAT_080b0400] != 9)) {
      FUN_08007378((int)*local_34,(int)*local_30,*local_2c,*(undefined2 *)local_28,uVar4,
                   iVar16 + iVar15 + 4 + iVar8 + 0x1c,*(undefined4 *)(iVar12 + iVar15 + 0xc),
                   *(undefined4 *)(iVar12 + iVar15 + 4));
      goto LAB_080b043c;
    }
    sVar6 = *local_34;
    sVar2 = *local_30;
LAB_080b03ce:
    uVar1 = *local_2c;
    uVar5 = local_94;
  }
  else {
    uVar7 = local_68 - 1 & 0xffff;
    uVar10 = local_68 & 1;
    local_68 = uVar7;
    if (((uVar10 == 0) || (iVar15 = FUN_0800c61c(), iVar15 != 0)) ||
       ((iVar15 = FUN_0800c5e8(), iVar15 != 0 ||
        (iVar8 = FUN_0800c684(), iVar15 = DAT_080b0344, iVar8 != 0)))) goto LAB_080b043c;
    iVar16 = local_8c * 0xac;
    iVar8 = local_50 * 0x34;
    iVar12 = iVar8 + iVar16;
    FUN_08000af0(*(ushort *)(iVar16 + DAT_080b0344 + 0xa6) + 0x10,
                 *(int *)(iVar12 + DAT_080b0344 + 0x10) +
                 (uint)*(ushort *)(iVar16 + DAT_080b0344 + 0xa8) * 0x20,1);
    if ((pbVar18[DAT_080b0348] == 0xb) || (pbVar18[DAT_080b0348] == 9)) {
      sVar6 = *local_34;
      sVar2 = *local_30;
      goto LAB_080b03ce;
    }
    sVar6 = *local_34;
    sVar2 = *local_30;
    uVar1 = *local_2c;
    uVar5 = *(undefined2 *)local_28;
  }
  FUN_08007378((int)sVar6,(int)sVar2,uVar1,uVar5,uVar4,iVar16 + iVar15 + 4 + iVar8 + 0x1c,
               *(undefined4 *)(iVar12 + iVar15 + 0xc),*(undefined4 *)(iVar12 + iVar15 + 4));
LAB_080b043c:
  iVar15 = *(int *)(pbVar18 + 0x4c);
  if ((iVar15 != 0) && (iStack_84 != iVar15)) {
    local_64 = 10;
    uStack_58 = 0;
    iStack_84 = iVar15;
  }
  if (local_64 == 0) {
    iStack_84 = 0;
    pbVar18[0x4c] = 0;
    pbVar18[0x4d] = 0;
    pbVar18[0x4e] = 0;
    pbVar18[0x4f] = 0;
  }
  else {
    iVar15 = FUN_0800c5e8();
    if (((iVar15 == 0) && (iVar15 = FUN_0800c61c(), iVar15 == 0)) &&
       (iVar15 = FUN_0800c684(), iVar15 == 0)) {
      FUN_08019c88(pbVar18,iStack_84,(int)(short)uStack_58);
    }
    if ((local_64 & 2) != 0) {
      uStack_58 = uStack_58 * 0x10000 + DAT_080b04a0 >> 0x10;
    }
    local_64 = local_64 - 1 & 0xffff;
  }
  sVar6 = FUN_08019824(pbVar18);
  if (sVar6 == 0) {
    FUN_080afca8();
  }
  FUN_080003f0();
  iVar15 = DAT_080b0534;
  iVar8 = local_8c * 0xac;
  piVar17 = (int *)(iVar8 + DAT_080b0534);
  FUN_080682e4(*(undefined2 *)(*piVar17 + 2));
  iVar16 = FUN_0800048c();
  psVar3 = local_34;
  iVar12 = *(int *)(iVar16 + 8) + -0x44;
  *(int *)(iVar16 + 8) = iVar12;
  *DAT_080b0538 = *DAT_080b0538 & ~(1 << (**(ushort **)(iVar12 * 0xac + iVar15) & 0xff));
  local_50 = 0;
  *(undefined2 *)(*piVar17 + 0x68) = 0x18;
  local_24[0] = 0;
  local_24[1] = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  local_54 = 0;
  iVar15 = DAT_080b053c + iVar8;
  iStack_38 = iVar15 + 0x1c;
  do {
    uVar7 = FUN_08098318();
    if ((uVar7 & 1) == 0) {
      uVar4 = FUN_0800b5ac(*(int *)(pbVar18 + 0x14) >> 8,*(int *)(pbVar18 + 0x18) >> 8,0);
    }
    else {
      uVar4 = FUN_0809830c();
    }
    iVar16 = FUN_0800c6dc();
    if (iVar16 == 0) {
      uVar5 = FUN_0806599c(iVar15,*local_2c,local_28,local_24,local_54);
      *(undefined2 *)(pbVar18 + 0x6e) = uVar5;
    }
    iVar16 = FUN_0800c61c();
    if (((iVar16 == 0) && (iVar16 = FUN_0800c5e8(), iVar16 == 0)) &&
       ((iVar16 = FUN_0800c684(), iVar16 == 0 &&
        (uVar7 = local_68 - 1 & 0xffff, uVar10 = local_68 & 1, local_68 = uVar7, uVar10 != 0)))) {
      FUN_0800b570((*(int *)(pbVar18 + 0x14) << 8) >> 0x10,(*(int *)(pbVar18 + 0x18) << 8) >> 0x10,
                   psVar3,local_30,0,0);
      FUN_08000af0(*(ushort *)(iVar8 + DAT_080b0618 + 0xa6) + 0x10,
                   *(int *)(iVar8 + DAT_080b0618 + 0x10) +
                   (uint)*(ushort *)(iVar8 + DAT_080b0618 + 0xa8) * 0x20,1);
      FUN_08007378((int)*psVar3,(int)*local_30,*local_2c,*(undefined2 *)local_28,uVar4,iStack_38,
                   *(undefined4 *)(DAT_080b061c + iVar8),*(undefined4 *)(iVar8 + DAT_080b0620));
    }
    FUN_080003f0();
  } while( true );
}

