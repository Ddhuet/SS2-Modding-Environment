
undefined8 FUN_0802844c(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_lr;
  
  uVar4 = 2;
  uVar5 = 0x60000;
  iVar2 = 0x18;
  do {
    if ((((*DAT_08028498 & 1 << (uVar4 & 0xff)) != 0) && (*(int *)(iVar2 + DAT_0802849c) == param_1)
        ) && (*(uint *)(iVar2 + DAT_0802849c + 4) == (param_2 & 0xffff))) {
      piVar1 = (int *)(iVar2 + DAT_0802849c + 8);
      *piVar1 = *piVar1 + 1;
      uVar4 = uVar5 >> 0x10;
      goto LAB_08028508;
    }
    uVar5 = uVar5 + DAT_080284ec;
    iVar2 = iVar2 + -0xc;
    uVar4 = uVar4 - 1;
  } while (-1 < (int)uVar4);
  uVar5 = 2;
  uVar7 = 0x60000;
  piVar1 = (int *)(DAT_080284f4 + 0x18);
  iVar6 = 0x18;
  iVar2 = DAT_080284f4 + 4;
  do {
    uVar4 = 1 << (uVar5 & 0xff);
    uVar3 = *DAT_080284f0;
    if ((uVar3 & uVar4) == 0) {
      *piVar1 = param_1;
      *(uint *)(iVar6 + iVar2) = param_2 & 0xffff;
      piVar1[2] = 1;
      *DAT_080284f0 = uVar3 | uVar4;
      uVar4 = uVar7 >> 0x10;
      break;
    }
    uVar7 = uVar7 + DAT_08028518;
    piVar1 = piVar1 + -3;
    iVar6 = iVar6 + -0xc;
    uVar5 = uVar5 - 1;
    uVar4 = DAT_0802851c;
  } while (-1 < (int)uVar5);
LAB_08028508:
  return CONCAT44(unaff_lr,uVar4);
}

