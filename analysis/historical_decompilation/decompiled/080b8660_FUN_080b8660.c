
void FUN_080b8660(int param_1,undefined2 param_2)

{
  if (*(int *)(param_1 + 0x34) == DAT_080b867c) {
    *(undefined2 *)(param_1 + 0x26) = param_2;
    *(undefined2 *)(param_1 + 0x24) = param_2;
    *(undefined2 *)(param_1 + 0x28) = 0x100;
  }
  return;
}

