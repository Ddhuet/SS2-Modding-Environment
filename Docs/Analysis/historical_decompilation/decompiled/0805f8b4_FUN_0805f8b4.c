
undefined4 FUN_0805f8b4(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (((int)(uint)*DAT_0805f8cc >> uVar1 & 1U) != 0) {
      return 1;
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  return 0;
}

