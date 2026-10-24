
undefined8 FUN_0801eb4c(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 unaff_lr;
  undefined8 uVar9;
  
  iVar3 = FUN_08006d98(*(ushort *)(param_1 + 0x3a0) | 0xb0000);
  uVar1 = *(ushort *)(param_2 + 0x62);
  uVar4 = FUN_080008c8();
  if (*(short *)(param_1 + 0x1d0) + 1 < (int)(uVar4 & 0x7f)) {
    iVar8 = 200;
  }
  else {
    FUN_0802238c(*(undefined4 *)(param_2 + 0x94),*(undefined4 *)(param_2 + 0x98));
    iVar8 = 100;
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0x1cc);
  uVar2 = FUN_080008c8();
  iVar5 = FUN_080baaf4(uVar2,0x32);
  iVar6 = FUN_080ba8a4(uVar4 * uVar4 * 10,uVar4 + uVar1);
  uVar2 = FUN_080ba8a4((iVar5 * 0x10000 + 0x640000U >> 0x10) * iVar6,iVar8);
  uVar4 = FUN_080baa7c(uVar2,10);
  uVar4 = uVar4 & 0xffff;
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  uVar7 = *(ushort *)(iVar3 + 0x194) - 1;
  if (6 < uVar7) {
    uVar7 = uVar4;
    if (uVar4 == 0 || (int)(uVar4 * 0x10000) < 0) {
      uVar7 = 1;
    }
    iVar3 = FUN_0800c710(uVar4 * 0x10000,uVar4,param_2 + 0x84);
    if (iVar3 == 0) {
      if (iVar8 == 100) {
        uVar7 = uVar7 | 0x8000;
      }
    }
    else if (iVar8 == 100) {
      FUN_08059a8c(0x27);
    }
    else if (*(short *)(param_2 + 0x12) == 8) {
      FUN_08059a8c(0x4b);
    }
    else {
      FUN_08059a8c(*(ushort *)(param_2 + 0x12) + 0x45);
    }
    return CONCAT44(unaff_lr,uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x0801ec12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (**(code **)(uVar7 * 4 + DAT_0801ec14))();
  return uVar9;
}

