
void FUN_080b858c(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  
  param_2[0x16] = 0;
  param_2[0x1a] = 0;
  if (param_2[0x18] == 0) {
    bVar1 = 0xc;
  }
  else {
    bVar1 = 3;
  }
  *param_2 = *param_2 | bVar1;
  return;
}

