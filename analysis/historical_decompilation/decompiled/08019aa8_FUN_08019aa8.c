
undefined4 FUN_08019aa8(int param_1)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  undefined4 unaff_lr;
  
  uVar3 = FUN_08002164();
  iVar1 = DAT_08019b08;
  sVar2 = FUN_080baa7c((int)*(short *)(param_1 + 0x17a) * *(int *)(uVar3 * 0xc + DAT_08019b08),100);
  *(short *)(param_1 + 0x17a) = sVar2;
  if (1 < uVar3) {
    sVar2 = FUN_080baa7c((*(short *)(param_1 + 0x174) + 2) * *(int *)(uVar3 * 0xc + iVar1 + 4),100);
    *(short *)(param_1 + 0x174) = sVar2;
  }
  return unaff_lr;
}

