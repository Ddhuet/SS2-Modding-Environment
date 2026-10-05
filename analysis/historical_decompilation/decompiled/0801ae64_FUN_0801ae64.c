
undefined8 FUN_0801ae64(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 unaff_lr;
  undefined8 uVar4;
  
  uVar2 = 0;
  uVar3 = 0;
  while( true ) {
    uVar1 = (uint)*(ushort *)(uVar3 * 4 + param_1);
    if (uVar1 != 0) {
      uVar2 = uVar2 | 1 << (uVar1 & 0xff);
    }
    if (uVar1 - 1 < 0x29) break;
    uVar3 = uVar3 + 1;
    if (2 < uVar3) {
      return CONCAT44(unaff_lr,uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0801ae92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)((uVar1 - 1) * 4 + DAT_0801ae94))();
  return uVar4;
}

