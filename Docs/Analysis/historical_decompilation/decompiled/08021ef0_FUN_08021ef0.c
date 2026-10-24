
undefined8 FUN_08021ef0(int *param_1,int *param_2,ushort *param_3,ushort *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  iVar2 = param_1[1] - param_2[1] >> 8;
  iVar3 = *param_1 - *param_2 >> 8;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 <= (int)((uint)*param_3 + (uint)*param_4) >> 1) {
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 <= (int)((uint)param_3[1] + (uint)param_4[1]) >> 1) {
      uVar1 = 1;
      goto LAB_08021f30;
    }
  }
  uVar1 = 0;
LAB_08021f30:
  return CONCAT44(unaff_lr,uVar1);
}

