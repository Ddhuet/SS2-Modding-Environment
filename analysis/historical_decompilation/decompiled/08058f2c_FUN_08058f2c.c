
undefined4 FUN_08058f2c(uint param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 unaff_lr;
  
  iVar1 = FUN_0800c780();
  if (iVar1 == 0) {
    iVar2 = *DAT_08058f6c;
    iVar1 = DAT_08058f70;
  }
  else {
    iVar2 = *DAT_08058f48;
    iVar1 = DAT_08058f4c;
  }
  pbVar3 = (byte *)(iVar2 + iVar1 + (param_1 >> 3));
  *pbVar3 = *pbVar3 & ~(byte)(1 << (param_1 & 7));
  return unaff_lr;
}

