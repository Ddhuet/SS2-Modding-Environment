
undefined8 FUN_08069028(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined4 unaff_lr;
  
  iVar1 = FUN_080020f4();
  iVar1 = iVar1 * 0x154 + DAT_08069090;
  if (param_2 != 0) {
    iVar2 = (int)*(short *)((param_2 + -1) * 2 + param_1 * 0x18 + DAT_08069094 + 6) +
            *(char *)(iVar1 + 0x74) * 10;
    sVar3 = (short)iVar2;
    if (iVar2 * 0x10000 < 0) {
      sVar3 = 0;
    }
    if (-1 < (int)*(short *)(iVar1 + 0xca) - (int)sVar3) {
      iVar1 = (sVar3 + 1) * 0x10000 >> 0x10;
      goto LAB_0806909a;
    }
  }
  iVar1 = 0;
LAB_0806909a:
  return CONCAT44(unaff_lr,iVar1);
}

