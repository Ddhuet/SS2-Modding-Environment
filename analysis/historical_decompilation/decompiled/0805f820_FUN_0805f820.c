
bool FUN_0805f820(int param_1)

{
  bool bVar1;
  
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x74) == 0;
  }
  return bVar1;
}

