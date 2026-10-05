
undefined4 FUN_08066468(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 unaff_lr;
  
  uVar2 = FUN_08002164();
  uVar8 = 0;
  if (uVar2 == 0) {
    return unaff_lr;
  }
  do {
    iVar1 = DAT_08066508;
    uVar4 = 0;
    iVar7 = uVar8 * 4;
    uVar5 = uVar8 + 1;
    puVar3 = (uint *)(iVar7 + DAT_08066508);
    iVar9 = 0;
    piVar6 = (int *)(DAT_0806650c + uVar8 * 0x28);
    while (*piVar6 != param_1) {
      iVar9 = iVar9 + 4;
      piVar6 = piVar6 + 1;
      uVar4 = uVar4 + 1;
      if (*puVar3 < uVar4) goto LAB_0806651e;
    }
    if (uVar4 < *(uint *)(iVar7 + DAT_08066508)) {
      do {
        iVar9 = iVar9 + 4;
        *(undefined4 *)(uVar4 * 4 + uVar8 * 0x28 + DAT_0806650c) =
             *(undefined4 *)(iVar9 + uVar8 * 0x28 + DAT_0806650c);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(iVar7 + iVar1));
    }
    *(undefined4 *)(uVar4 * 4 + uVar8 * 0x28 + DAT_0806650c) = 0xffffffff;
    *puVar3 = *puVar3 - 1;
LAB_0806651e:
    uVar8 = uVar5;
    if (uVar2 <= uVar5) {
      return unaff_lr;
    }
  } while( true );
}

