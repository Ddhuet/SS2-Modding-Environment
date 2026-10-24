
undefined8 FUN_08002164(void)

{
  uint uVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  if ((*DAT_08002194 >> 1 & 1) == 0) {
    iVar2 = 1;
  }
  else {
    uVar1 = 0;
    iVar2 = 0;
    do {
      if ((0x100 << (uVar1 & 0xff) & *DAT_08002198) != 0) {
        iVar2 = iVar2 + 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 4);
  }
  return CONCAT44(unaff_lr,iVar2);
}

