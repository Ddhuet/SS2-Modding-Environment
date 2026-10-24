
undefined4 FUN_08066538(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 unaff_lr;
  
  uVar3 = FUN_08002164();
  uVar10 = 0;
  if (uVar3 != 0) {
    do {
      iVar1 = DAT_08066610;
      iVar4 = uVar10 * 4;
      uVar5 = uVar10 + 1;
      piVar6 = (int *)(iVar4 + DAT_08066610);
      uVar8 = 0;
      do {
        iVar2 = DAT_08066614;
        iVar9 = uVar8 * 4;
        uVar7 = uVar8 + 1;
        if (*(int *)(iVar9 + uVar10 * 0x28 + DAT_08066614) == param_1) {
          if (uVar8 < *(uint *)(iVar4 + iVar1)) {
            do {
              iVar9 = iVar9 + 4;
              *(undefined4 *)(uVar8 * 4 + uVar10 * 0x28 + iVar2) =
                   *(undefined4 *)(iVar9 + uVar10 * 0x28 + iVar2);
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(uint *)(iVar4 + iVar1));
          }
          *(undefined4 *)(uVar8 * 4 + uVar10 * 0x28 + DAT_08066614) = 0xffffffff;
          *piVar6 = *piVar6 + -1;
        }
        uVar8 = uVar7;
      } while (uVar7 <= *(uint *)(iVar4 + iVar1));
      uVar10 = uVar5;
    } while (uVar5 < uVar3);
  }
  return unaff_lr;
}

