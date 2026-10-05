
bool FUN_0805f838(int param_1)

{
  bool bVar1;
  
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(short *)(param_1 + 0x80) == 0;
  }
  return bVar1;
}

