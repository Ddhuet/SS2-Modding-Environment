
undefined4 FUN_08000760(void)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined2 *puVar7;
  ushort uVar8;
  uint uVar9;
  undefined4 unaff_lr;
  
  puVar4 = DAT_080007b0;
  puVar3 = DAT_080007ac;
  uVar1 = *DAT_080007b0;
  *DAT_080007ac = uVar1;
  uVar9 = *DAT_080007b4 ^ DAT_080007b8;
  uVar8 = (ushort)uVar9;
  *puVar4 = uVar8;
  uVar8 = uVar8 & ~uVar1;
  *DAT_080007bc = uVar8;
  puVar5 = DAT_080007c0;
  uVar9 = uVar9 & 0xf0;
  if ((uVar1 & 0xf0) == uVar9) {
    uVar8 = *DAT_080007c0 + 1;
    *DAT_080007c0 = uVar8;
    puVar6 = DAT_080007f0;
    uVar1 = *DAT_080007c4;
    uVar2 = (undefined2)uVar9;
    if (uVar8 == uVar1) {
      *DAT_080007c8 = uVar2;
    }
    else {
      if (uVar1 < uVar8) {
        uVar8 = *DAT_080007f0;
        *DAT_080007f0 = uVar8 + 1;
        if (*DAT_080007f4 < uVar8) {
          *DAT_080007f8 = uVar2;
          *puVar6 = 0;
          *puVar5 = uVar1;
          goto LAB_08000816;
        }
      }
      *DAT_08000804 = 0;
    }
  }
  else {
    *DAT_0800085c = uVar8;
    puVar7 = DAT_08000860;
    *DAT_08000864 = 0;
    *puVar7 = 0;
  }
LAB_08000816:
  puVar5 = DAT_08000868;
  *DAT_08000868 = 0;
  if (((*puVar3 & 1) != 0) && ((*puVar4 & 1) == 0)) {
    *puVar5 = 1;
  }
  if (((*puVar3 & 2) != 0) && ((*puVar4 & 2) == 0)) {
    *puVar5 = *puVar5 | 2;
  }
  return unaff_lr;
}

