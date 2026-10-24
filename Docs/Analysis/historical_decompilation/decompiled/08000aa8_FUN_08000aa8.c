
void FUN_08000aa8(ushort param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  
  if (param_2 == (undefined2 *)0x0) {
    return;
  }
  puVar1 = DAT_08000ad8;
  if (param_1 != 1) {
    if (param_1 < 2) {
      puVar1 = DAT_08000ad0;
      if (param_1 != 0) {
        return;
      }
    }
    else {
      puVar1 = DAT_08000ae0;
      if ((param_1 != 2) && (puVar1 = DAT_08000aec, param_1 != 3)) {
        return;
      }
    }
  }
  *puVar1 = *param_2;
  return;
}

