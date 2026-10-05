
undefined8 FUN_08069888(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r5;
  undefined4 unaff_lr;
  undefined8 uVar5;
  
  iVar1 = FUN_0800c8d0();
  if (iVar1 == 0) {
    uVar2 = FUN_080008c8();
    uVar3 = FUN_080baaf4(uVar2,100);
    if (param_1 < 8) {
                    /* WARNING: Could not recover jumptable at 0x080698ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(param_1 * 4 + DAT_080698bc))();
      return uVar5;
    }
    iVar1 = FUN_080ba8a4(((param_2 & 0xffff) * 6 - unaff_r5) + 0x32,unaff_r5 + 1);
    uVar4 = iVar1 - 2;
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    if ((uVar3 < uVar4) && (param_1 - 1 < 7)) {
                    /* WARNING: Could not recover jumptable at 0x0806992c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)((param_1 - 1) * 4 + DAT_08069930))();
      return uVar5;
    }
  }
  else {
    param_1 = 0;
  }
  return CONCAT44(unaff_lr,param_1);
}

