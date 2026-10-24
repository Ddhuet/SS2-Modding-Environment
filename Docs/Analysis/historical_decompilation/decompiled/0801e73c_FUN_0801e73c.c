
/* WARNING: Removing unreachable block (ram,0x0801e8c6) */
/* WARNING: Removing unreachable block (ram,0x0801e860) */
/* WARNING: Removing unreachable block (ram,0x0801e864) */
/* WARNING: Removing unreachable block (ram,0x0801e868) */
/* WARNING: Removing unreachable block (ram,0x0801e8aa) */
/* WARNING: Removing unreachable block (ram,0x0801e85e) */
/* WARNING: Removing unreachable block (ram,0x0801e88e) */

undefined8 FUN_0801e73c(int param_1,ushort *param_2,int param_3,int param_4)

{
  char cVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  undefined4 uVar11;
  undefined4 unaff_lr;
  undefined8 uVar12;
  
  iVar5 = *(int *)(param_1 + 0x148);
  uVar3 = param_2[0x31];
  if (param_4 == 0) {
    uVar6 = FUN_080008c8();
    if (*(short *)(param_1 + 100) + 1 < (int)(uVar6 & 0x7f)) {
      FUN_08059a8c(0x1a);
      uVar11 = 200;
    }
    else {
      FUN_08059a8c(0x27);
      FUN_0802238c((uint)(**(ushort **)(param_2 + 0xa8) >> 4) << 8,
                   ((*(ushort **)(param_2 + 0xa8))[1] & 0xfff) << 8);
      uVar11 = 100;
    }
  }
  else {
    uVar11 = 1000;
  }
  if (*(short *)(param_1 + 0x26) == 5) {
    uVar6 = FUN_0801dc54();
    if ((uVar6 & 0xff) < 10) {
                    /* WARNING: Could not recover jumptable at 0x0801e7ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (**(code **)((uVar6 & 0xff) * 4 + DAT_0801e7d0))();
      return uVar12;
    }
    uVar6 = ((int)*(short *)(param_1 + 0x60) +
            ((int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x12)) *
            (*(ushort *)(param_1 + 0x2c) + 5);
    if ((int)uVar6 < 0) {
      uVar6 = uVar6 + 3;
    }
    uVar6 = (uVar6 & 0x3ffff) >> 2;
  }
  else if ((*(uint *)(param_1 + 0x38) & 0x200000) == 0) {
    uVar6 = (uint)*(ushort *)(param_1 + 0x60);
  }
  else {
    uVar6 = FUN_080ba8a4(((int)*(short *)(param_1 + 0x60) +
                         ((int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x12)) *
                         (*(ushort *)(param_1 + 0x2e) + 10) * 8,*(ushort *)(param_1 + 0x12a) + 0x48)
    ;
    uVar6 = uVar6 & 0xffff;
  }
  uVar2 = FUN_080008c8();
  iVar7 = FUN_080baaf4(uVar2,0x32);
  iVar8 = FUN_080ba8a4(uVar6 * uVar6 * 10,uVar6 + uVar3);
  uVar2 = FUN_080ba8a4((iVar7 * 0x10000 + 0x640000U >> 0x10) * iVar8,uVar11);
  uVar6 = FUN_080baa7c(uVar2,10);
  uVar6 = uVar6 & 0xffff;
  if (uVar6 == 0) {
    uVar6 = 1;
  }
  if (*(char *)((uint)*(ushort *)(iVar5 + 0x70) * 0x10 + iVar5 + 0x81) == '\x01') {
    uVar9 = *(ushort *)(param_3 + 0x194) - 1;
    if (uVar9 < 7) {
                    /* WARNING: Could not recover jumptable at 0x0801e994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (**(code **)(uVar9 * 4 + DAT_0801e998))();
      return uVar12;
    }
    if (uVar6 == 0 || (int)(uVar6 * 0x10000) < 0) {
      uVar6 = 1;
    }
  }
  if (*(short *)(param_1 + 0x26) == 5) {
    uVar6 = FUN_080ba8a4(uVar6 * 0x6e,100);
    uVar6 = uVar6 & 0xffff;
  }
  cVar1 = FUN_0801dc54();
  if (((cVar1 == '\0') && (*(short *)(*DAT_0801eacc + 0x54) != 0)) && (param_2[0x13] == 2)) {
    iVar5 = FUN_0801deb0(*DAT_0801eacc + 0x38,6);
    uVar6 = FUN_080ba8a4(uVar6 * ((iVar5 * 0x20000 + 0xa0000U >> 0x10) + 100),100);
    uVar6 = uVar6 & 0xffff;
  }
  sVar4 = (short)uVar6;
  cVar1 = FUN_0801dc54();
  if ((cVar1 == '\x03') && (*(short *)(*DAT_0801eacc + 0x4c) != 0)) {
    uVar3 = *param_2;
    uVar2 = FUN_0801deb0(*DAT_0801eacc + 0x38,4);
    FUN_0806867c((uVar3 & 0xff) << 8 | 4,uVar2);
  }
  cVar1 = FUN_0801dc54();
  if ((cVar1 == '\a') && (*(short *)(*DAT_0801eacc + 0x58) != 0)) {
    if (*(short *)(param_1 + 0x22) < 5) {
      sVar10 = *(short *)(param_1 + 0x22);
    }
    else {
      sVar10 = *(short *)(param_1 + 0x22) + -8;
    }
    uVar3 = (ushort)(*(byte *)(*(int *)(param_2 + 0xa8) + 3) >> 4);
    if (4 < uVar3) {
      uVar3 = uVar3 - 8;
    }
    iVar5 = (int)sVar10 - (int)(short)uVar3;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar5 < 2) {
      uVar6 = FUN_0801deb0(*DAT_0801eacc + 0x38,7);
      sVar4 = FUN_080ba8a4(((uVar6 & 0xffff) * 3 + 10) * (int)sVar4,10);
    }
  }
  uVar6 = (uint)sVar4;
  if ((int)uVar6 < 0) {
    uVar6 = uVar6 + 3;
  }
  uVar9 = (uVar6 & 0x3ffff) >> 2;
  if ((int)(uVar6 << 0xe) >> 0x10 == 0) {
    uVar9 = 1;
  }
  return CONCAT44(unaff_lr,uVar9);
}

