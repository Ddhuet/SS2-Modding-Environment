
bool FUN_080011e4(int param_1)

{
  if (param_1 == 0) {
    *DAT_08001200 = 0;
  }
  else {
    *DAT_080011f4 = param_1;
  }
  return param_1 != 0;
}

