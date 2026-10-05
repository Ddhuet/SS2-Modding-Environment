
uint FUN_08002204(void)

{
  uint uVar1;
  
  if ((*DAT_08002214 & 2) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *DAT_08002224 >> 7 & 1;
  }
  return uVar1;
}

