
undefined4 FUN_0801a114(void)

{
  uint uVar1;
  char *pcVar2;
  undefined4 unaff_lr;
  undefined4 local_14;
  
  uVar1 = 0;
  pcVar2 = DAT_0801a150;
  do {
    if (*pcVar2 != '\0') {
      local_14 = 0;
      FUN_080b9a84(&local_14,uVar1 * 0x40 + DAT_0801a154,DAT_0801a158);
      *pcVar2 = '\0';
    }
    uVar1 = uVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (uVar1 < 0x14);
  *DAT_0801a15c = 0;
  *DAT_0801a160 = 0;
  return unaff_lr;
}

