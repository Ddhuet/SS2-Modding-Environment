
undefined4 FUN_08000470(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*DAT_08000488;
  do {
    if (param_1 == piVar1) {
      return 1;
    }
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)0x0);
  return 0;
}

