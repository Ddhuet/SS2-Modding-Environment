
undefined4 FUN_08024454(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  iVar1 = FUN_080020f4();
  iVar1 = iVar1 * 0x154 + DAT_08024478;
  *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) & DAT_0802447c | 1;
  while (iVar2 = FUN_080683b0(), iVar2 == 0) {
    FUN_08058ae8(1);
  }
  FUN_08058ae8(0x3c);
  *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) & 0xfffffffc;
  while (iVar2 = FUN_080683b0(), iVar2 == 0) {
    FUN_08058ae8(1);
  }
  iVar2 = FUN_0800c8d0();
  if (iVar2 == 0) {
    *(undefined1 *)(iVar1 + 0x70) = 1;
  }
  while (iVar2 = FUN_080667ac(), iVar2 == 0) {
    FUN_08058ae8(1);
  }
  if (param_1 == 0) {
    uVar3 = *(uint *)(iVar1 + 0x38);
    uVar4 = 0x800000;
  }
  else {
    uVar3 = *(uint *)(iVar1 + 0x38);
    uVar4 = 0x1000000;
  }
  *(uint *)(iVar1 + 0x38) = uVar3 | uVar4;
  return unaff_lr;
}

