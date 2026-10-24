
undefined8
FUN_08097dd4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,short param_5,
            char param_6)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 unaff_lr;
  
  cVar1 = FUN_08096370(param_1,param_2,param_3,(int)param_5);
  if (cVar1 != '\0') {
    if (param_6 == '\0') {
      FUN_08097eb8(param_4,param_1 + 0x14,*(undefined2 *)(param_1 + 8));
    }
    else {
      uVar2 = FUN_08013864(param_4,param_1 + 0x14,*(undefined2 *)(param_1 + 8),0,0);
      *(undefined2 *)(param_1 + 8) = uVar2;
    }
  }
  return CONCAT44(unaff_lr,(int)cVar1);
}

