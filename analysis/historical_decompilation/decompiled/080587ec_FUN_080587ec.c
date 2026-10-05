
undefined8 FUN_080587ec(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_lr;
  
  iVar2 = *DAT_08058800 + DAT_08058804;
  iVar1 = param_1;
  for (uVar3 = 0; uVar3 < 0x1e; uVar3 = uVar3 + 1) {
    iVar1 = FUN_08000470(iVar2);
    if (iVar1 == 0) goto LAB_08058822;
    iVar2 = iVar2 + 0x28;
  }
LAB_0805884e:
  return CONCAT44(unaff_lr,iVar1);
LAB_08058822:
  while( true ) {
    iVar1 = FUN_08001494(0x400);
    *(int *)(iVar2 + 0x20) = iVar1;
    if (iVar1 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar2 + 8) = 0x3c;
  *(undefined4 *)(iVar2 + 0xc) = param_2;
  *(int *)(iVar2 + 0x10) = iVar1 + 0x3fc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_08000274(iVar2,param_1);
  iVar1 = iVar2;
  goto LAB_0805884e;
}

