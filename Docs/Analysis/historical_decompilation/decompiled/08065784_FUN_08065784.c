
undefined8 FUN_08065784(int *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_lr;
  
  uVar4 = DAT_080657e4;
  if (param_5 != 0) {
    uVar4 = DAT_080657e8;
  }
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_4;
  iVar1 = FUN_080069c0(param_2,uVar4);
  param_1[2] = iVar1;
  uVar2 = DAT_080657ec;
  if (iVar1 != 0) {
    uVar3 = param_2 & DAT_080657ec | 0x60000;
    iVar1 = FUN_080069c0(uVar3,uVar4);
    *param_1 = iVar1;
    if (iVar1 != 0) {
      iVar1 = FUN_080069c0(uVar3 & uVar2 | 0x80000,uVar4);
      param_1[3] = iVar1;
      if (iVar1 != 0) {
        if (-1 < param_4) {
          FUN_08000af0(param_1[5] + 0x10,iVar1 + param_1[5] * 0x20,param_1[6]);
        }
        uVar2 = 0;
        do {
          *(char *)((int)param_1 + uVar2 + 0x1c) = (char)uVar2;
          uVar2 = uVar2 + 1;
        } while (uVar2 < 0x10);
        FUN_080659e4(param_1,0x120,0xe0,8);
        goto LAB_08065826;
      }
    }
  }
  param_1 = (int *)0x0;
LAB_08065826:
  return CONCAT44(unaff_lr,param_1);
}

