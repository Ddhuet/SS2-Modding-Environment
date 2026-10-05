
undefined4 FUN_08028520(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_lr;
  
  iVar2 = DAT_0802856c;
  puVar1 = DAT_08028568;
  uVar3 = (uint)(param_1 * 0x10000 + DAT_08028564) >> 0x10;
  uVar7 = 1 << (uVar3 & 0xff);
  uVar6 = *DAT_08028568;
  if ((uVar6 & uVar7) != 0) {
    iVar4 = uVar3 * 0xc;
    puVar5 = (uint *)(iVar4 + DAT_0802856c + 8);
    if (*puVar5 < 2) {
      *(undefined4 *)(iVar4 + DAT_0802856c) = 0;
      *(undefined4 *)(iVar4 + iVar2 + 4) = 0;
      *puVar5 = 0;
      *puVar1 = uVar6 & ~uVar7;
    }
    else {
      *puVar5 = *puVar5 - 1;
    }
  }
  return unaff_lr;
}

