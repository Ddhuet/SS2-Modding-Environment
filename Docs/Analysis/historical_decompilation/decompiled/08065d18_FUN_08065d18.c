
undefined4 FUN_08065d18(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  iVar2 = *DAT_08065d34;
  uVar6 = 0;
  do {
    uVar3 = uVar6 + 1;
    while( true ) {
      iVar5 = iVar2 + 4 + uVar6 * 0x28;
      iVar4 = FUN_08000470(iVar5);
      puVar1 = DAT_08065d70;
      if (iVar4 == 0) break;
      FUN_080003a8(iVar5);
    }
    uVar6 = uVar3;
  } while (uVar3 < 0x1e);
  FUN_08001538(*DAT_08065d70);
  *puVar1 = 0;
  return unaff_lr;
}

