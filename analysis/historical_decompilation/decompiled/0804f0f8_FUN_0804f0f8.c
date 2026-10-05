
void FUN_0804f0f8(void)

{
  short sVar1;
  uint *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  short unaff_r4;
  int iVar8;
  uint uVar9;
  int unaff_r9;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 *local_28;
  undefined1 *local_24;
  
  iVar4 = FUN_080020f4();
  iVar4 = iVar4 * 0x154 + DAT_0804f130;
  *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) | 1;
  FUN_0800ca44();
  iVar4 = FUN_08002164();
  if (iVar4 == 1) {
    unaff_r4 = 0;
  }
  else {
    unaff_r9 = FUN_080020f4();
    if (unaff_r9 == 1) {
      unaff_r4 = 0xc;
    }
    else if (unaff_r9 < 2) {
      if (unaff_r9 == 0) {
        unaff_r4 = -0xc;
      }
    }
    else if (unaff_r9 == 2) {
      unaff_r4 = -0x24;
    }
    else if (unaff_r9 == 3) {
      unaff_r4 = 0x24;
    }
  }
  FUN_08028b3c(0,unaff_r4 + 0x78,0xc0,0);
  iVar4 = FUN_08028a50(0x11,0x78,0x96);
  FUN_08029444(iVar4,0);
  FUN_08028b3c(1,0x78,0,0);
  uVar6 = DAT_0804f1b0;
  iVar8 = *DAT_0804f1b4 + DAT_0804f1b8;
  local_28 = local_30;
  local_24 = local_2c;
  for (uVar9 = 0; uVar9 < 0x1e; uVar9 = uVar9 + 1) {
    iVar5 = FUN_08000470(iVar8);
    if (iVar5 == 0) goto LAB_0804f1d4;
    iVar8 = iVar8 + 0x28;
  }
LAB_0804f200:
  sVar3 = 1;
  do {
    FUN_080003f0();
    iVar8 = FUN_080021a8();
    if (iVar8 != 0) break;
    sVar3 = sVar3 + -1;
  } while (sVar3 != 0);
  iVar8 = FUN_0800c5e8();
  if (iVar8 == 0) {
    iVar8 = FUN_0801a720();
    if (iVar8 == 1) {
      FUN_0801a74c(6);
    }
    else if (iVar8 < 2) {
      if (iVar8 == 0) {
        FUN_08058b6c();
      }
    }
    else if (iVar8 == 2) {
      FUN_0801a78c(6);
    }
    while (iVar8 = FUN_0801a6dc(), iVar8 == 0) {
      FUN_080003f0();
    }
  }
  *DAT_0804f288 = 0xd9;
  if ((*DAT_0804f28c & 0x20) == 0) {
    FUN_08006794(0xd9);
  }
  if ((*(uint *)(*DAT_0804f290 + 0x38) & 2) == 0) {
    while (iVar8 = FUN_0805fa94(), iVar8 != 0) {
      FUN_080003f0();
    }
    while (iVar8 = FUN_0805f8b4(), iVar8 != 0) {
      FUN_080003f0();
    }
    uVar6 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_0804f2c8);
    while (iVar5 = FUN_0805f820(uVar6), iVar8 = DAT_0804f340, iVar5 == 0) {
      FUN_080003f0();
    }
    sVar3 = *(short *)(DAT_0804f33c + 0x80);
    sVar1 = *(short *)(DAT_0804f33c + 0x82);
    iVar5 = 0;
    do {
      FUN_08066020(local_40,(int)sVar3,0,iVar5);
      FUN_08066020(local_3c,(int)sVar1,iVar8 >> 0x10,iVar5);
      FUN_0800b4e8((int)local_40._0_2_,(int)local_3c._0_2_);
      FUN_080003f0();
      iVar5 = iVar5 + 0x11;
    } while (iVar5 < 0x401);
    FUN_08028b3c(1,0x78,0x5a,0xb4);
    while (iVar8 = FUN_0805fa94(), iVar8 != 0) {
      FUN_080003f0();
    }
    while (iVar8 = FUN_0805f8b4(), iVar8 != 0) {
      FUN_080003f0();
    }
    uVar6 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_0804f378);
    while (iVar8 = FUN_0805f820(uVar6), iVar8 == 0) {
      FUN_080003f0();
    }
    if ((unaff_r9 != 0) && (iVar8 = FUN_08000470(unaff_r9), iVar8 != 0)) {
      FUN_080003a8(unaff_r9);
    }
    FUN_08028b3c(iVar4,0x78,0x50,0x2d);
    piVar7 = (int *)(*DAT_0804f3d4 + DAT_0804f3d8);
    uVar9 = 0;
    do {
      if (*piVar7 == iVar4) goto LAB_0804f3c8;
      uVar9 = uVar9 + 1;
      piVar7 = piVar7 + 0x1c;
    } while (uVar9 < 0xf);
    FUN_080003f0();
    piVar7 = (int *)0x0;
