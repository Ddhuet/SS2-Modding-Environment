
undefined4 FUN_08068c2c(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  puVar2 = DAT_08068c84;
  uVar3 = *DAT_08068c84;
  *DAT_08068c84 = uVar3 - 1;
  if ((int)(uVar3 - 1) < 0) {
    *puVar2 = 0;
  }
  iVar5 = *DAT_08068c88;
  uVar3 = 0;
  iVar4 = iVar5;
  iVar1 = iVar5;
  if (*puVar2 != 0) {
    do {
      FUN_080babb4(iVar4,iVar1 + 0x88,0x88);
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x88;
      iVar1 = iVar1 + 0x88;
    } while (uVar3 < *puVar2);
  }
  *(undefined4 *)(uVar3 * 0x88 + iVar5 + 4) = 0;
  return unaff_lr;
}

