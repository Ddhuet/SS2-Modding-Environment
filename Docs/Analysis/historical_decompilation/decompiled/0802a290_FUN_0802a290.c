
undefined4 FUN_0802a290(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 unaff_lr;
  
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = param_2 * 0x24 + DAT_0802a2ac;
  iVar2 = *DAT_0802a2a8;
  while (*(short *)(iVar2 + iVar1 + 0x14) != 0xc) {
    if ((*(ushort *)(*DAT_0802a2d8 + 4) >> 4 & 1) != 0) {
      return unaff_lr;
    }
    FUN_080003f0();
  }
  iVar1 = *DAT_0802a2d8 + DAT_0802a2dc;
  uVar3 = 0;
  while( true ) {
    if (0x1d < uVar3) {
      return unaff_lr;
    }
    iVar2 = FUN_08000470(iVar1);
    if (iVar2 == 0) break;
    uVar3 = uVar3 + 1;
    iVar1 = iVar1 + 0x28;
  }
  while( true ) {
    iVar2 = FUN_08001494(0x400);
    *(int *)(iVar1 + 0x20) = iVar2;
    if (iVar2 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar1 + 8) = 0x3c;
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  *(int *)(iVar1 + 0x10) = iVar2 + 0x3fc;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  FUN_08000274(iVar1,uVar5);
  return unaff_lr;
}

