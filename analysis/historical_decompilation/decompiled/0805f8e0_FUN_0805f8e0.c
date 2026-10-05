
undefined4 FUN_0805f8e0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  iVar3 = *DAT_0805f904;
  uVar2 = 0;
  do {
    if (((int)(uint)*DAT_0805f908 >> uVar2 & 1U) != 0) {
      while( true ) {
        iVar1 = FUN_0805f790(iVar3 + uVar2 * 0x88);
        if (iVar1 != 0) break;
        FUN_080003f0();
      }
      while (iVar1 = FUN_0805f820(iVar3 + uVar2 * 0x88), iVar1 == 0) {
        FUN_080003f0();
      }
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 4);
  return unaff_lr;
}

