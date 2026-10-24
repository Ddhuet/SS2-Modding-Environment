
undefined4 FUN_080322d0(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined4 unaff_lr;
  
  iVar3 = FUN_080020f4();
  iVar3 = iVar3 * 0x154 + DAT_08032300;
  *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) | 1;
  FUN_0800ca44();
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
  puVar5 = (undefined2 *)(DAT_0803235c + 0x7c);
  uVar1 = *puVar5;
  puVar4 = (undefined2 *)(DAT_0803235c + 0x7e);
  uVar2 = *puVar4;
  FUN_080851ac(2);
  FUN_080003f4(DAT_08032360);
  *puVar5 = uVar1;
  *puVar4 = uVar2;
  FUN_0800c608();
  FUN_08000420(DAT_08032364);
  FUN_0800c7a4();
  while (iVar3 = FUN_0801a6dc(), iVar3 == 0) {
    FUN_080003f0();
  }
  iVar3 = FUN_080020f4();
  iVar3 = iVar3 * 0x154 + DAT_080323a0;
  *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) & 0xfffffffe;
  FUN_0800ca58();
  return unaff_lr;
}

