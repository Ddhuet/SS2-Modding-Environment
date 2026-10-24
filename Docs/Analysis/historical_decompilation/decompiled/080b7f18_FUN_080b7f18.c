
undefined4 FUN_080b7f18(undefined4 param_1,int param_2)

{
  int extraout_r1;
  int extraout_r2;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r12;
  undefined4 unaff_lr;
  undefined8 uVar1;
  
  if (**(char **)(param_2 + 0x40) == '\0') {
    *(char **)(param_2 + 0x40) = *(char **)(param_2 + 0x40) + 1;
  }
  else {
    *(char *)(param_2 + 3) = *(char *)(param_2 + 3) + '\x01';
    FUN_080b7ebc();
    param_2 = extraout_r1;
    if (extraout_r3_00 <= extraout_r12) {
      *(undefined1 *)(extraout_r1 + 3) = 0;
      *(int *)(extraout_r1 + 0x40) = extraout_r2 + 5;
      return unaff_lr;
    }
  }
  uVar1 = FUN_080b7ea0((uint)*(uint3 *)(*(int *)(param_2 + 0x40) + 1) << 8);
  *(uint *)((int)((ulonglong)uVar1 >> 0x20) + 0x40) = (uint)uVar1 | extraout_r3;
  return unaff_lr;
}

