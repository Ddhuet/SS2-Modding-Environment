
undefined4 FUN_080571a4(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined4 unaff_lr;
  
  iVar3 = FUN_080020f4();
  iVar3 = iVar3 * 0x154 + DAT_080571dc;
  *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) | 1;
  FUN_0800ca44();
  iVar3 = FUN_0800c780();
  if (iVar3 == 0) {
    FUN_0800c790();
    FUN_0801a7e4(6);
    while (iVar3 = FUN_0801a6dc(), iVar3 == 0) {
      FUN_080003f0();
    }
    FUN_0800b4bc();
    FUN_080003f0();
    FUN_080003f0();
    FUN_080003f0();
    FUN_080003f0();
    FUN_0800c5f8();
    puVar5 = (undefined2 *)(DAT_080572b8 + 0x7c);
    uVar1 = *puVar5;
    puVar4 = (undefined2 *)(DAT_080572b8 + 0x7e);
    uVar2 = *puVar4;
    FUN_080851ac(3);
    FUN_080003f4(DAT_080572bc);
    *puVar5 = uVar1;
    *puVar4 = uVar2;
    FUN_0800c608();
    FUN_08000420(DAT_080572c0);
    FUN_0800c7a4();
    while (iVar3 = FUN_0801a6dc(), iVar3 == 0) {
      FUN_080003f0();
    }
  }
  else {
    FUN_0800c790();
    FUN_0801a7e4(6);
    while (iVar3 = FUN_0801a6dc(), iVar3 == 0) {
      FUN_080003f0();
    }
    FUN_0800b4bc();
    FUN_080003f0();
    FUN_080003f0();
    FUN_080003f0();
    FUN_080003f0();
    FUN_0800c5f8();
    puVar5 = (undefined2 *)(DAT_08057238 + 0x7c);
    uVar1 = *puVar5;
    puVar4 = (undefined2 *)(DAT_08057238 + 0x7e);
    uVar2 = *puVar4;
    FUN_080851ac(4);
    FUN_080003f4(DAT_0805723c);
    *puVar5 = uVar1;
    *puVar4 = uVar2;
    FUN_0800c608();
    FUN_08000420(DAT_08057240);
    FUN_0800c7a4();
    while (iVar3 = FUN_0801a6dc(), iVar3 == 0) {
      FUN_080003f0();
    }
  }
  iVar3 = FUN_080020f4();
  iVar3 = iVar3 * 0x154 + DAT_080572fc;
  *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) & 0xfffffffe;
  FUN_0800ca58();
  return unaff_lr;
}

