
undefined8 FUN_0805dad4(void)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  iVar3 = 0;
  uVar2 = 0;
  psVar1 = (short *)(*DAT_0805db00 + 0x2e8);
  do {
    if (*psVar1 == 10) {
      iVar3 = iVar3 + *(int *)(psVar1 + 2);
    }
    psVar1 = psVar1 + 8;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x4b);
  return CONCAT44(unaff_lr,iVar3);
}

