
undefined4 FUN_080b7ec8(undefined4 param_1,int param_2)

{
  uint extraout_r3;
  undefined4 unaff_lr;
  undefined8 uVar1;
  
  uVar1 = FUN_080b7ea0((uint)*(uint3 *)(*(int *)(param_2 + 0x40) + 1) << 8);
  *(uint *)((int)((ulonglong)uVar1 >> 0x20) + 0x40) = (uint)uVar1 | extraout_r3;
  return unaff_lr;
}

