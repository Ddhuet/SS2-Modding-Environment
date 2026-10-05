
void FUN_080b7e38(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 == 0) {
      *(int *)(*(int *)(param_1 + 0x2c) + 0x20) = iVar1;
    }
    else {
      *(int *)(iVar2 + 0x34) = iVar1;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x30) = iVar2;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

