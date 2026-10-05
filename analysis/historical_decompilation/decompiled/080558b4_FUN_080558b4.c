
undefined4 FUN_080558b4(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  piVar1 = DAT_080558e8;
  uVar6 = *(uint *)(*DAT_080558e8 + 0x38);
  if ((uVar6 & 2) != 0) {
    return unaff_lr;
  }
  *(uint *)(*DAT_080558e8 + 0x38) = uVar6 | 2;
  FUN_0806870c(DAT_080558ec,5);
  iVar4 = FUN_0800c61c();
  uVar2 = DAT_080558f0;
  if (iVar4 != 0) {
    FUN_08028e2c(param_1,0,0xffffff38,200);
    return unaff_lr;
  }
  iVar4 = *piVar1 + DAT_080558f4;
  for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
    iVar5 = FUN_08000470(iVar4);
    if (iVar5 == 0) goto LAB_08055910;
    iVar4 = iVar4 + 0x28;
  }
LAB_0805593a:
  sVar3 = 1;
  do {
    FUN_080003f0();
    iVar4 = FUN_080021a8();
    if (iVar4 != 0) break;
    sVar3 = sVar3 + -1;
  } while (sVar3 != 0);
  if ((*DAT_08055984 & 0x20) == 0) {
    FUN_080067e8(0x75);
  }
  FUN_0802917c(param_1,0);
  FUN_08028e2c(param_1,0,0xffffff38,200);
  FUN_0800683c(0x75);
  return unaff_lr;
LAB_08055910:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar4 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar4 + 8) = 0x3c;
  *(undefined4 *)(iVar4 + 0xc) = uVar2;
  *(int *)(iVar4 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  FUN_08000274(iVar4,0);
  goto LAB_0805593a;
}

