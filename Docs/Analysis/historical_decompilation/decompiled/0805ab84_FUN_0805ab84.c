
undefined8 FUN_0805ab84(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_lr;
  
  iVar2 = *DAT_0805ab98 + DAT_0805ab9c;
  uVar3 = 0;
  iVar1 = param_1;
  while( true ) {
    if (0x1d < uVar3) goto LAB_0805abf8;
    iVar1 = FUN_08000470(iVar2);
    if (iVar1 == 0) break;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 0x28;
  }
  *(ushort *)(*DAT_0805abc4 + 4) = *(ushort *)(*DAT_0805abc4 + 4) | 0x80;
  while( true ) {
    iVar1 = FUN_08001494(0x400);
    *(int *)(iVar2 + 0x20) = iVar1;
    if (iVar1 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar2 + 8) = 0x3c;
  *(undefined4 *)(iVar2 + 0xc) = param_2;
  *(int *)(iVar2 + 0x10) = iVar1 + 0x3fc;
  *(undefined4 *)(iVar2 + 0x24) = DAT_0805ac00;
  FUN_08000274(iVar2,param_1);
  iVar1 = iVar2;
LAB_0805abf8:
  return CONCAT44(unaff_lr,iVar1);
}

