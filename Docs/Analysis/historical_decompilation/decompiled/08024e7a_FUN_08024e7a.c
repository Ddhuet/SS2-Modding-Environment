
undefined4 FUN_08024e7a(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r8;
  int in_stack_00000084;
  int in_stack_000000a4;
  undefined4 in_stack_00000100;
  
  if ((*(ushort *)(*DAT_08024ea8 + 4) >> 4 & 1) == 0) {
    FUN_08024696();
  }
  if ((*(ushort *)(*DAT_08024ea8 + 4) >> 3 & 1) != 0) {
    FUN_08059a8c(0x24);
  }
  if (*(ushort *)(in_stack_00000084 + 6) == 0) {
    *(undefined4 *)(*DAT_080256f8 + 0x44) = 0;
  }
  else {
    *(uint *)(*DAT_08025630 + 0x44) = (uint)(*(ushort *)(in_stack_00000084 + 6) >> 8);
  }
  if (in_stack_000000a4 == 0) {
    iVar2 = FUN_080020f4();
    iVar3 = DAT_080256fc;
    FUN_0801e07c(iVar2 * 0x154 + DAT_080256fc,6);
    iVar2 = FUN_080020f4();
    FUN_0801e07c(iVar2 * 0x154 + iVar3,7);
  }
  *(uint *)(unaff_r8 + 0x38) = *(uint *)(unaff_r8 + 0x38) & DAT_08025700;
  piVar1 = DAT_08025704;
  iVar3 = *DAT_08025704;
  while (iVar3 != 0) {
    FUN_080003f0();
    iVar3 = *piVar1;
  }
  FUN_0800c964();
  piVar1 = DAT_080256f8;
  uVar4 = 0;
  do {
    uVar5 = 0;
    uVar6 = uVar4 + 1;
    do {
      *(undefined1 *)(*piVar1 + 0x1c8 + uVar5 + uVar4 * 5) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 5);
    uVar4 = uVar6;
  } while (uVar6 < 0x14);
  FUN_080003f0();
  FUN_0801a23c(0x12,2);
  FUN_08058ae8(3);
  return in_stack_00000100;
}

