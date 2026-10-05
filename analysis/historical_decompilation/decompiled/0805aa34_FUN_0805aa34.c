
undefined4 FUN_0805aa34(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  iVar1 = FUN_0800c780();
  if (iVar1 == 0) {
    iVar2 = *DAT_0805aa64;
    iVar1 = DAT_0805aa68;
  }
  else {
    iVar2 = *DAT_0805aa4c;
    iVar1 = DAT_0805aa50;
  }
  *(undefined1 *)(iVar2 + iVar1) = param_1;
  return unaff_lr;
}

