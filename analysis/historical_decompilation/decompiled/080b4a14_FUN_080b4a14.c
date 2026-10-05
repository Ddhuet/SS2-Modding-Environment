
/* WARNING: Removing unreachable block (ram,0x080b544c) */
/* WARNING: Removing unreachable block (ram,0x080b5338) */
/* WARNING: Removing unreachable block (ram,0x080b52f4) */
/* WARNING: Removing unreachable block (ram,0x080b52fa) */
/* WARNING: Removing unreachable block (ram,0x080b52fe) */
/* WARNING: Removing unreachable block (ram,0x080b52ec) */
/* WARNING: Removing unreachable block (ram,0x080b5320) */
/* WARNING: Removing unreachable block (ram,0x080b543a) */
/* WARNING: Removing unreachable block (ram,0x080b5440) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080b4a14(void)

{
  ushort uVar1;
  int *piVar2;
  char cVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint extraout_r1;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  int *piVar13;
  ushort *puVar14;
  short *psVar15;
  undefined2 *puVar16;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 auStack_178 [2];
  undefined4 uStack_170;
  int local_16c;
  undefined1 local_15c [24];
  undefined1 auStack_144 [28];
  undefined1 local_128;
  undefined1 auStack_110 [28];
  undefined1 local_f4;
  undefined1 auStack_dc [28];
  undefined1 local_c0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [32];
  short sStack_78;
  short asStack_76 [9];
  int local_64;
  int iStack_60;
  int local_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint local_4c;
  int local_48;
  uint uStack_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  *puRam080b4bbc = *puRam080b4bbc | 2;
  piVar13 = piRam080b4bc0;
  iVar6 = *piRam080b4bc4;
  puVar7 = (undefined2 *)(iRam080b4bc8 + iVar6);
  *piRam080b4bc0 = (int)puVar7;
  *puVar7 = 1;
  puVar7[1] = 6;
  puVar16 = (undefined2 *)(iRam080b4bcc + 0x90);
  *(undefined2 *)(iRam080b4bd0 + iVar6) = *puVar16;
  local_64 = iVar6 + 0x658;
  FUN_08015c70(puVar7,uRam080b4bd4,1);
  FUN_08019c08(*piVar13);
  iVar11 = *piVar13;
  sVar5 = *(short *)(iRam080b4bd8 + iVar6) * 3;
  *(short *)(iVar11 + 0x1d6) = sVar5;
  *(short *)(iVar11 + 0x5c) = sVar5;
  sVar5 = *(short *)(iVar6 + 2000) * 0x14;
  *(short *)(iVar11 + 0x1d4) = sVar5;
  *(short *)(iVar11 + 0x5e) = sVar5;
  *(undefined1 *)(iVar11 + iRam080b4bdc) = 1;
  *(undefined1 *)(*piVar13 + 0x1fe) = 1;
  iVar11 = *piVar13;
  *(undefined2 *)(iVar11 + 0xc) = 0;
  *(undefined4 *)(iVar11 + 0x50) = 1;
  local_58 = *puRam080b4be0 + 1 & 0xffff;
  FUN_08065784(auStack_178,uRam080b4be4,local_58,0xffffffff,1);
  FUN_08065784(auStack_144,uRam080b4be8,local_58,0xffffffff,1);
  FUN_08065784(auStack_110,uRam080b4bec,local_58,0xffffffff,1);
  FUN_08065784(auStack_dc,uRam080b4bf0,local_58,0xffffffff,1);
  local_15c[0] = (undefined1)local_58;
  local_128 = (undefined1)local_58;
  local_f4 = (undefined1)local_58;
  local_c0 = (undefined1)local_58;
  pbVar12 = (byte *)*piVar13;
  pbVar12[0x6e] = 0;
  pbVar12[0x6f] = 0;
  pbVar12[0x6c] = 0;
  pbVar12[0x6d] = 0;
  pbVar12[0x6a] = 0;
  pbVar12[0x6b] = 0;
  pbVar12[0x68] = 0;
  pbVar12[0x69] = 0;
  pbVar12[0] = 1;
  pbVar12[1] = 0;
  pbVar12[2] = 5;
  pbVar12[3] = 0;
  *(undefined2 *)(pbVar12 + 0x48) = *puVar16;
  pbVar12[0x1fc] = pbVar12[0x1fc] & 0xf0 | *pbVar12 & 0xf;
  iVar11 = *piVar13;
  *(undefined2 *)(iVar11 + iRam080b4bf4) = *(undefined2 *)(iVar11 + 2);
  *(undefined1 *)(iVar11 + 0x200) = 0xff;
  local_4c = 0;
  local_50 = 0;
  local_28 = 0;
  local_30 = 0;
  local_48 = 0;
  local_2c = 0;
  local_34 = 1;
  local_24 = 1;
  local_5c = 0;
  FUN_08098284(auStack_98,local_16c + (uint)*(ushort *)(iVar6 + iRam080b4bf8) * 0x20);
  FUN_080b5730();
  _DAT_00000019 = 0;
  if ((*(short *)(*DAT_080b4c3c + 0xc) == 10) && (local_4c == 0)) {
    local_4c = 8;
  }
  iVar6 = FUN_0805a1e4(*(short *)(*DAT_080b4c3c + 0xc),extraout_r1 >> 1,extraout_r1 >> 3);
  piVar13 = DAT_080b4c3c;
  if (iVar6 == 0) {
    FUN_0801c540(*DAT_080b4c3c);
    uVar8 = *(byte *)(*piVar13 + DAT_080b4c40) - 1;
    if (uVar8 < 0x14) {
                    /* WARNING: Could not recover jumptable at 0x080b4c3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar8 * 4 + DAT_080b4c44))();
      return;
    }
  }
  piVar2 = DAT_080b531c;
  piVar13 = DAT_080b5318;
  if (local_24 == 0) {
    piVar13 = DAT_080b5244;
    if ((uint)(int)*(short *)(*DAT_080b5244 + 8) < 8) {
                    /* WARNING: Could not recover jumptable at 0x080b5240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(short *)(*DAT_080b5244 + 8) * 4 + DAT_080b5250))();
      return;
    }
  }
  else {
    if (*DAT_080b52a0 < 8) {
                    /* WARNING: Could not recover jumptable at 0x080b529c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*DAT_080b52a0 * 4 + DAT_080b52a4))();
      return;
    }
    iVar6 = *DAT_080b5318;
    *(int *)(iVar6 + 0x14) = *DAT_080b531c + 0x580;
    *(int *)(iVar6 + 0x18) = piVar2[1] + DAT_080b5370;
  }
  iVar6 = *piVar13;
  uVar1 = *(ushort *)(iVar6 + 0xc);
  if (uVar1 == 1) {
    local_48 = 1;
    *(undefined2 *)(iVar6 + 0x68) = 4;
  }
  else if (uVar1 < 2) {
    if (uVar1 == 0) {
      local_48 = 1;
      *(undefined2 *)(iVar6 + 0x68) = 0;
    }
  }
  else if (uVar1 == 2) {
    local_48 = 0;
    puVar14 = (ushort *)(iVar6 + 0x68);
    *puVar14 = 0;
    cVar3 = *(char *)(iVar6 + DAT_080b53dc);
    if (((cVar3 == '\x11') || (cVar3 == '\v')) || (cVar3 == '\x12')) {
      iVar6 = *piVar13;
      psVar15 = (short *)(iVar6 + 0x68);
      sVar5 = *psVar15;
      *psVar15 = sVar5 * 2;
      if (*(char *)(iVar6 + DAT_080b53dc) == '\v') {
        *psVar15 = sVar5 * 2 + 1;
      }
    }
    else if ((cVar3 == '\x03') && (local_24 != 0)) {
      local_48 = 1;
      if (uStack_54 == 0) goto LAB_080b542c;
      *(undefined2 *)(iVar6 + 0x6c) = 0;
      *(undefined2 *)(iVar6 + 0x6a) = 0;
      uStack_54 = (uint)*puVar14;
      *puVar14 = 0;
    }
  }
  iVar6 = *DAT_080b543c;
  if (uStack_54 != *(ushort *)(iVar6 + 0x68)) {
    uStack_54 = (uint)*(ushort *)(iVar6 + 0x68);
    *(undefined2 *)(iVar6 + 0x6c) = 0;
    *(undefined2 *)(iVar6 + 0x6a) = 0;
  }
LAB_080b542c:
  uStack_38 = 8;
  if (local_34 == 0) {
    FUN_08000af0(local_58 + 0x10,auStack_98,1);
  }
  else {
    FUN_08000af0(local_58 + 0x10,local_16c + (uint)*(ushort *)(local_64 + DAT_080b5480) * 0x20,1);
  }
  uVar8 = FUN_08098318();
  if ((uVar8 & 1) == 0) {
    cVar3 = FUN_0800b5ac(*(int *)(*DAT_080b54f4 + 0x14) >> 8,*(int *)(*DAT_080b54f4 + 0x18) >> 8,0);
  }
  else {
    cVar3 = FUN_0809830c();
  }
  iVar6 = FUN_0800c6dc();
  piVar2 = DAT_080b55bc;
  piVar13 = DAT_080b54f4;
  if (iVar6 == 0) {
    if (local_48 == 0) {
      iVar6 = *DAT_080b54f4;
      uVar4 = FUN_0806599c(auStack_178,*(undefined2 *)(iVar6 + 0x68),iVar6 + 0x6a,iVar6 + 0x6c,0);
      *(undefined2 *)(*piVar13 + 0x6e) = uVar4;
    }
    else {
      iVar6 = *DAT_080b55bc;
      FUN_0806599c(auStack_178,*(undefined2 *)(iVar6 + 0x68),iVar6 + 0x6a,iVar6 + 0x6c,local_48);
      *(undefined2 *)(*piVar2 + 0x6e) = 0;
    }
  }
  piVar13 = DAT_080b55bc;
  FUN_0800b570((*(int *)(*DAT_080b55bc + 0x14) << 8) >> 0x10,
               (*(int *)(*DAT_080b55bc + 0x18) - local_5c) * 0x100 >> 0x10,&sStack_78,asStack_76,0,0
              );
  if (local_4c == 0) {
    iVar6 = FUN_0800c61c();
    if (((iVar6 == 0) && (iVar6 = FUN_0800c5e8(), iVar6 == 0)) &&
       (iVar6 = FUN_0800c684(), iVar6 == 0)) {
      iVar6 = *piVar13;
      FUN_08007378((int)sStack_78,(int)asStack_76[0],*(undefined2 *)(iVar6 + 0x68),
                   *(undefined2 *)(iVar6 + 0x6a),cVar3,local_15c,uStack_170,auStack_178[0]);
    }
  }
  else {
    uVar8 = local_4c - 1 & 0xffff;
    uVar10 = local_4c & 1;
    local_4c = uVar8;
    if ((((uVar10 != 0) && (iVar6 = FUN_0800c61c(), iVar6 == 0)) &&
        (iVar6 = FUN_0800c5e8(), iVar6 == 0)) && (iVar6 = FUN_0800c684(), iVar6 == 0)) {
      iVar6 = *piVar13;
      FUN_08007378((int)sStack_78,(int)asStack_76[0],*(undefined2 *)(iVar6 + 0x68),
                   *(undefined2 *)(iVar6 + 0x6a),cVar3,local_15c,uStack_170,auStack_178[0]);
    }
  }
  iVar6 = FUN_0800c6dc();
  if (((iVar6 == 0) && (iVar6 = FUN_0800c61c(), iVar6 == 0)) &&
     ((iVar6 = FUN_0800c5e8(), iVar6 == 0 &&
      ((iVar6 = FUN_0800c684(), iVar6 == 0 && ((*DAT_080b5708 & 1) != 0)))))) {
    FUN_0800b570((*(int *)(*DAT_080b570c + 0x14) << 8) >> 0x10,
                 (*(int *)(*DAT_080b570c + 0x18) << 8) >> 0x10,&sStack_78,asStack_76,0,0);
    iVar6 = FUN_08007378((int)sStack_78,2,uStack_38,0,cVar3 + '\x01',local_15c,uStack_170,
                         auStack_178[0]);
    *(int *)(iVar6 + 0xc) = (int)asStack_76[0];
  }
  iVar6 = *(int *)(*DAT_080b570c + 0x4c);
  if ((iVar6 != 0) && (iStack_60 != iVar6)) {
    local_50 = 10;
    uStack_3c = 0;
    iStack_60 = iVar6;
  }
  if (local_50 == 0) {
    iStack_60 = 0;
    *(undefined4 *)(*DAT_080b5824 + 0x4c) = 0;
  }
  else {
    iVar6 = FUN_0800c5e8();
    if (((iVar6 == 0) && (iVar6 = FUN_0800c61c(), iVar6 == 0)) &&
       (iVar6 = FUN_0800c684(), iVar6 == 0)) {
      FUN_08019c88(*DAT_080b570c,iStack_60,(int)(short)uStack_3c);
    }
    if ((local_50 & 2) != 0) {
      uStack_3c = uStack_3c * 0x10000 + DAT_080b5710 >> 0x10;
    }
    local_50 = local_50 - 1 & 0xffff;
  }
  FUN_080003f0();
  sVar5 = FUN_08019824(*DAT_080b5824);
  if (((sVar5 == 0) && (iVar6 = FUN_0800c4c8(), iVar6 == 0)) && (iVar6 = FUN_08058354(), iVar6 == 0)
     ) {
    FUN_080b4bfc();
  }
  piVar13 = DAT_080b5824;
  puVar14 = (ushort *)*DAT_080b5824;
  *DAT_080b5828 = *DAT_080b5828 & ~(1 << (*puVar14 & 0xff));
  *(undefined1 *)((int)puVar14 + DAT_080b582c) = 0;
  *(undefined1 *)(*piVar13 + DAT_080b5830) = 0;
  iVar6 = *piVar13;
  *(undefined2 *)(iVar6 + 0x68) = 0;
  *(undefined2 *)(iVar6 + 0x6c) = 0;
  *(undefined2 *)(iVar6 + 0x6a) = 0;
  FUN_080682e4(*(undefined2 *)(iVar6 + 2));
  FUN_08059a8c(0xbd);
  FUN_080973e0(*piVar13,auStack_178,*(undefined2 *)(local_64 + DAT_080b5834),local_58);
  iVar6 = FUN_080020f4();
  if (((*(uint *)(iVar6 * 0x154 + DAT_080b5838 + 0x38) & 0x2000) == 0) &&
     (*(short *)(*piVar13 + 0x5a) != 0)) {
    uVar9 = FUN_0801e274(*DAT_080b583c,local_64);
    uStack_3c = 0x1d;
    do {
      iVar6 = *DAT_080b5824;
      *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + -0x20;
      FUN_08061e9c(iVar6,uVar9);
      FUN_080003f0();
      uVar8 = uStack_3c * 0x10000 + DAT_080b5840;
      uStack_3c = uVar8 >> 0x10;
    } while ((int)uVar8 >> 0x10 != -1);
    FUN_0801c87c(*DAT_080b583c,uVar9);
  }
  iVar6 = FUN_08002204();
  if (iVar6 != 0) {
    iVar6 = FUN_0805ccc8(*DAT_080b5844,auStack_a8);
    if (iVar6 != 0) {
      while ((iVar6 = FUN_08066a74(*(undefined4 *)(*DAT_080b5878 + 0x14),
                                   *(undefined4 *)(*DAT_080b5878 + 0x18),auStack_a8), iVar6 == 0 &&
             (iVar6 = FUN_08058354(), iVar6 == 0))) {
        FUN_080003f0();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x080b5874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

