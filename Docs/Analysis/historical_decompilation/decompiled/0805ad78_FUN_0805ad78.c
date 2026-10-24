
undefined4 FUN_0805ad78(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_lr;
  
  iVar1 = *DAT_0805adb4 + DAT_0805adb8;
  uVar2 = 0;
  do {
    if (iVar1 + 0x48 == param_1) {
      FUN_08028520(*(undefined2 *)(iVar1 + 0x40));
      *(uint *)(*DAT_0805adb4 + 0x54) = *(uint *)(*DAT_0805adb4 + 0x54) & ~(1 << (uVar2 & 0xff));
    }
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 0x70;
  } while (uVar2 < 0xf);
  return unaff_lr;
}

