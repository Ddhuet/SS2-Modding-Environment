
undefined8 FUN_0801e274(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  FUN_080020f4();
  iVar3 = *(int *)(param_1 + 0x28) + 1;
  iVar1 = iVar3 * 3;
  iVar2 = *(int *)(param_1 + 0x28) + 0xd;
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  if (iVar1 < *(int *)(param_2 + 0x184)) {
    iVar3 = iVar3 * 9;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x184) * 3;
  }
  if (*(char *)(param_2 + 0x196) == '\x03') {
    iVar3 = iVar3 * 10;
  }
  return CONCAT44(unaff_lr,iVar3);
}

