
undefined4 FUN_0805b064(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_lr;
  
  for (uVar2 = param_1 >> 0x10; uVar2 != 0; uVar2 = uVar2 - 1 & 0xffff) {
    FUN_080003f0();
    iVar1 = FUN_080021a8();
    if (iVar1 != 0) break;
  }
  iVar1 = FUN_0800c5e8();
  if ((iVar1 == 0) && (*DAT_0805b0ac = param_1 & 0xff, (*DAT_0805b0b0 & 0x20) == 0)) {
    FUN_08006794(param_1 & 0xff);
  }
  return unaff_lr;
}

