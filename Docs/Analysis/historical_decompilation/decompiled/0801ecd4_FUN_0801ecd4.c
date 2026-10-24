
undefined8 FUN_0801ecd4(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar7;
  undefined4 unaff_lr;
  undefined8 uVar8;
  
  iVar3 = FUN_08006d98(*(ushort *)(param_1 + 0x3a0) | 0xb0000);
  uVar7 = (uint)*(ushort *)(param_1 + 0x1cc);
  uVar1 = *(ushort *)(param_2 + 0x1ce);
  uVar2 = FUN_080008c8();
  iVar4 = FUN_080baaf4(uVar2,0x32);
  iVar5 = FUN_080ba8a4(uVar7 * uVar7 * 10,uVar7 + uVar1);
  uVar2 = FUN_080ba8a4((iVar4 * 0x10000 + 0x640000U >> 0x10) * iVar5,200);
  uVar7 = FUN_080baa7c(uVar2,10);
  uVar7 = uVar7 & 0xffff;
  if (uVar7 == 0) {
    uVar7 = 1;
  }
  uVar6 = *(ushort *)(iVar3 + 0x194) - 1;
  if (uVar6 < 7) {
    UNRECOVERED_JUMPTABLE = *(code **)(uVar6 * 4 + DAT_0801ed6c);
                    /* WARNING: Could not recover jumptable at 0x0801ed68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,DAT_0801ed6c,param_2 + 0x38c);
    return uVar8;
  }
  if (uVar7 == 0 || (int)(uVar7 * 0x10000) < 0) {
    uVar7 = 1;
  }
  return CONCAT44(unaff_lr,uVar7);
}

