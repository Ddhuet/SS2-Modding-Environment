
void FUN_0804deec(void)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  uVar7 = *(uint *)(*DAT_0804dfb0 + 0x38);
  if ((uVar7 & 1) != 0) {
    if ((uVar7 & 4) != 0) {
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
      puVar4 = DAT_0804e350;
      iVar6 = *DAT_0804e34c;
      uVar7 = 0;
      do {
        if (((*puVar4 & 1 << (uVar7 & 0xff)) != 0) && (*(short *)(iVar6 + 0xc) == 0xc)) {
          *(undefined2 *)(iVar6 + 0xc) = 0;
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + DAT_0804e354;
      } while (uVar7 < 5);
      FUN_08019a4c();
      goto LAB_0804e33c;
    }
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
    FUN_0802a20c(0xe8,0x8c,0x96,0x6e);
    uVar3 = DAT_0804e0d0;
    iVar6 = *DAT_0804e0d4 + DAT_0804e0d8;
    for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
      iVar5 = FUN_08000470(iVar6);
      if (iVar5 == 0) goto LAB_0804e0f4;
      iVar6 = iVar6 + 0x28;
    }
    goto LAB_0804e11e;
  }
  *(uint *)(*DAT_0804dfb0 + 0x38) = uVar7 | 1;
  iVar6 = FUN_080020f4();
  iVar6 = iVar6 * 0x154 + DAT_0804dfb4;
  *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) | 1;
  FUN_0800ca44();
  iVar6 = DAT_0804dfbc;
  sVar1 = *(short *)(DAT_0804dfb8 + 0x80);
  sVar2 = *(short *)(DAT_0804dfb8 + 0x82);
  iVar5 = 0;
  do {
    FUN_08066020(local_28,(int)sVar1,0,iVar5);
    FUN_08066020(local_24,(int)sVar2,iVar6 >> 0x10,iVar5);
    FUN_0800b4e8((int)local_28._0_2_,(int)local_24._0_2_);
    FUN_080003f0();
    iVar5 = iVar5 + 0x400;
  } while (iVar5 < 0x401);
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
  uVar3 = DAT_0804dff8;
  iVar6 = *DAT_0804dffc + DAT_0804e000;
  for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
    iVar5 = FUN_08000470(iVar6);
    if (iVar5 == 0) goto LAB_0804e01c;
    iVar6 = iVar6 + 0x28;
  }
  goto LAB_0804e046;
LAB_0804e0f4:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar3;
  *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,1);
LAB_0804e11e:
  uVar3 = DAT_0804e12c;
  iVar6 = *DAT_0804e130 + DAT_0804e134;
  for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
    iVar5 = FUN_08000470(iVar6);
    if (iVar5 == 0) goto LAB_0804e150;
    iVar6 = iVar6 + 0x28;
  }
  goto LAB_0804e17a;
LAB_0804e150:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar3;
  *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,2);
LAB_0804e17a:
  uVar3 = DAT_0804e188;
  iVar6 = *DAT_0804e18c + DAT_0804e190;
  for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
    iVar5 = FUN_08000470(iVar6);
    if (iVar5 == 0) goto LAB_0804e1ac;
    iVar6 = iVar6 + 0x28;
  }
LAB_0804e1d6:
  uVar3 = DAT_0804e1e4;
  iVar6 = *DAT_0804e1e8 + DAT_0804e1ec;
  for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
    iVar5 = FUN_08000470(iVar6);
    if (iVar5 == 0) goto LAB_0804e208;
    iVar6 = iVar6 + 0x28;
  }
LAB_0804e232:
  uVar3 = DAT_0804e240;
  iVar6 = *DAT_0804e244 + DAT_0804e248;
  for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
    iVar5 = FUN_08000470(iVar6);
    if (iVar5 == 0) goto LAB_0804e264;
    iVar6 = iVar6 + 0x28;
  }
LAB_0804e28e:
  puVar4 = DAT_0804e2c4;
  iVar6 = *DAT_0804e2c0;
  uVar7 = 0;
  do {
    if (((*puVar4 & 1 << (uVar7 & 0xff)) != 0) && (*(short *)(iVar6 + 0xc) == 0xc)) {
      *(undefined2 *)(iVar6 + 0xc) = 0;
    }
    uVar7 = uVar7 + 1;
    iVar6 = iVar6 + DAT_0804e2c8;
  } while (uVar7 < 5);
  FUN_08019a4c();
  goto LAB_0804e33c;
LAB_0804e1ac:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar3;
  *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,3);
  goto LAB_0804e1d6;
LAB_0804e208:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar3;
  *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,4);
  goto LAB_0804e232;
LAB_0804e264:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar3;
  *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,5);
  goto LAB_0804e28e;
LAB_0804e01c:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar3;
  *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,0);
LAB_0804e046:
  *DAT_0804e064 = 0xc4;
  if ((*DAT_0804e068 & 0x20) == 0) {
    FUN_08006794(0xc4);
  }
LAB_0804e33c:
                    /* WARNING: Could not recover jumptable at 0x0804e34a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

