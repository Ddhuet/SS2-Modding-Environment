
void FUN_08000420(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*DAT_0800043c;
  do {
    if (param_1 == piVar1[5]) {
      piVar1[5] = 0;
      piVar1[1] = 1;
    }
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)0x0);
  return;
}

