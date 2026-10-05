
undefined8 FUN_080087c8(uint param_1,ushort *param_2,ushort *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  if ((uint)*(ushort *)(param_4 + 2) < (param_1 & 0xffff)) {
    uVar1 = 0;
  }
  else {
    iVar3 = param_4 + *(int *)(param_4 + 8) + (param_1 & 0xffff) * 0xc;
    if (*(ushort *)(iVar3 + 4) <= *param_2) {
      *param_2 = 0;
    }
    iVar2 = iVar3 + *(int *)(iVar3 + 8) + (uint)*param_2 * 4;
    uVar1 = 0;
    if (*param_3 < *(ushort *)(iVar2 + 2)) {
      *param_3 = *param_3 + 1;
    }
    else {
      *param_2 = *param_2 + 1;
      *param_3 = 0;
      if (*(ushort *)(iVar3 + 4) <= *param_2) {
        if (param_5 == 0) {
          *param_3 = *(short *)(iVar2 + 2) + 1;
          *param_2 = *(short *)(iVar3 + 4) - 1;
          uVar1 = 1;
        }
        else {
          *param_2 = 0;
        }
      }
    }
  }
  return CONCAT44(unaff_lr,uVar1);
}

