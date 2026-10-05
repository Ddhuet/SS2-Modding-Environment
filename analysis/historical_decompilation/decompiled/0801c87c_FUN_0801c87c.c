
undefined8 FUN_0801c87c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_lr;
  
  iVar2 = FUN_080020f4();
  iVar1 = DAT_0801c8e8;
  if (((*(uint *)(iVar2 * 0x154 + DAT_0801c8e8 + 0x38) & 0x2000) == 0) &&
     (uVar5 = *(uint *)(param_1 + 0x28), uVar5 < 199)) {
    uVar4 = *(int *)(param_1 + 0x24) + param_2;
    *(uint *)(param_1 + 0x24) = uVar4;
    if (*(uint *)(uVar5 * 4 + DAT_0801c8ec) <= uVar4) {
      *(uint *)(param_1 + 0x28) = uVar5 + 1;
      *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + 4;
      *(short *)(param_1 + 0x38) = *(short *)(param_1 + 0x38) + 1;
      iVar2 = FUN_080020f4();
      FUN_08061fb0(iVar2 * 0x154 + iVar1);
      uVar3 = 1;
      goto LAB_0801c8f2;
    }
  }
  uVar3 = 0;
LAB_0801c8f2:
  return CONCAT44(unaff_lr,uVar3);
}

