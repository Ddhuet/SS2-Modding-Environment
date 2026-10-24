
undefined4 FUN_080b8bc4(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 unaff_lr;
  
  piVar3 = (int *)*DAT_080b8c50;
  if (*piVar3 == DAT_080b8c54) {
    *piVar3 = *piVar3 + 1;
    if ((param_1 & 0xff) != 0) {
      *(byte *)((int)piVar3 + 5) = (byte)param_1 & 0x7f;
    }
    if ((param_1 & 0xf00) != 0) {
      *(char *)((int)piVar3 + 6) = (char)((param_1 & 0xf00) >> 8);
      iVar2 = 0xc;
      piVar1 = piVar3 + 0x14;
      do {
        *(undefined1 *)piVar1 = 0;
        iVar2 = iVar2 + -1;
        piVar1 = piVar1 + 0x10;
      } while (iVar2 != 0);
    }
    if ((param_1 & 0xf000) != 0) {
      *(char *)((int)piVar3 + 7) = (char)((param_1 & 0xf000) >> 0xc);
    }
    if ((param_1 & 0xb00000) != 0) {
      *DAT_080b8c58 = *DAT_080b8c58 & 0x3f | (byte)((param_1 & 0x300000) >> 0xe);
    }
    if ((param_1 & 0xf0000) != 0) {
      FUN_080b8cb0();
      FUN_080b8b20(param_1 & 0xf0000);
    }
    *piVar3 = DAT_080b8c54;
  }
  return unaff_lr;
}

