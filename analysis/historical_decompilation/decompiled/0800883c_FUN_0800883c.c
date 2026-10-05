
undefined8 FUN_0800883c(uint param_1,ushort *param_2,ushort *param_3,int param_4,int param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  if ((uint)*(ushort *)(param_4 + 2) < (param_1 & 0xffff)) {
    uVar2 = 0;
  }
  else {
    iVar4 = param_4 + *(int *)(param_4 + 8) + (param_1 & 0xffff) * 0xc;
    if ((*param_2 & 0x8000) != 0) {
      *param_2 = *(short *)(iVar4 + 4) - 1;
    }
    iVar3 = *(int *)(iVar4 + 8);
    uVar1 = *param_2;
    uVar2 = 0;
    if ((*param_3 & 0x8000) == 0) {
      *param_3 = *param_3 - 1;
    }
    else {
      *param_2 = uVar1 - 1;
      *param_3 = *(short *)(iVar4 + iVar3 + (uint)uVar1 * 4 + 2) - 1;
      if ((*param_2 & 0x8000) != 0) {
        if (param_5 == 0) {
          *param_3 = 0;
          *param_2 = 0;
          uVar2 = 1;
        }
        else {
          *param_2 = *(short *)(iVar4 + 4) - 1;
        }
      }
    }
  }
  return CONCAT44(unaff_lr,uVar2);
}

