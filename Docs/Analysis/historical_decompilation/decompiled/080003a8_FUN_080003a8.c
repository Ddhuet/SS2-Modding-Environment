
undefined8 FUN_080003a8(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[9] != 0) {
    return CONCAT44(param_1[9],param_1);
  }
  FUN_08001538(param_1[8]);
  *DAT_080003ec = *DAT_080003ec + -1;
  param_1[1] = 0;
  piVar1 = (int *)param_1[6];
  iVar2 = *param_1;
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    *(int **)(iVar2 + 0x18) = piVar1;
    *param_1 = iVar2;
    return CONCAT44(param_2,param_1);
  }
  *param_1 = (int)piVar1;
  return CONCAT44(param_2,param_1);
}

