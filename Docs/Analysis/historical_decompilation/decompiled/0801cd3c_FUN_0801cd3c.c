
longlong FUN_0801cd3c(undefined2 param_1)

{
  uint uVar1;
  uint unaff_lr;
  longlong lVar2;
  
  uVar1 = (uint)*(ushort *)(*DAT_0801cd64 + 0x10);
  if (uVar1 == 8) {
    uVar1 = 6;
  }
  if (7 < (uVar1 & 0xff)) {
    return (ulonglong)unaff_lr << 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x0801cd62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (**(code **)(PTR_PTR_0801cd68 + (uVar1 & 0xff) * 4))
                    (*(code **)(PTR_PTR_0801cd68 + (uVar1 & 0xff) * 4),PTR_PTR_0801cd68,param_1,
                     DAT_0801cd64);
  return lVar2;
}

