
undefined8 FUN_0805a910(void)

{
  uint uVar1;
  short *psVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  uVar1 = FUN_08002164();
  uVar4 = 0;
  if (uVar1 != 0) {
    psVar2 = (short *)(DAT_0805a934 + 0x6c);
    do {
      if ((*psVar2 == 6) || (*psVar2 == 8)) {
        uVar3 = 1;
        goto LAB_0805a942;
      }
      psVar2 = psVar2 + 0xaa;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  uVar3 = 0;
LAB_0805a942:
  return CONCAT44(unaff_lr,uVar3);
}

