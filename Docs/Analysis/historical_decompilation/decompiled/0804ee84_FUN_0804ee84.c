
void FUN_0804ee84(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = FUN_0800c5e8();
  if (iVar2 == 0) {
    iVar2 = FUN_0801a720();
    if (iVar2 == 1) {
      FUN_0801a74c(6);
    }
    else if (iVar2 < 2) {
      if (iVar2 == 0) {
        FUN_08058b6c();
      }
    }
    else if (iVar2 == 2) {
      FUN_0801a78c(6);
    }
    while (iVar2 = FUN_0801a6dc(), iVar2 == 0) {
      FUN_080003f0();
    }
  }
  uVar1 = DAT_0804eed8;
  iVar2 = *DAT_0804eedc + DAT_0804eee0;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar3 = FUN_08000470(iVar2);
    if (iVar3 == 0) goto LAB_0804eefc;
    iVar2 = iVar2 + 0x28;
  }
LAB_0804ef26:
  uVar1 = DAT_0804ef34;
  iVar2 = *DAT_0804ef38 + DAT_0804ef3c;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar3 = FUN_08000470(iVar2);
    if (iVar3 == 0) goto LAB_0804ef58;
    iVar2 = iVar2 + 0x28;
  }
LAB_0804ef82:
  uVar1 = DAT_0804ef90;
  iVar2 = *DAT_0804ef94 + DAT_0804ef98;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar3 = FUN_08000470(iVar2);
    if (iVar3 == 0) goto LAB_0804efb4;
    iVar2 = iVar2 + 0x28;
  }
LAB_0804efde:
  uVar1 = DAT_0804efec;
  iVar2 = *DAT_0804eff0 + DAT_0804eff4;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar3 = FUN_08000470(iVar2);
    if (iVar3 == 0) goto LAB_0804f010;
    iVar2 = iVar2 + 0x28;
  }
LAB_0804f03a:
  uVar1 = DAT_0804f048;
  iVar2 = *DAT_0804f04c + DAT_0804f050;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar3 = FUN_08000470(iVar2);
    if (iVar3 == 0) goto LAB_0804f06c;
    iVar2 = iVar2 + 0x28;
  }
LAB_0804f096:
  uVar1 = DAT_0804f0a4;
  iVar2 = *DAT_0804f0a8 + DAT_0804f0ac;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar3 = FUN_08000470(iVar2);
    if (iVar3 == 0) goto LAB_0804f0c8;
    iVar2 = iVar2 + 0x28;
  }
LAB_0804f0f2:
                    /* WARNING: Could not recover jumptable at 0x0804f0f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
LAB_0804eefc:
  while( true ) {
    iVar3 = FUN_08001494(0x400);
    *(int *)(iVar2 + 0x20) = iVar3;
    if (iVar3 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar2 + 8) = 0x3c;
  *(undefined4 *)(iVar2 + 0xc) = uVar1;
  *(int *)(iVar2 + 0x10) = iVar3 + 0x3fc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_08000274(iVar2,6);
  goto LAB_0804ef26;
LAB_0804ef58:
  while( true ) {
    iVar3 = FUN_08001494(0x400);
    *(int *)(iVar2 + 0x20) = iVar3;
    if (iVar3 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar2 + 8) = 0x3c;
  *(undefined4 *)(iVar2 + 0xc) = uVar1;
  *(int *)(iVar2 + 0x10) = iVar3 + 0x3fc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_08000274(iVar2,7);
  goto LAB_0804ef82;
LAB_0804efb4:
  while( true ) {
    iVar3 = FUN_08001494(0x400);
    *(int *)(iVar2 + 0x20) = iVar3;
    if (iVar3 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar2 + 8) = 0x3c;
  *(undefined4 *)(iVar2 + 0xc) = uVar1;
  *(int *)(iVar2 + 0x10) = iVar3 + 0x3fc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_08000274(iVar2,8);
  goto LAB_0804efde;
LAB_0804f010:
  while( true ) {
    iVar3 = FUN_08001494(0x400);
    *(int *)(iVar2 + 0x20) = iVar3;
    if (iVar3 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar2 + 8) = 0x3c;
  *(undefined4 *)(iVar2 + 0xc) = uVar1;
  *(int *)(iVar2 + 0x10) = iVar3 + 0x3fc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_08000274(iVar2,9);
  goto LAB_0804f03a;
LAB_0804f06c:
  while( true ) {
    iVar3 = FUN_08001494(0x400);
    *(int *)(iVar2 + 0x20) = iVar3;
    if (iVar3 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar2 + 8) = 0x3c;
  *(undefined4 *)(iVar2 + 0xc) = uVar1;
  *(int *)(iVar2 + 0x10) = iVar3 + 0x3fc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_08000274(iVar2,10);
  goto LAB_0804f096;
LAB_0804f0c8:
  while( true ) {
    iVar3 = FUN_08001494(0x400);
    *(int *)(iVar2 + 0x20) = iVar3;
    if (iVar3 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar2 + 8) = 0x3c;
  *(undefined4 *)(iVar2 + 0xc) = uVar1;
  *(int *)(iVar2 + 0x10) = iVar3 + 0x3fc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_08000274(iVar2,0xb);
  goto LAB_0804f0f2;
}

