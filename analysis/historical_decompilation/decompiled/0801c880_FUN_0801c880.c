
undefined8 FUN_0801c880(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r4;
  undefined4 in_stack_0000000c;
  
  iVar2 = FUN_080020f4();
  iVar1 = DAT_0801c8e8;
  if (((*(uint *)(iVar2 * 0x154 + DAT_0801c8e8 + 0x38) & 0x2000) == 0) &&
     (uVar5 = *(uint *)(unaff_r4 + 0x28), uVar5 < 199)) {
    uVar4 = *(int *)(unaff_r4 + 0x24) + param_2;
    *(uint *)(unaff_r4 + 0x24) = uVar4;
    if (*(uint *)(uVar5 * 4 + DAT_0801c8ec) <= uVar4) {
      *(uint *)(unaff_r4 + 0x28) = uVar5 + 1;
      *(short *)(unaff_r4 + 0x22) = *(short *)(unaff_r4 + 0x22) + 4;
      *(short *)(unaff_r4 + 0x38) = *(short *)(unaff_r4 + 0x38) + 1;
      iVar2 = FUN_080020f4();
      FUN_08061fb0(iVar2 * 0x154 + iVar1);
      uVar3 = 1;
      goto LAB_0801c8f2;
    }
  }
  uVar3 = 0;
LAB_0801c8f2:
  return CONCAT44(in_stack_0000000c,uVar3);
}

