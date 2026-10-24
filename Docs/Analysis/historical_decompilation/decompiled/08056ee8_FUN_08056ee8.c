
undefined4 FUN_08056ee8(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_r8;
  undefined4 unaff_lr;
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  int iStack_20;
  
  uVar1 = DAT_08056f00;
  iVar3 = *DAT_08056f04 + DAT_08056f08;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_08056f24;
    iVar3 = iVar3 + 0x28;
  }
LAB_08056f50:
  uVar1 = DAT_08056f60;
  iVar3 = *DAT_08056f64 + DAT_08056f68;
  uVar4 = 0;
  do {
    if (0x1d < uVar4) {
LAB_08056fb4:
      uVar1 = DAT_08056fc8;
      iVar3 = *DAT_08056fcc + DAT_08056fd0;
      uVar4 = 0;
      while( true ) {
        if (0x1d < uVar4) {
          return unaff_lr;
        }
        iVar2 = FUN_08000470(iVar3);
        if (iVar2 == 0) break;
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x28;
      }
      uStack_24 = uVar1;
      iStack_20 = 0;
      *(undefined4 *)(iVar3 + 8) = 0x3c;
      iVar2 = FUN_08001494(0x400);
      *(int *)(iVar3 + 0x20) = iVar2;
      *(undefined4 *)(iVar3 + 0xc) = DAT_08057028;
      *(int *)(iVar3 + 0x10) = iVar2 + 0x3fc;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      FUN_08000274(iVar3,auStack_30,8);
      FUN_080003f0();
      FUN_080003f0();
      return unaff_lr;
    }
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) {
      uStack_24 = uVar1;
      *(undefined4 *)(iVar3 + 8) = 0x3c;
      iStack_20 = unaff_r8;
      iVar2 = FUN_08001494(0x400);
      *(int *)(iVar3 + 0x20) = iVar2;
      *(undefined4 *)(iVar3 + 0xc) = DAT_08056fc4;
      *(int *)(iVar3 + 0x10) = iVar2 + 0x3fc;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      FUN_08000274(iVar3,auStack_30,6);
      FUN_080003f0();
      FUN_080003f0();
      goto LAB_08056fb4;
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 0x28;
  } while( true );
LAB_08056f24:
  while( true ) {
    iVar2 = FUN_08001494(0x400);
    *(int *)(iVar3 + 0x20) = iVar2;
    if (iVar2 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar3 + 8) = 0x3c;
  *(undefined4 *)(iVar3 + 0xc) = uVar1;
  *(int *)(iVar3 + 0x10) = iVar2 + 0x3fc;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  FUN_08000274(iVar3,0);
  unaff_r8 = iVar3;
  goto LAB_08056f50;
}

