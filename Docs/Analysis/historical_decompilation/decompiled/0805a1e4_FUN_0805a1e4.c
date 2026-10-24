
undefined8 FUN_0805a1e4(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  uVar2 = FUN_0800c6dc();
  iVar1 = DAT_0805a214;
  uVar2 = (-uVar2 | uVar2) >> 0x1f;
  iVar3 = FUN_080020f4();
  if (*(short *)(iVar3 * 0x154 + iVar1 + 0x26) == 0xe) {
    uVar2 = 1;
  }
  uVar6 = 0;
  puVar5 = (undefined4 *)(iVar1 + 0x150);
  do {
    uVar4 = FUN_08002164();
    if (uVar4 <= uVar6) {
LAB_0805a236:
      return CONCAT44(unaff_lr,uVar2);
    }
    if ((*(byte *)*puVar5 & 0xf) == 0xe) {
      uVar2 = 1;
      goto LAB_0805a236;
    }
    puVar5 = puVar5 + 0x55;
    uVar6 = uVar6 + 1;
  } while( true );
}

