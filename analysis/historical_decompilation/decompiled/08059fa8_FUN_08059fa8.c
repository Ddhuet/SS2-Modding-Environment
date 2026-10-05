
undefined4 FUN_08059fa8(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  *DAT_08059fe0 = param_1 & 0xffff;
  if ((*DAT_08059fe4 & 0x20) == 0) {
    FUN_08006794(param_1 & 0xffff);
  }
  uVar1 = DAT_08059fe8;
  iVar3 = *DAT_08059fec + DAT_08059ff0;
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
  FUN_08000274(iVar3,((param_2 & 0xffff) - 1) * 0x10000 | param_3 & 0xffff);
  return unaff_lr;
}

