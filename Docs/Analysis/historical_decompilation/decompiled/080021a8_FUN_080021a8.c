
uint FUN_080021a8(void)

{
  uint uVar1;
  
  if ((*DAT_080021b8 & 2) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *DAT_080021b8 >> 3 & 1;
  }
  return uVar1;
}

