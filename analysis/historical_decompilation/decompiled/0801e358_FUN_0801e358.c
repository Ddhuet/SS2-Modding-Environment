
/* WARNING: Removing unreachable block (ram,0x0801e4d6) */
/* WARNING: Removing unreachable block (ram,0x0801e470) */
/* WARNING: Removing unreachable block (ram,0x0801e474) */
/* WARNING: Removing unreachable block (ram,0x0801e478) */
/* WARNING: Removing unreachable block (ram,0x0801e4ba) */
/* WARNING: Removing unreachable block (ram,0x0801e46e) */
/* WARNING: Removing unreachable block (ram,0x0801e49e) */

undefined8 FUN_0801e358(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  char cVar2;
  undefined2 uVar3;
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
  uVar1 = *(ushort *)(param_2 + 0x1ce);
  if (param_4 == 0) {
    uVar6 = FUN_080008c8();
    if (*(short *)(param_1 + 100) + 1 < (int)(uVar6 & 0x7f)) {
      FUN_08059a8c(0x1a);
      uVar11 = 200;
    }
    else {
      FUN_08059a8c(0x27);
      FUN_0802238c(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18));
      uVar11 = 100;
    }
  }
  else {
    uVar11 = 1000;
  }
  if (*(short *)(param_1 + 0x26) == 5) {
    uVar6 = FUN_0801dc54();
    if ((uVar6 & 0xff) < 10) {
                    /* WARNING: Could not recover jumptable at 0x0801e3de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (**(code **)((uVar6 & 0xff) * 4 + DAT_0801e3e0))();
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
  uVar3 = FUN_080008c8();
  iVar7 = FUN_080baaf4(uVar3,0x32);
  iVar8 = FUN_080ba8a4(uVar6 * uVar6 * 10,uVar6 + uVar1);
  uVar3 = FUN_080ba8a4((iVar7 * 0x10000 + 0x640000U >> 0x10) * iVar8,uVar11);
  uVar6 = FUN_080baa7c(uVar3,10);
  uVar6 = uVar6 & 0xffff;
  if (uVar6 == 0) {
    uVar6 = 1;
  }
  if (*(char *)((uint)*(ushort *)(iVar5 + 0x70) * 0x10 + iVar5 + 0x81) == '\x01') {
    uVar9 = *(ushort *)(param_3 + 0x194) - 1;
    if (uVar9 < 7) {
                    /* WARNING: Could not recover jumptable at 0x0801e5a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (**(code **)(uVar9 * 4 + DAT_0801e5a8))();
      return uVar12;
    }
    if (uVar6 == 0 || (int)(uVar6 * 0x10000) < 0) {
      uVar6 = 1;
    }
  }
  cVar2 = FUN_0801dc54();
  if (((cVar2 == '\0') && (*(short *)(*DAT_0801e6d0 + 0x54) != 0)) &&
     (*(short *)(param_2 + 0xc) == 2)) {
    iVar5 = FUN_0801deb0(*DAT_0801e6d0 + 0x38,6);
    uVar6 = FUN_080ba8a4(uVar6 * ((iVar5 * 0x20000 + 0xa0000U >> 0x10) + 100),100);
    uVar6 = uVar6 & 0xffff;
    FUN_08059a8c(0x27);
  }
  cVar2 = FUN_0801dc54();
  if ((cVar2 == '\x03') && (*(short *)(*DAT_0801e6d0 + 0x4c) != 0)) {
    uVar1 = *(ushort *)(param_2 + 2);
    uVar3 = FUN_0801deb0(*DAT_0801e6d0 + 0x38,4);
    FUN_0806867c((uVar1 & 0xff) << 8 | 4,uVar3);
  }
  cVar2 = FUN_0801dc54();
  if ((cVar2 == '\a') && (*(short *)(*DAT_0801e6d0 + 0x58) != 0)) {
    if (*(short *)(param_1 + 0x22) < 5) {
      sVar10 = *(short *)(param_1 + 0x22);
    }
    else {
      sVar10 = *(short *)(param_1 + 0x22) + -8;
    }
    if (*(short *)(param_2 + 8) < 5) {
      sVar4 = *(short *)(param_2 + 8);
    }
    else {
      sVar4 = *(short *)(param_2 + 8) + -8;
    }
    iVar5 = (int)sVar10 - (int)sVar4;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar5 < 2) {
      uVar9 = FUN_0801deb0(*DAT_0801e6d0 + 0x38,7);
      uVar6 = FUN_080ba8a4(((uVar9 & 0xffff) * 3 + 10) * (int)(short)uVar6,10);
      uVar6 = uVar6 & 0xffff;
    }
  }
  return CONCAT44(unaff_lr,uVar6);
}

