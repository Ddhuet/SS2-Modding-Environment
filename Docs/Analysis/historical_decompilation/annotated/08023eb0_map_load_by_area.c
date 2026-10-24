/*
 * map_load_by_area  (0x08023EB0)
 * 功能: 按area加载地图（跳转表DAT_08023ecc）
 * 来源: 随机探索
 * 原始Ghidra名: 08023eb0_FUN_08023eb0.c
 */

undefined4 FUN_08023eb0(uint param_1,undefined2 param_2)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  short *unaff_r4;
  uint uVar7;
  undefined4 unaff_lr;
  
  param_1 = param_1 & 0xffff;
  if (param_1 - 1 < 0x17) {
    UNRECOVERED_JUMPTABLE = *(code **)((param_1 - 1) * 4 + DAT_08023ecc);
                    /* WARNING: Could not recover jumptable at 0x08023eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,DAT_08023ecc,param_2);
    return uVar4;
  }
  iVar5 = FUN_08002204();
  piVar3 = DAT_0802404c;
  if (((iVar5 != 0) && (*(undefined2 *)(*DAT_0802404c + 10) = 0, param_1 != 0)) && (param_1 != 0xb))
  {
    uVar7 = 0;
    sVar1 = *unaff_r4;
    sVar2 = *unaff_r4;
    while (sVar2 != 0) {
      iVar5 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar5 + 10);
      if (sVar1 != 0) {
        *(short **)(iVar5 + DAT_08024050 + uVar6 * 4) = unaff_r4;
        FUN_08023df0(unaff_r4,uVar6);
        iVar5 = *piVar3;
        *(short *)(iVar5 + 10) = *(short *)(iVar5 + 10) + 1;
      }
      uVar7 = uVar7 + 1;
      unaff_r4 = unaff_r4 + 0x1c;
      if (0x1f < uVar7) {
        return unaff_lr;
      }
      sVar1 = *unaff_r4;
      sVar2 = *unaff_r4;
    }
  }
  return unaff_lr;
}

