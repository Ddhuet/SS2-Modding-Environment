
undefined4 FUN_0809314c(void)

{
  short *psVar1;
  byte *pbVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_lr;
  
  uVar5 = 0;
  *DAT_080931ac = '\x01';
  *DAT_080931b0 = 1;
  pbVar2 = DAT_080931b8;
  psVar1 = DAT_080931b4;
  do {
    *psVar1 = *(short *)(uVar5 * 2 + DAT_080931bc) * (ushort)*pbVar2;
    iVar4 = (int)*psVar1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x3f;
    }
    *psVar1 = (short)(iVar4 >> 6);
    sVar3 = FUN_080ba93c((int)*psVar1,*pbVar2);
    *psVar1 = sVar3;
    uVar5 = uVar5 + *DAT_080931b0 & 0xff;
    FUN_080003f0();
  } while (*DAT_080931ac != '\0');
  iVar4 = FUN_0800048c();
  *(undefined4 *)(iVar4 + 8) = 0;
  return unaff_lr;
}

