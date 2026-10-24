
undefined4 FUN_08050074(undefined4 param_1)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 unaff_lr;
  
  iVar3 = FUN_0800c780();
  if (iVar3 == 0) {
    iVar4 = *DAT_080500c8;
    iVar3 = DAT_080500cc;
    piVar6 = DAT_080500c8;
  }
  else {
    iVar4 = *DAT_08050088;
    iVar3 = DAT_0805008c;
    piVar6 = DAT_08050088;
  }
  *(byte *)(iVar4 + iVar3) = *(byte *)(iVar4 + iVar3) | 4;
  uVar5 = *(uint *)(*piVar6 + 0x38);
  if ((uVar5 & 8) != 0) {
    return unaff_lr;
  }
  *(uint *)(*piVar6 + 0x38) = uVar5 | 8;
  iVar3 = FUN_0800c61c();
  uVar1 = DAT_080500d0;
  if (iVar3 != 0) {
    FUN_08028e2c(param_1,0,0xffffff38,200);
    return unaff_lr;
  }
  iVar3 = *piVar6 + DAT_080500d4;
  for (uVar5 = 0; uVar5 < 0x1e; uVar5 = uVar5 + 1) {
    iVar4 = FUN_08000470(iVar3);
    if (iVar4 == 0) goto LAB_080500f0;
    iVar3 = iVar3 + 0x28;
  }
LAB_0805011a:
  sVar2 = 1;
  do {
    FUN_080003f0();
    iVar3 = FUN_080021a8();
    if (iVar3 != 0) break;
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  if ((*DAT_08050164 & 0x20) == 0) {
    FUN_080067e8(0x75);
  }
  FUN_0802917c(param_1,0);
  FUN_08028e2c(param_1,0,0xffffff38,200);
  FUN_0800683c(0x75);
  return unaff_lr;
LAB_080500f0:
  while( true ) {
    iVar4 = FUN_08001494(0x400);
    *(int *)(iVar3 + 0x20) = iVar4;
    if (iVar4 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar3 + 8) = 0x3c;
  *(undefined4 *)(iVar3 + 0xc) = uVar1;
  *(int *)(iVar3 + 0x10) = iVar4 + 0x3fc;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  FUN_08000274(iVar3,0);
  goto LAB_0805011a;
}

