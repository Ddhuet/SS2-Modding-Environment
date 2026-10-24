
undefined8 FUN_080baa0c(uint param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (param_3 & DAT_080baa78) * (param_1 & DAT_080baa78);
  uVar1 = (param_3 & DAT_080baa78) * (param_1 >> 0x10);
  iVar2 = (param_3 >> 0x10) * (param_1 >> 0x10);
  uVar3 = (param_3 >> 0x10) * (param_1 & DAT_080baa78) + (uVar4 >> 0x10) + uVar1;
  if (uVar3 < uVar1) {
    iVar2 = iVar2 + 0x10000;
  }
  return CONCAT44(iVar2 + (uVar3 >> 0x10) + param_4 * param_1 + param_3 * param_2,
                  (uVar3 & DAT_080baa78) * 0x10000 | uVar4 & DAT_080baa78);
}

