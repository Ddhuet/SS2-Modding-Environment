
undefined4 FUN_080b8718(uint param_1)

{
  undefined4 *puVar1;
  undefined4 unaff_lr;
  
  puVar1 = (undefined4 *)((param_1 & 0xffff) * 8 + DAT_080b8740);
  FUN_080b8db0(*(undefined4 *)((uint)*(ushort *)(puVar1 + 1) * 0xc + DAT_080b873c),*puVar1);
  return unaff_lr;
}

