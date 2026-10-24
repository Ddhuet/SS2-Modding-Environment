
short FUN_0801deb0(int param_1,uint param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + (param_2 & 0xffff) * 4 + 4);
  if (sVar1 == 7) {
    sVar1 = 8;
  }
  return sVar1;
}

