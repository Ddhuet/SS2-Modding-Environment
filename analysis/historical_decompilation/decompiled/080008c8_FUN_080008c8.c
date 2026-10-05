
undefined8 FUN_080008c8(void)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  pbVar2 = DAT_08000938;
  uVar3 = -((*DAT_08000938 ^ DAT_08000938[1]) & 2) >> 0x1f;
  iVar5 = 0;
  do {
    bVar1 = pbVar2[iVar5];
    iVar4 = uVar3 << 7;
    uVar3 = bVar1 & 1;
    pbVar2[iVar5] = bVar1 >> 1 | (byte)iVar4;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  return CONCAT44(unaff_lr,CONCAT13(pbVar2[pbVar2[1] & 7],
                                    CONCAT12(pbVar2[*pbVar2 & 7],
                                             CONCAT11(pbVar2[pbVar2[3] & 7],pbVar2[pbVar2[2] & 7])))
                 );
}

