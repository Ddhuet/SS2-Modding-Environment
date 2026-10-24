
undefined4 FUN_08051de4(void)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  uint *puVar4;
  short sVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 unaff_lr;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 *local_28;
  undefined1 *local_24;
  
  iVar6 = FUN_0800c780();
  if (iVar6 == 0) {
    pbVar7 = (byte *)(*DAT_08051e38 + DAT_08051e3c);
  }
  else {
    pbVar7 = (byte *)(*DAT_08051e04 + DAT_08051e08);
  }
  if (((int)(uint)*pbVar7 >> 1 & 1U) != 0) {
    FUN_08028b3c(6,DAT_0805221c,DAT_0805221c,0);
    iVar6 = FUN_0800c5e8();
    if (iVar6 == 0) {
      iVar6 = FUN_0801a720();
      if (iVar6 == 1) {
        FUN_0801a74c(6);
      }
      else if (iVar6 < 2) {
        if (iVar6 == 0) {
          FUN_08058b6c();
        }
      }
      else if (iVar6 == 2) {
        FUN_0801a78c(6);
      }
      while (iVar6 = FUN_0801a6dc(), iVar6 == 0) {
        FUN_080003f0();
      }
    }
    puVar4 = DAT_0805228c;
    iVar6 = *DAT_08052288;
    uVar10 = 0;
    do {
      if (((*puVar4 & 1 << (uVar10 & 0xff)) != 0) && (*(short *)(iVar6 + 0xc) == 0xc)) {
        *(undefined2 *)(iVar6 + 0xc) = 0;
      }
      uVar10 = uVar10 + 1;
      iVar6 = iVar6 + DAT_08052290;
    } while (uVar10 < 5);
    FUN_08019a4c();
    return unaff_lr;
  }
  iVar6 = FUN_080020f4();
  uVar2 = DAT_08051e40;
  if (iVar6 == 0) {
    iVar6 = *DAT_08051e38 + DAT_08051e44;
    for (uVar10 = 0; uVar10 < 0x1e; uVar10 = uVar10 + 1) {
      iVar8 = FUN_08000470(iVar6);
      if (iVar8 == 0) goto LAB_08051e60;
      iVar6 = iVar6 + 0x28;
    }
  }
LAB_08051e8a:
  if ((*(uint *)(*DAT_08051f38 + 0x38) & 1) == 0) {
    iVar6 = FUN_080020f4();
    iVar6 = iVar6 * 0x154 + DAT_08051f3c;
    *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) | 1;
    FUN_0800ca44();
    iVar6 = DAT_08051f44;
    sVar5 = *(short *)(DAT_08051f40 + 0x80);
    sVar1 = *(short *)(DAT_08051f40 + 0x82);
    iVar8 = 0;
    local_28 = local_30;
    local_24 = local_2c;
    do {
      FUN_08066020(local_38,(int)sVar5,0,iVar8);
      FUN_08066020(local_34,(int)sVar1,iVar6 >> 0x10,iVar8);
      FUN_0800b4e8((int)local_38._0_2_,(int)local_34._0_2_);
      FUN_080003f0();
      iVar8 = iVar8 + 0x400;
    } while (iVar8 < 0x401);
    iVar6 = FUN_0800c5e8();
    if (iVar6 == 0) {
      iVar6 = FUN_0801a720();
      if (iVar6 == 1) {
        FUN_0801a74c(6);
      }
      else if (iVar6 < 2) {
        if (iVar6 == 0) {
          FUN_08058b6c();
        }
      }
      else if (iVar6 == 2) {
        FUN_0801a78c(6);
      }
      while (iVar6 = FUN_0801a6dc(), iVar6 == 0) {
        FUN_080003f0();
      }
    }
    piVar3 = DAT_08051fa0;
    *(uint *)(*DAT_08051fa0 + 0x38) = *(uint *)(*DAT_08051fa0 + 0x38) | 1;
    *DAT_08051fa4 = 0xc4;
    if ((*DAT_08051fa8 & 0x20) == 0) {
      FUN_08006794(0xc4);
    }
    uVar2 = DAT_08051fac;
    iVar6 = *piVar3 + DAT_08051fb0;
    for (uVar10 = 0; iVar8 = 0, uVar10 < 0x1e; uVar10 = uVar10 + 1) {
      iVar8 = FUN_08000470(iVar6);
      if (iVar8 == 0) goto LAB_08051fcc;
      iVar6 = iVar6 + 0x28;
    }
