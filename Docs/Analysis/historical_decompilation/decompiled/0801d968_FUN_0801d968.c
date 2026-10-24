
undefined8 FUN_0801d968(uint param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 unaff_lr;
  undefined8 uVar2;
  
  iVar1 = DAT_0801d984;
  if (3 < param_1) {
    iVar1 = *DAT_0801d9b0 + param_1 * DAT_0801d9b4 + DAT_0801d9b8;
  }
  param_2[1] = 100;
  if (param_3 - 1U < 7) {
                    /* WARNING: Could not recover jumptable at 0x0801d9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((param_3 - 1U) * 4 + DAT_0801d9bc))();
    return uVar2;
  }
  param_2[2] = 0;
  *param_2 = (short)DAT_0801db70;
  return CONCAT44(iVar1,unaff_lr);
}

