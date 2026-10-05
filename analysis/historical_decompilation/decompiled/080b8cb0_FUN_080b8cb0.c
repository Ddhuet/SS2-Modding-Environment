
undefined4 FUN_080b8cb0(void)

{
  undefined2 *puVar1;
  int *piVar2;
  undefined4 unaff_lr;
  undefined4 local_8;
  
  piVar2 = (int *)*DAT_080b8cec;
  if ((uint)(*piVar2 + DAT_080b8cf0) < 2) {
    *piVar2 = *piVar2 + 10;
    puVar1 = DAT_080b8cf4;
    *DAT_080b8cf4 = 0;
    puVar1[6] = 0;
    local_8 = 0;
    FUN_080b9a88(&local_8,piVar2 + 0xd4,DAT_080b8cf8);
  }
  return unaff_lr;
}

