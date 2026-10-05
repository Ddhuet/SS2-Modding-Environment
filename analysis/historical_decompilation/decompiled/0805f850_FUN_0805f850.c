
undefined4 FUN_0805f850(void)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  pbVar1 = DAT_0805f8a0;
  uVar4 = 0;
  do {
    piVar2 = DAT_0805f8a4;
    if (((int)(uint)*pbVar1 >> (uVar4 & 0xff) & 1U) != 0) {
      iVar3 = FUN_08000470(*DAT_0805f8a4 + uVar4 * 0x34);
      if (iVar3 != 0) {
        FUN_080003a8(*piVar2 + uVar4 * 0x34);
      }
      *pbVar1 = *pbVar1 & ~(byte)(1 << (uVar4 & 0xff));
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  return unaff_lr;
}

