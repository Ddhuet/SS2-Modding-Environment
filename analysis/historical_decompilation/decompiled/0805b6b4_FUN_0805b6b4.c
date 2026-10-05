
undefined8 FUN_0805b6b4(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  uVar4 = 0;
  uVar1 = *param_1;
  if (uVar1 == 3) {
    uVar4 = (uint)param_1[1];
    uVar3 = 0xc0000;
  }
  else if (uVar1 < 4) {
    if (uVar1 != 2) goto LAB_0805b6fe;
    uVar4 = (uint)param_1[1];
    uVar3 = 0xb0000;
  }
  else if (uVar1 == 4) {
    uVar4 = (uint)param_1[1];
    uVar3 = 0xd0000;
  }
  else {
    if (uVar1 != 5) goto LAB_0805b6fe;
    uVar4 = (uint)param_1[1];
    uVar3 = 0xe0000;
  }
  iVar2 = FUN_08006d98(uVar4 | uVar3);
  uVar4 = *(uint *)(iVar2 + 0x178);
LAB_0805b6fe:
  for (uVar3 = 10; (iVar2 = FUN_08059104(uVar3), iVar2 == 0 && (1 < uVar3)); uVar3 = uVar3 - 1) {
  }
  iVar2 = FUN_0800c780();
  if (iVar2 == 0) {
    if (5 < uVar3) {
      uVar3 = 5;
    }
    uVar4 = FUN_080baa7c(uVar3 * uVar4,10);
  }
  else {
    uVar4 = uVar4 >> 1;
  }
  return CONCAT44(unaff_lr,uVar4);
}

