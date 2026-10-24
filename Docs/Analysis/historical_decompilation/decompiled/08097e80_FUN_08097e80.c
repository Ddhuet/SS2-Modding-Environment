
undefined8 FUN_08097e80(int param_1,int param_2,int param_3,int param_4,short param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  iVar3 = (param_1 - param_3) * 0x100 >> 0x10;
  iVar2 = (param_2 - param_4) * 0x100 >> 0x10;
  uVar1 = FUN_080b9a9c(iVar3 * iVar3 + iVar2 * iVar2);
  return CONCAT44(unaff_lr,(uint)((int)(uVar1 & 0xffff) < (int)param_5));
}

