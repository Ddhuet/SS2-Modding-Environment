
uint FUN_0801a720(void)

{
  uint uVar1;
  
  if ((*DAT_0801a740 & 8) == 0) {
    uVar1 = -(int)(short)(*DAT_0801a740 & 0x20) >> 0x1f & 2;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

