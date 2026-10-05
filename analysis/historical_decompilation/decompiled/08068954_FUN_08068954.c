
undefined8 FUN_08068954(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  uVar1 = FUN_08002164();
  uVar5 = 0;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = 0;
      uVar6 = uVar4 + 1;
      iVar2 = uVar4 * 0x28;
      while (*(int *)(iVar2 + DAT_08068990) != param_1) {
        uVar3 = uVar3 + 1;
        if (*(uint *)(uVar4 * 4 + DAT_0806898c) < uVar3) goto LAB_080689b2;
        iVar2 = uVar3 * 4 + uVar4 * 0x28;
      }
      uVar5 = uVar5 + 1;
LAB_080689b2:
      uVar4 = uVar6;
    } while (uVar6 < uVar1);
  }
  return CONCAT44(unaff_lr,(uint)(uVar1 == uVar5));
}

