
undefined4 FUN_0805a788(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  iVar2 = FUN_080020f4();
  piVar1 = DAT_0805a7d0;
  if (iVar2 == param_1) {
    iVar2 = 1;
    uVar6 = 0;
    do {
      iVar3 = *piVar1 + uVar6 * 0x10;
      psVar5 = (short *)(iVar3 + 0x158);
      if ((*psVar5 == 1) && (psVar4 = (short *)(iVar3 + 0x15a), *psVar4 == 0x22)) {
        iVar2 = iVar2 + -1;
        *psVar5 = 0;
        *psVar4 = 0;
        if (iVar2 == 0) {
          return unaff_lr;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x19);
  }
  return unaff_lr;
}

