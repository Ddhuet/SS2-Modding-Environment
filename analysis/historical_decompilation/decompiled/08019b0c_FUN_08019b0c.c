
undefined4 FUN_08019b0c(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  for (uVar1 = (uint)*DAT_08019b18; (uVar1 & 1) != 0;
      uVar1 = (int)(uint)*DAT_08019b18 >> (uVar1 & 0xff)) {
    uVar1 = uVar3 + 1;
    uVar3 = uVar1 & 0xffff;
    if (1 < uVar3) goto LAB_08019b38;
  }
  if (uVar3 < 2) {
    uVar2 = 1;
  }
  else {
LAB_08019b38:
    uVar2 = 0;
  }
  return uVar2;
}

