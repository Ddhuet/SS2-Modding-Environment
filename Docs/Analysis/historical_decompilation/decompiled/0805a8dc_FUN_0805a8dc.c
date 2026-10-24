
undefined4 FUN_0805a8dc(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  iVar1 = FUN_0800c780();
  if (iVar1 == 0) {
    iVar2 = *DAT_0805a90c;
    iVar1 = 0x1b8;
  }
  else {
    iVar2 = *DAT_0805a8f0;
    iVar1 = 0x1c4;
  }
  *(byte *)(iVar2 + iVar1) = *(byte *)(iVar2 + iVar1) | 0x10;
  return unaff_lr;
}

