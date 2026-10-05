
uint FUN_080020f4(void)

{
  uint uVar1;
  
  if ((*DAT_08002104 & 2) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_08002114 & 0x3f) >> 4;
  }
  return uVar1;
}