LAB_0804f3c8:
    if (piVar7 != (int *)0x0) {
      *(undefined2 *)((int)piVar7 + 0x36) = 4;
    }
    sVar3 = 0x3c;
    do {
      FUN_080003f0();
      iVar4 = FUN_080021a8();
      if (iVar4 != 0) break;
      sVar3 = sVar3 + -1;
    } while (sVar3 != 0);
    while (iVar4 = FUN_0805fa94(), iVar4 != 0) {
      FUN_080003f0();
    }
    while (iVar4 = FUN_0805f8b4(), iVar4 != 0) {
      FUN_080003f0();
    }
    uVar6 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_0804f428);
    while (iVar4 = FUN_0805f820(uVar6), iVar4 == 0) {
      FUN_080003f0();
    }
    *(uint *)(*DAT_0804f448 + 0x38) = *(uint *)(*DAT_0804f448 + 0x38) | 2;
  }
  else {
    sVar3 = *(short *)(DAT_0804f4b0 + 0x80);
    sVar1 = *(short *)(DAT_0804f4b0 + 0x82);
    iVar8 = 0;
    do {
      FUN_08066020(local_38,(int)sVar3,0,iVar8);
      FUN_08066020(local_34,(int)sVar1,DAT_0804f4b4 >> 0x10,iVar8);
      FUN_0800b4e8((int)local_38._0_2_,(int)local_34._0_2_);
      FUN_080003f0();
      iVar8 = iVar8 + 0x11;
    } while (iVar8 < 0x401);
    FUN_08028b3c(1,0x78,0x5a,0xb4);
    while (iVar8 = FUN_0805fa94(), iVar8 != 0) {
      FUN_080003f0();
    }
    while (iVar8 = FUN_0805f8b4(), iVar8 != 0) {
      FUN_080003f0();
    }
    uVar6 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_0804f4ec);
    while (iVar8 = FUN_0805f820(uVar6), iVar8 == 0) {
      FUN_080003f0();
    }
    if ((unaff_r9 != 0) && (iVar8 = FUN_08000470(unaff_r9), iVar8 != 0)) {
      FUN_080003a8(unaff_r9);
    }
    FUN_08028b3c(iVar4,0x78,0x50,0x2d);
    piVar7 = (int *)(*DAT_0804f548 + DAT_0804f54c);
    uVar9 = 0;
    do {
      if (*piVar7 == iVar4) goto LAB_0804f53c;
      uVar9 = uVar9 + 1;
      piVar7 = piVar7 + 0x1c;
    } while (uVar9 < 0xf);
    FUN_080003f0();
    piVar7 = (int *)0x0;
LAB_0804f53c:
    if (piVar7 != (int *)0x0) {
      *(undefined2 *)((int)piVar7 + 0x36) = 4;
    }
    sVar3 = 0x3c;
    do {
      FUN_080003f0();
      iVar4 = FUN_080021a8();
      if (iVar4 != 0) break;
      sVar3 = sVar3 + -1;
    } while (sVar3 != 0);
    while (iVar4 = FUN_0805fa94(), iVar4 != 0) {
      FUN_080003f0();
    }
    while (iVar4 = FUN_0805f8b4(), iVar4 != 0) {
      FUN_080003f0();
    }
    uVar6 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_0804f59c);
    while (iVar4 = FUN_0805f820(uVar6), iVar4 == 0) {
      FUN_080003f0();
    }
  }
  sVar3 = *(short *)(DAT_0804f684 + 0x80);
  sVar1 = *(short *)(DAT_0804f684 + 0x82);
  iVar4 = 0;
  do {
    FUN_08066020(local_28,(int)sVar3,0,iVar4);
    FUN_08066020(local_24,(int)sVar1,0,iVar4);
    FUN_0800b4e8((int)local_30._0_2_,(int)local_2c._0_2_);
    FUN_080003f0();
    iVar4 = iVar4 + 0x22;
  } while (iVar4 < 0x401);
  *DAT_0804f688 = 0xb;
  if ((*DAT_0804f68c & 0x20) == 0) {
    FUN_08006794(0xb);
  }
  puVar2 = DAT_0804f694;
  iVar4 = *DAT_0804f690;
  uVar9 = 0;
  do {
    if (((*puVar2 & 1 << (uVar9 & 0xff)) != 0) && (*(short *)(iVar4 + 0xc) == 0xc)) {
      *(undefined2 *)(iVar4 + 0xc) = 0;
    }
    uVar9 = uVar9 + 1;
    iVar4 = iVar4 + DAT_0804f698;
  } while (uVar9 < 5);
  FUN_08019a4c();
  *(ushort *)(*DAT_0804f69c + 4) = *(ushort *)(*DAT_0804f69c + 4) | 0x20;
  iVar4 = FUN_080020f4();
  iVar4 = iVar4 * 0x154 + DAT_0804f6a0;
  *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) & 0xfffffffe;
  FUN_0800ca58();
                    /* WARNING: Could not recover jumptable at 0x0804f680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
LAB_0804f1d4:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar8 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar8 + 8) = 0x3c;
  *(undefined4 *)(iVar8 + 0xc) = uVar6;
  *(int *)(iVar8 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar8 + 0x24) = 0;
  FUN_08000274(iVar8,iVar4);
  unaff_r9 = iVar8;
  goto LAB_0804f200;
}

