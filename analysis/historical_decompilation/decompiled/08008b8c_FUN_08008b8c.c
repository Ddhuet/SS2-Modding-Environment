
undefined4 FUN_08008b8c(ushort param_1,ushort param_2,short param_3,short param_4)

{
  undefined4 unaff_lr;
  
  *(ushort *)(DAT_08008bb0 + 0x3c) =
       param_1 & 0xff | (param_2 & 0xff) << 4 | param_3 << 8 | param_4 << 0xc;
  return unaff_lr;
}

