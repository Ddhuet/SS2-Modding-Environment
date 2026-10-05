
undefined4 FUN_08022d78(uint param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  short *psVar7;
  ushort *puVar8;
  uint uVar9;
  undefined4 unaff_lr;
  
  piVar2 = DAT_08022db0;
  if (param_2 != 0) {
    puVar6 = (undefined2 *)*DAT_08022db0;
    *puVar6 = (short)param_1;
    *(undefined4 *)(puVar6 + 0x20) = 0;
    uVar9 = 0;
    do {
      *(undefined2 *)(*piVar2 + 0xe + uVar9 * 2) = 0;
      uVar9 = uVar9 + 1;
    } while (uVar9 < 10);
    if (param_1 < 0x18) {
                    /* WARNING: Could not recover jumptable at 0x08022dae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(param_1 * 4 + DAT_08022db4))();
      return uVar4;
    }
  }
  iVar5 = FUN_08002204();
  if (iVar5 == 0) {
    if ((param_1 != 0) && (iVar5 = FUN_0800c4ec(), iVar5 != 0)) {
      while (iVar5 = FUN_08068254(), iVar5 == 0) {
        FUN_080003f0();
      }
      while (iVar5 = FUN_08068244(), iVar5 == 0) {
        FUN_080003f0();
      }
      FUN_08068234();
    }
  }
  else {
    iVar5 = *DAT_08023120;
    *(undefined2 *)(iVar5 + 8) = 9;
    puVar8 = *(ushort **)(iVar5 + DAT_08023124);
    *(undefined2 *)(iVar5 + 0x22) = 1;
    if (param_1 != 0) {
      uVar9 = 0;
      do {
        if (*puVar8 == 0) break;
        uVar3 = FUN_080008c8();
        iVar5 = *DAT_08023120;
        uVar1 = *puVar8;
        uVar3 = FUN_080baaf4(uVar3,puVar8[1]);
        *(undefined2 *)(iVar5 + 0x22 + (uint)uVar1 * 2) = uVar3;
        psVar7 = (short *)(iVar5 + 0x22 + (uint)*puVar8 * 2);
        *psVar7 = *psVar7 + 1;
        uVar9 = uVar9 + 1;
        puVar8 = puVar8 + 0x92;
      } while (uVar9 < 10);
      iVar5 = FUN_0800c4ec();
      if (iVar5 != 0) {
        while (iVar5 = FUN_08066618(), iVar5 == 0) {
          FUN_080003f0();
        }
        while (iVar5 = FUN_08068254(), iVar5 == 0) {
          FUN_080003f0();
        }
        while (iVar5 = FUN_08068244(), iVar5 == 0) {
          FUN_080003f0();
        }
        FUN_08068234();
      }
    }
  }
  return unaff_lr;
}

