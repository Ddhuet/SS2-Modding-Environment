
undefined8 FUN_0801dd8c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_lr;
  
  iVar1 = FUN_080020f4();
  iVar1 = iVar1 * 0x154 + DAT_0801dde0;
  if ((*(uint *)(iVar1 + 0x38) & 0x100000) == 0) {
    uVar2 = 0;
    if ((((*(short *)(iVar1 + 0x26) == 0xb) || (*(ushort *)(iVar1 + 0xcc) == 0)) ||
        ((int)(((uint)*(ushort *)(iVar1 + 0xcc) - (uint)*(ushort *)(iVar1 + 0x90)) * 0x10000) < 1))
       || ((*(uint *)(iVar1 + 0x38) & 0x2000) != 0)) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(unaff_lr,uVar2);
}

