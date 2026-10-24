
undefined4 FUN_0804cf54(undefined4 param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int unaff_r4;
  undefined4 unaff_lr;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  
  piVar1 = DAT_0804cfb0;
  uVar7 = *(uint *)(*DAT_0804cfb0 + 0x38);
  if ((uVar7 & 2) != 0) {
    return unaff_lr;
  }
  *(uint *)(*DAT_0804cfb0 + 0x38) = uVar7 | 2;
  iVar3 = FUN_0800c61c();
  if (iVar3 != 0) {
    return unaff_lr;
  }
  if (*(short *)(DAT_0804cfb4 + 0x90) != 4) {
    return unaff_lr;
  }
  iVar3 = FUN_080020f4();
  iVar3 = iVar3 * 0x154 + DAT_0804cfb8;
  *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) | 1;
  FUN_0800ca44();
  do {
    puVar8 = (uint *)(*piVar1 + DAT_0804cff8);
    uVar7 = 0;
    unaff_r4 = unaff_r4 + 1;
    do {
      if (((1 << (uVar7 & 0xff) & *(uint *)(*piVar1 + 0x54)) != 0) && (puVar8[1] == 0x13)) {
        uVar7 = *puVar8;
        goto LAB_0804cfee;
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 0x1c;
    } while (uVar7 < 0xf);
    uVar7 = 0;
LAB_0804cfee:
    sVar2 = 1;
    do {
      FUN_080003f0();
      iVar3 = FUN_080021a8();
      if (iVar3 != 0) break;
      sVar2 = sVar2 + -1;
    } while (sVar2 != 0);
  } while ((uVar7 == 0) && (unaff_r4 <= DAT_0804cff4));
  *DAT_0804d064 = 0xc4;
  if ((*DAT_0804d068 & 0x20) == 0) {
    FUN_08006794(0xc4);
  }
  if (uVar7 < 0x100001) {
    if (uVar7 != 0) {
      if (uVar7 - 1 < 5) {
        FUN_08019a00(*(undefined2 *)(*DAT_0804d098 + DAT_0804d09c * (uVar7 - 1) + 2),3);
      }
      goto LAB_0804d0ba;
    }
    iVar3 = FUN_080020f4();
    puVar4 = (undefined2 *)(iVar3 * 0x154 + DAT_0804d0c0 + 0x126);
  }
  else {
    puVar8 = (uint *)(*DAT_0804d06c + DAT_0804d070);
    uVar9 = 0;
    do {
      if (*puVar8 == uVar7) goto LAB_0804d05a;
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 0x1c;
    } while (uVar9 < 0xf);
    FUN_080003f0();
    puVar8 = (uint *)0x0;
LAB_0804d05a:
    if (puVar8 == (uint *)0x0) goto LAB_0804d0ba;
    puVar4 = (undefined2 *)((int)puVar8 + 0x42);
  }
  *puVar4 = 3;
LAB_0804d0ba:
  sVar2 = 0x1e;
  do {
    FUN_080003f0();
    iVar3 = FUN_080021a8();
    if (iVar3 != 0) break;
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  FUN_08029444(uVar7,8);
  FUN_08028b3c(uVar7,0xb8,0xbb,0x28);
  FUN_08029444(uVar7,0);
  while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
    FUN_080003f0();
  }
  while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
    FUN_080003f0();
  }
  uVar5 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_0804d12c);
  while (iVar3 = FUN_0805f820(uVar5), iVar3 == 0) {
    FUN_080003f0();
  }
  iVar3 = FUN_080020f4();
  iVar3 = iVar3 * 0x154 + DAT_0804d180;
  *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) & 0xfffffffe;
  FUN_0800ca58();
  iVar3 = FUN_0800c4ec();
  if (iVar3 == 0) {
    if ((*DAT_0804d184 & 0x20) == 0) {
      *DAT_0804d188 = 3;
      FUN_08006794();
    }
  }
  else {
    FUN_08059ae4(0);
  }
  uVar5 = DAT_0804d1a0;
  iVar3 = *DAT_0804d1a4 + DAT_0804d1a8;
  uVar7 = 0;
  while( true ) {
    if (0x1d < uVar7) {
      return unaff_lr;
    }
    iVar6 = FUN_08000470(iVar3);
    if (iVar6 == 0) break;
    uVar7 = uVar7 + 1;
    iVar3 = iVar3 + 0x28;
  }
  local_34 = 0xb700;
  local_30 = 0xc800;
  local_2c = 0x14;
  local_2a = 0xe;
  local_28 = uVar5;
  *(undefined4 *)(iVar3 + 8) = 0x3c;
  local_24 = param_1;
  iVar6 = FUN_08001494(0x400);
  *(int *)(iVar3 + 0x20) = iVar6;
  *(undefined4 *)(iVar3 + 0xc) = DAT_0804d218;
  *(int *)(iVar3 + 0x10) = iVar6 + 0x3fc;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  FUN_08000274(iVar3,&local_34,1);
  FUN_080003f0();
  FUN_080003f0();
  return unaff_lr;
}

