
undefined8 FUN_08016844(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 unaff_lr;
  
  piVar1 = DAT_080168e8;
  uVar7 = 0;
  uVar5 = 0x40000;
  iVar3 = 0;
  do {
    if ((((*DAT_08016890 & 1 << (uVar7 & 0xff)) != 0) && (*(int *)(iVar3 + DAT_08016894) == param_1)
        ) && (*(uint *)(iVar3 + DAT_08016894 + 4) == (param_2 & 0xffff))) {
      piVar1 = (int *)(iVar3 + DAT_08016894 + 8);
      *piVar1 = *piVar1 + 1;
      uVar5 = uVar5 >> 0x10;
      goto LAB_080168fe;
    }
    uVar5 = uVar5 + 0x10000;
    iVar3 = iVar3 + 0xc;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 3);
  uVar7 = 0;
  uVar5 = 0x40000;
  iVar3 = 0;
  piVar6 = DAT_080168e8;
  do {
    uVar2 = 1 << (uVar7 & 0xff);
    uVar4 = *DAT_080168e4;
    if ((uVar4 & uVar2) == 0) {
      *piVar6 = param_1;
      *(uint *)((int)piVar1 + iVar3 + 4) = param_2 & 0xffff;
      piVar6[2] = 1;
      *DAT_080168e4 = uVar4 | uVar2;
      uVar5 = uVar5 >> 0x10;
      goto LAB_080168fe;
    }
    uVar5 = uVar5 + 0x10000;
    piVar6 = piVar6 + 3;
    iVar3 = iVar3 + 0xc;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 3);
  uVar5 = 0xffff;
LAB_080168fe:
  return CONCAT44(unaff_lr,uVar5);
}

