
undefined4 FUN_0805a948(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  iVar1 = FUN_0800c780();
  if (iVar1 == 0) {
    iVar1 = *DAT_0805a978;
    iVar2 = 0x1ba;
  }
  else {
    iVar1 = *DAT_0805a95c;
    iVar2 = 0x1c6;
  }
  *(byte *)(iVar1 + iVar2) = *(byte *)(iVar1 + iVar2) | 1;
  return unaff_lr;
}

