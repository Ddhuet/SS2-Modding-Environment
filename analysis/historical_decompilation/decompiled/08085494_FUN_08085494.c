
undefined8 FUN_08085494(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  iVar3 = 0;
  if (*(int *)*DAT_080854c0 == 4) {
    uVar2 = 0;
    piVar1 = (int *)*DAT_080854c0 + 0x41;
    do {
      if ((short)*piVar1 == 10) {
        iVar3 = iVar3 + piVar1[1];
      }
      piVar1 = piVar1 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x4b);
  }
  else {
    iVar3 = FUN_0805dad4();
  }
  return CONCAT44(unaff_lr,iVar3);
}

