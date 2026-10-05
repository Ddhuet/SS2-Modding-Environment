
undefined4 FUN_080699ec(int param_1,undefined4 param_2,int param_3,uint param_4,uint param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_lr;
  
  uVar7 = param_5 & 0xffff;
  uVar2 = FUN_080008c8(param_5 << 0x10,param_2,param_3 << 0x10);
  uVar3 = FUN_080baaf4(uVar2,100);
  uVar4 = (param_4 & 0xffff) - 2;
  if (uVar4 < 6) {
                    /* WARNING: Could not recover jumptable at 0x08069a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(uVar4 * 4 + DAT_08069a28))();
    return uVar2;
  }
  uVar6 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  uVar4 = FUN_080020f4();
  if ((uVar7 == uVar4) || ((iVar5 = FUN_0800c8d0(), iVar5 != 0 && (uVar7 < 4)))) {
    uVar6 = FUN_080baa7c(0,100);
  }
  if (uVar3 < uVar6) {
    uVar1 = (undefined1)(param_4 & 0xffff);
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  if ((3 < uVar7) && (*(char *)(uVar7 * DAT_08069b08 + *DAT_08069b04 + DAT_08069b0c) == '\x03')) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return unaff_lr;
}

