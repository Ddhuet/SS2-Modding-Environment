
void FUN_080b8644(int param_1)

{
  if (*(int *)(param_1 + 0x34) == DAT_080b8658) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & DAT_080b865c;
  }
  return;
}

