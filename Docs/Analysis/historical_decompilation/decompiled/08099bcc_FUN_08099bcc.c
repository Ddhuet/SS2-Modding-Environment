
undefined4 FUN_08099bcc(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  uVar4 = 0;
  iVar3 = *DAT_08099c00;
  do {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 != 0) {
      FUN_080003a8(iVar3);
    }
    piVar1 = DAT_08099c00;
    iVar3 = iVar3 + 0x28;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x40);
  FUN_08001538(*DAT_08099c00);
  *piVar1 = 0;
  return unaff_lr;
}

