
undefined4 FUN_08022d84(int *param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  uint unaff_r4;
  short *psVar6;
  ushort *puVar7;
  uint uVar8;
  undefined4 in_stack_00000010;
  
  puVar5 = (undefined2 *)*param_1;
  *puVar5 = (short)unaff_r4;
  *(undefined4 *)(puVar5 + 0x20) = 0;
  uVar8 = 0;
  do {
    *(undefined2 *)(*param_1 + 0xe + uVar8 * 2) = 0;
    uVar8 = uVar8 + 1;
  } while (uVar8 < 10);
  if (unaff_r4 < 0x18) {
                    /* WARNING: Could not recover jumptable at 0x08022dae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(unaff_r4 * 4 + DAT_08022db4))();
    return uVar3;
  }
  iVar4 = FUN_08002204();
  if (iVar4 == 0) {
    if ((unaff_r4 != 0) && (iVar4 = FUN_0800c4ec(), iVar4 != 0)) {
      while (iVar4 = FUN_08068254(), iVar4 == 0) {
        FUN_080003f0();
      }
      while (iVar4 = FUN_08068244(), iVar4 == 0) {
        FUN_080003f0();
      }
      FUN_08068234();
    }
  }
  else {
    iVar4 = *DAT_08023120;
    *(undefined2 *)(iVar4 + 8) = 9;
    puVar7 = *(ushort **)(iVar4 + DAT_08023124);
    *(undefined2 *)(iVar4 + 0x22) = 1;
    if (unaff_r4 != 0) {
      uVar8 = 0;
      do {
        if (*puVar7 == 0) break;
        uVar2 = FUN_080008c8();
        iVar4 = *DAT_08023120;
        uVar1 = *puVar7;
        uVar2 = FUN_080baaf4(uVar2,puVar7[1]);
        *(undefined2 *)(iVar4 + 0x22 + (uint)uVar1 * 2) = uVar2;
        psVar6 = (short *)(iVar4 + 0x22 + (uint)*puVar7 * 2);
        *psVar6 = *psVar6 + 1;
        uVar8 = uVar8 + 1;
        puVar7 = puVar7 + 0x92;
      } while (uVar8 < 10);
      iVar4 = FUN_0800c4ec();
      if (iVar4 != 0) {
        while (iVar4 = FUN_08066618(), iVar4 == 0) {
          FUN_080003f0();
        }
        while (iVar4 = FUN_08068254(), iVar4 == 0) {
          FUN_080003f0();
        }
        while (iVar4 = FUN_08068244(), iVar4 == 0) {
          FUN_080003f0();
        }
        FUN_08068234();
      }
    }
  }
  return in_stack_00000010;
}

