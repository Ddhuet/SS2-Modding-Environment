
undefined8 FUN_08df95d6(uint param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *unaff_r9;
  uint *puVar7;
  uint unaff_r10;
  int unaff_r11;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  bool bVar11;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if ((bool)in_NG != in_OV) {
    return CONCAT44(param_2,unaff_r9[param_1 * 0x100 + -10]);
  }
  if (!in_OV) {
    param_1 = unaff_r9[1];
    unaff_r9 = unaff_r9 + 4;
  }
  uVar1 = *(undefined4 *)(unaff_r11 + 4);
  uVar2 = *(uint *)(unaff_r11 + 8);
  uVar3 = *(uint *)(unaff_r11 + 0xc);
  uVar4 = *(uint *)(unaff_r11 + 0x10);
  uVar5 = *(uint *)(unaff_r11 + 0x14);
  uVar6 = *(uint *)(unaff_r11 + 0x18);
  uVar9 = *(undefined4 *)(unaff_r11 + 0x20);
  uVar10 = *(undefined4 *)(unaff_r11 + 0x24);
  iVar8 = unaff_r11 + 0x24;
  if ((bool)in_NG != in_OV) {
    coprocessor_store(9,in_cr14,param_1 - 0x2f0);
    software_interrupt(0x79be59);
  }
  bVar11 = false;
  if (in_ZR) {
    uVar6 = (uint)unaff_r9 >> (param_1 & 0x1f) | (int)unaff_r9 << 0x20 - (param_1 & 0x1f);
    in_CY = (param_1 & 0xff) == 0 && in_CY || (param_1 & 0xff) != 0 && SUB41(uVar6 >> 0x1f,0);
    uVar6 = (uint)unaff_r9 & uVar6;
    in_NG = (int)uVar6 < 0;
    bVar11 = uVar6 == 0;
  }
  if (in_CY) {
    *(uint *)(param_3 + 4) = param_1;
    *(uint *)(param_3 + 8) = uVar5;
    *(uint *)(param_3 + 0xc) = uVar6;
    *(int *)(param_3 + 0x10) = iVar8;
    *(undefined4 *)(param_3 + 0x14) = uVar9;
  }
  if (!(bool)in_NG) {
    *(uint *)(uVar3 + 4) = param_1;
    *(undefined4 *)(uVar3 + 8) = uVar1;
    *(uint *)(uVar3 + 0xc) = uVar5;
    *(uint *)(uVar3 + 0x10) = uVar6;
    *(int *)(uVar3 + 0x14) = iVar8;
    *(undefined4 *)(uVar3 + 0x18) = uVar9;
    *(undefined4 *)(uVar3 + 0x1c) = uVar10;
  }
  if (in_CY && !bVar11) {
    puVar7 = unaff_r9 + param_1 * -0x100;
    *(char *)unaff_r9 = (char)uVar6;
    *puVar7 = param_1;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
    puVar7[4] = uVar5;
    puVar7[5] = uVar6;
    puVar7[6] = (uint)puVar7;
    puVar7[7] = unaff_r10;
    puVar7[8] = 0x8df9606;
    unaff_r9 = puVar7;
  }
  else {
    unaff_r9[1] = param_1;
    unaff_r9[2] = uVar2;
    unaff_r9[3] = uVar3;
    unaff_r9[4] = uVar5;
  }
  if (in_OV) {
    *(undefined4 *)(unaff_r11 + 0x28) = uVar1;
    *(uint *)(unaff_r11 + 0x2c) = uVar2;
    *(uint *)(unaff_r11 + 0x30) = uVar5;
    *(uint *)(unaff_r11 + 0x34) = uVar6;
    *(int *)(unaff_r11 + 0x38) = iVar8;
    *(BADSPACEBASE **)(unaff_r11 + 0x3c) = register0x00000054;
    *(undefined4 *)(unaff_r11 + 0x40) = uVar10;
  }
  if (in_CY && !bVar11) {
    coprocessor_store(9,in_cr13,param_1 - 0x230);
    software_interrupt(0xc98ec9);
  }
  if (bVar11) {
    unaff_r9 = (uint *)((int)unaff_r9 + (uint)in_CY + ((uint)unaff_r9 >> 1));
  }
  if ((bool)in_NG == in_OV) {
    return CONCAT44(uVar1,*(undefined4 *)(param_3 + 4));
  }
  if ((bool)in_NG == in_OV) {
    return *(undefined8 *)(uVar3 + 4);
  }
  if (in_CY && !bVar11) {
    return CONCAT44(*(undefined4 *)(unaff_r11 + 0x28),unaff_r9[1]);
  }
  *unaff_r9 = (uint)(unaff_r9 + param_1 * 0x100);
  return CONCAT44(uVar1,(unaff_r9 + param_1 * 0x100)[-8]);
}

