
undefined4 FUN_08001180(void)

{
  int *piVar1;
  undefined4 unaff_lr;
  
  if (*DAT_080011d0 != 0) {
    FUN_080b804c();
  }
  piVar1 = DAT_080011d4;
  if (*DAT_080011d4 != 0) {
    if (*DAT_080011d8 != 0) {
      FUN_080ba434();
    }
    FUN_08000b50();
    FUN_08001394();
    *piVar1 = 0;
  }
  if (*DAT_080011d0 != 0) {
    FUN_080b870c();
  }
  *DAT_080011dc = 1;
  *DAT_080011e0 = *DAT_080011e0 | 1;
  return unaff_lr;
}

