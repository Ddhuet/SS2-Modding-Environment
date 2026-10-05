
undefined8 FUN_0801a1f4(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  iVar2 = 0;
  uVar1 = *param_1;
  while ((uVar1 != DAT_0801a208 && ((uVar1 & 0x8000) == 0))) {
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
    uVar1 = *param_1;
  }
  return CONCAT44(unaff_lr,iVar2);
}

