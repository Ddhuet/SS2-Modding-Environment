
undefined4 FUN_080b9804(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 unaff_lr;
  
  pbVar6 = *(byte **)(param_2 + 0x40);
  bVar1 = *pbVar6;
  *(byte **)(param_2 + 0x40) = pbVar6 + 1;
  iVar4 = *(int *)(param_1 + 0x18);
  bVar2 = pbVar6[1];
  *(byte **)(param_2 + 0x40) = pbVar6 + 2;
  bVar3 = pbVar6[2];
  *(byte **)(param_2 + 0x40) = pbVar6 + 3;
  if (0x11 < bVar1) {
    return unaff_lr;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((uint)bVar1 * 4 + DAT_080b9834);
                    /* WARNING: Could not recover jumptable at 0x080b9830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,DAT_080b9834,bVar3,(uint)bVar2 + iVar4);
  return uVar5;
}