LAB_08051ff8:
    sVar5 = 800;
    do {
      FUN_080003f0();
      iVar9 = FUN_080021a8();
      iVar6 = DAT_080520e4;
      if (iVar9 != 0) break;
      sVar5 = sVar5 + -1;
    } while (sVar5 != 0);
    sVar5 = *(short *)(DAT_080520e0 + 0x80);
    sVar1 = *(short *)(DAT_080520e0 + 0x82);
    iVar9 = 0;
    do {
      FUN_08066020(local_28,(int)sVar5,0,iVar9);
      FUN_08066020(local_24,(int)sVar1,iVar6 >> 0x10,iVar9);
      FUN_0800b4e8((int)local_30._0_2_,(int)local_2c._0_2_);
      FUN_080003f0();
      iVar9 = iVar9 + 0x22;
    } while (iVar9 < 0x401);
    iVar9 = FUN_080020f4();
    iVar6 = DAT_080520e8;
    iVar9 = iVar9 * 0x154 + DAT_080520e8;
    *(uint *)(iVar9 + 0x38) = *(uint *)(iVar9 + 0x38) & 0xfffffffe;
    FUN_0800ca58();
    FUN_0802a20c(0x80,0x80,0x100,100);
    if ((*(uint *)(*DAT_080520ec + 0x38) & 2) == 0) {
      iVar9 = FUN_080020f4();
      iVar6 = iVar9 * 0x154 + iVar6;
      *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) | 1;
      FUN_0800ca44();
      if ((iVar8 != 0) && (iVar6 = FUN_08000470(), iVar6 != 0)) {
        FUN_080003a8(iVar8);
      }
      sVar5 = 1;
      do {
        FUN_080003f0();
        iVar6 = FUN_080021a8();
        if (iVar6 != 0) break;
        sVar5 = sVar5 + -1;
      } while (sVar5 != 0);
      FUN_0805f8e0();
      do {
        FUN_080003f0();
        iVar6 = FUN_0805fa94();
        uVar2 = DAT_08052124;
      } while (iVar6 != 0);
      iVar6 = *DAT_08052128 + DAT_0805212c;
      for (uVar10 = 0; uVar10 < 0x1e; uVar10 = uVar10 + 1) {
        iVar8 = FUN_08000470(iVar6);
        if (iVar8 == 0) {
          while( true ) {
            iVar8 = FUN_08001494(0x400);
            *(int *)(iVar6 + 0x20) = iVar8;
            if (iVar8 != 0) break;
            FUN_080003f0();
          }
          *(undefined4 *)(iVar6 + 8) = 0x3c;
          *(undefined4 *)(iVar6 + 0xc) = uVar2;
          *(int *)(iVar6 + 0x10) = iVar8 + 0x3fc;
          *(undefined4 *)(iVar6 + 0x24) = 0;
          FUN_08000274(iVar6,1);
          return unaff_lr;
        }
        iVar6 = iVar6 + 0x28;
      }
    }
  }
  else {
    iVar6 = FUN_0800c5e8();
    if (iVar6 == 0) {
      iVar6 = FUN_0801a720();
      if (iVar6 == 1) {
        FUN_0801a74c(6);
      }
      else if (iVar6 < 2) {
        if (iVar6 == 0) {
          FUN_08058b6c();
        }
      }
      else if (iVar6 == 2) {
        FUN_0801a78c(6);
      }
      while (iVar6 = FUN_0801a6dc(), iVar6 == 0) {
        FUN_080003f0();
      }
    }
    puVar4 = DAT_080521ec;
    iVar6 = *DAT_080521e8;
    uVar10 = 0;
    do {
      if (((*puVar4 & 1 << (uVar10 & 0xff)) != 0) && (*(short *)(iVar6 + 0xc) == 0xc)) {
        *(undefined2 *)(iVar6 + 0xc) = 0;
      }
      uVar10 = uVar10 + 1;
      iVar6 = iVar6 + DAT_080521f0;
    } while (uVar10 < 5);
    FUN_08019a4c();
  }
  return unaff_lr;
LAB_08051e60:
  while( true ) {
    iVar8 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar8;
    if (iVar8 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar2;
  *(int *)(iVar6 + 0x10) = iVar8 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,0);
  goto LAB_08051e8a;
LAB_08051fcc:
  while( true ) {
    iVar8 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar8;
    if (iVar8 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar2;
  *(int *)(iVar6 + 0x10) = iVar8 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,0);
  iVar8 = iVar6;
  goto LAB_08051ff8;
}

