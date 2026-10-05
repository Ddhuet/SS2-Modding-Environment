
undefined8 FUN_0801b35c(int param_1)

{
  uint uVar1;
  undefined4 unaff_lr;
  undefined8 uVar2;
  int local_24;
  
  local_24 = 0;
  uVar1 = 0;
  while ((*(ushort *)(param_1 + 0x174 + uVar1 * 2) == DAT_0801b3a4 ||
         (local_24 = local_24 + 1, 5 < uVar1))) {
    uVar1 = uVar1 + 1;
    if (5 < uVar1) {
      return CONCAT44(unaff_lr,(uint)(local_24 == 0));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0801b3a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(uVar1 * 4 + DAT_0801b3a8))();
  return uVar2;
}

