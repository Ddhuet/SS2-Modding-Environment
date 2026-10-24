
void FUN_080b96fc(byte *param_1)

{
  byte bVar1;
  
  param_1[0x1a] = 0;
  param_1[0x16] = 0;
  if (param_1[0x18] == 0) {
    bVar1 = 0xc;
  }
  else {
    bVar1 = 3;
  }
  *param_1 = bVar1 | *param_1;
  return;
}

