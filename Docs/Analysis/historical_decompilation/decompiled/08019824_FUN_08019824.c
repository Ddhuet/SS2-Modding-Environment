
undefined8 FUN_08019824(int param_1)

{
  undefined4 uVar1;
  short *psVar2;
  undefined4 unaff_lr;
  
  psVar2 = (short *)(param_1 + 0x5c);
  *psVar2 = *psVar2 - ((ushort)DAT_08019864 & *(ushort *)(param_1 + 0x4a));
  *(ushort *)(param_1 + 0x4a) = 0;
  if ((((int)*psVar2 & 0x8000U) == 0) && (*psVar2 != 0)) {
    uVar1 = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0xc) = 0xb;
    *psVar2 = 0;
    uVar1 = 1;
  }
  return CONCAT44(unaff_lr,uVar1);
}

