
undefined4 FUN_0800224c(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_lr;
  
  puVar1 = DAT_08002294;
  if ((*DAT_08002290 & 2) != 0) {
    uVar2 = *DAT_08002294;
    do {
      FUN_080003f0();
      uVar5 = 0;
      uVar4 = 0;
      do {
        uVar3 = 1 << (uVar4 & 0xff);
        if ((*puVar1 & uVar3) != 0) {
          uVar5 = uVar5 | uVar3;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 4);
    } while (uVar5 != (uVar2 >> 8 & 0xf));
  }
  return unaff_lr;
}

