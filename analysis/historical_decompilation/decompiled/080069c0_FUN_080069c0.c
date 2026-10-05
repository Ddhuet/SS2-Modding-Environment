
longlong FUN_080069c0(uint param_1)

{
  uint uVar1;
  uint unaff_lr;
  longlong lVar2;
  
  uVar1 = (param_1 & 0xfffffff) >> 0x10;
  if (0x16 < uVar1) {
    return (ulonglong)unaff_lr << 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x080069da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (**(code **)(uVar1 * 4 + DAT_080069dc))();
  return lVar2;
}

