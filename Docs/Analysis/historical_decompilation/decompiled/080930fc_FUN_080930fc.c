
undefined4 FUN_080930fc(void)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  piVar1 = DAT_08093124;
  if (*DAT_08093124 != 0) {
    iVar2 = FUN_08000470();
    if (iVar2 != 0) {
      FUN_080003a8(*piVar1);
    }
    FUN_08001538(*piVar1);
    *piVar1 = 0;
  }
  return unaff_lr;
}

