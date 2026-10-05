
undefined4 FUN_08094c74(void)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  FUN_08008b40(0,0,0,0,0,0);
  piVar1 = DAT_08094cb0;
  if (*DAT_08094cb0 != 0) {
    iVar2 = FUN_08000470();
    if (iVar2 != 0) {
      FUN_080003a8(*piVar1);
    }
    FUN_08001538(*piVar1);
    *piVar1 = 0;
  }
  return unaff_lr;
}

