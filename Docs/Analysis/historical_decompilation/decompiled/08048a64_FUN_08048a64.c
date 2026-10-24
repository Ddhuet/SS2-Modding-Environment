
undefined4 FUN_08048a64(void)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_lr;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  if ((*(uint *)(*DAT_08048b18 + 0x38) & 1) != 0) {
    iVar5 = FUN_0800c5e8();
    if (iVar5 == 0) {
      iVar5 = FUN_0801a720();
      if (iVar5 == 1) {
        FUN_0801a74c(6);
      }
      else if (iVar5 < 2) {
        if (iVar5 == 0) {
          FUN_08058b6c();
        }
      }
      else if (iVar5 == 2) {
        FUN_0801a78c(6);
      }
      while (iVar5 = FUN_0801a6dc(), iVar5 == 0) {
        FUN_080003f0();
      }
    }
    puVar4 = DAT_08048c44;
    iVar5 = *DAT_08048c40;
    uVar6 = 0;
    do {
      if (((*puVar4 & 1 << (uVar6 & 0xff)) != 0) && (*(short *)(iVar5 + 0xc) == 0xc)) {
        *(undefined2 *)(iVar5 + 0xc) = 0;
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + DAT_08048c48;
    } while (uVar6 < 5);
    FUN_08019a4c();
    return unaff_lr;
  }
  iVar5 = FUN_080020f4();
  iVar5 = iVar5 * 0x154 + DAT_08048b1c;
  *(uint *)(iVar5 + 0x38) = *(uint *)(iVar5 + 0x38) | 1;
  FUN_0800ca44();
  iVar5 = DAT_08048b24;
  sVar1 = *(short *)(DAT_08048b20 + 0x80);
  sVar2 = *(short *)(DAT_08048b20 + 0x82);
  iVar7 = 0;
  do {
    FUN_08066020(auStack_28,(int)sVar1,0,iVar7);
    FUN_08066020(auStack_24,(int)sVar2,iVar5 >> 0x10,iVar7);
    FUN_0800b4e8((int)auStack_28._0_2_,(int)auStack_24._0_2_);
    FUN_080003f0();
    iVar7 = iVar7 + 0x400;
  } while (iVar7 < 0x401);
  iVar5 = FUN_0800c5e8();
  if (iVar5 == 0) {
    iVar5 = FUN_0801a720();
    if (iVar5 == 1) {
      FUN_0801a74c(6);
    }
    else if (iVar5 < 2) {
      if (iVar5 == 0) {
        FUN_08058b6c();
      }
    }
    else if (iVar5 == 2) {
      FUN_0801a78c(6);
    }
    while (iVar5 = FUN_0801a6dc(), iVar5 == 0) {
      FUN_080003f0();
    }
  }
  uVar3 = DAT_08048b60;
  iVar5 = *DAT_08048b64 + DAT_08048b68;
  for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
    iVar7 = FUN_08000470(iVar5);
    if (iVar7 == 0) goto LAB_08048b84;
    iVar5 = iVar5 + 0x28;
  }
LAB_08048bae:
  *(uint *)(*DAT_08048bbc + 0x38) = *(uint *)(*DAT_08048bbc + 0x38) | 1;
  return unaff_lr;
LAB_08048b84:
  while( true ) {
    iVar7 = FUN_08001494(0x400);
    *(int *)(iVar5 + 0x20) = iVar7;
    if (iVar7 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar5 + 8) = 0x3c;
  *(undefined4 *)(iVar5 + 0xc) = uVar3;
  *(int *)(iVar5 + 0x10) = iVar7 + 0x3fc;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  FUN_08000274(iVar5,0);
  goto LAB_08048bae;
}

