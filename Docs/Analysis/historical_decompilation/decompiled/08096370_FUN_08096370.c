
undefined8 FUN_08096370(int param_1,short param_2,short param_3,short param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_lr;
  undefined8 uVar6;
  
  iVar5 = ((int)param_2 - ((*(int *)(param_1 + 0x14) << 8) >> 0x10)) * 0x10000 >> 0x10;
  iVar4 = ((int)param_3 - ((*(int *)(param_1 + 0x18) << 8) >> 0x10)) * 0x10000 >> 0x10;
  uVar1 = FUN_080b9a9c(iVar5 * iVar5 + iVar4 * iVar4);
  uVar2 = FUN_080b9a80(iVar5,iVar4);
  uVar3 = (uVar2 & 0xffff) >> 0xd;
  if (0x80000000 < uVar2 * 0x80000) {
    if (uVar3 < 7) {
      uVar3 = uVar3 + 1;
    }
    else {
      uVar3 = 0;
    }
  }
  if (uVar3 < 8) {
                    /* WARNING: Could not recover jumptable at 0x080963e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(uVar3 * 4 + DAT_080963e8))();
    return uVar6;
  }
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x18);
  return CONCAT44(unaff_lr,(uint)((int)param_4 <= (int)(uVar1 & 0xffff)));
}

