
undefined8 FUN_08059ab8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 unaff_lr;
  
  uVar1 = *DAT_08059adc;
  *DAT_08059adc = param_1;
  if ((*DAT_08059ae0 & 0x20) == 0) {
    FUN_08006794(param_1);
  }
  return CONCAT44(unaff_lr,uVar1);
}

