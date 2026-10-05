
undefined4 FUN_0807c778(uint param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *unaff_r10;
  undefined4 unaff_lr;
  
  piVar2 = DAT_0807c7e8;
  while( true ) {
    while( true ) {
      uVar6 = 0xffffffff;
      uVar7 = 0x19;
      uVar5 = 0;
      iVar1 = *piVar2;
      puVar4 = (uint *)(iVar1 + 0x15c);
      do {
        if ((*(short *)(iVar1 + 0x158) == 10) && (*puVar4 < uVar6)) {
          uVar6 = *puVar4;
          uVar7 = uVar5;
        }
        puVar4 = puVar4 + 4;
        iVar1 = iVar1 + 0x10;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x19);
      if (0x18 < uVar7) break;
      if (param_1 <= uVar6) {
        piVar2 = (int *)(*piVar2 + 0x15c + uVar7 * 0x10);
        iVar1 = *piVar2 - param_1;
        *piVar2 = iVar1;
        if (iVar1 != 0) {
          return unaff_lr;
        }
        FUN_0805dc50(uVar7);
        return unaff_lr;
      }
      param_1 = param_1 - *(int *)(*piVar2 + 0x15c + uVar7 * 0x10);
      FUN_0805dc50(uVar7);
    }
    uVar7 = 0x4b;
    if (*(int *)*DAT_0807c820 == 4) {
      piVar3 = (int *)*DAT_0807c820 + 0x41;
    }
    else {
      piVar3 = (int *)(*piVar2 + 0x2e8);
    }
    uVar5 = 0;
    do {
      if (((short)*piVar3 == 10) && ((uint)piVar3[1] < uVar6)) {
        uVar6 = piVar3[1];
        uVar7 = uVar5;
        unaff_r10 = piVar3;
      }
      uVar5 = uVar5 + 1;
      piVar3 = piVar3 + 4;
    } while (uVar5 < 0x4b);
    if (uVar7 == 0x4b) break;
    if (param_1 <= uVar6) {
      iVar1 = unaff_r10[1];
      unaff_r10[1] = iVar1 - param_1;
      if (iVar1 - param_1 == 0) {
        *(short *)unaff_r10 = 0;
      }
      return unaff_lr;
    }
    param_1 = param_1 - unaff_r10[1];
    unaff_r10[1] = 0;
    *(short *)unaff_r10 = 0;
  }
  return unaff_lr;
}

