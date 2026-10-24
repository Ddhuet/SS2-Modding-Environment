
undefined4 FUN_08058170(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  iVar1 = FUN_080020f4();
  if (iVar1 == 0) {
    iVar1 = FUN_0800c780();
    if (iVar1 == 0) {
      iVar2 = *DAT_080581c0;
      iVar1 = DAT_080581c4;
    }
    else {
      iVar2 = *DAT_0805818c;
      iVar1 = DAT_08058190;
    }
    if (*(byte *)(iVar2 + iVar1) < 8) {
      FUN_0806870c(DAT_080581c8,param_1 + 8);
      iVar1 = FUN_0800c780();
      if (iVar1 == 0) {
        iVar2 = *DAT_080581e0;
        iVar1 = DAT_080581e4;
      }
      else {
        iVar2 = *DAT_080581c0;
        iVar1 = DAT_080581cc;
      }
      *(char *)(iVar2 + iVar1) = (char)(param_1 + 8);
    }
  }
  return unaff_lr;
}

