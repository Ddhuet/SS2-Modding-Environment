
undefined4 FUN_0805ae6c(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_lr;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = FUN_080020f4();
  iVar1 = iVar1 * 0x154 + DAT_0805aeb0;
  uStack_24 = 0;
  uStack_2c = *param_1;
  uStack_28 = param_1[1];
  uStack_20 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  if (param_2 != 0) {
    while (iVar3 = FUN_08021ef0(iVar1,&uStack_2c,&uStack_24,&uStack_20), iVar3 != 0) {
      FUN_080003f0();
    }
  }
  while (iVar3 = FUN_08021ef0(iVar1,&uStack_2c,&uStack_24,&uStack_20), iVar3 == 0) {
    FUN_080003f0();
  }
  FUN_080587ec(uVar4,uVar2);
  return unaff_lr;
}

