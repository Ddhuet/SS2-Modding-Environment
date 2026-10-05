
undefined4 FUN_080b9990(undefined4 param_1,int param_2)

{
  byte *pbVar1;
  uint unaff_r4;
  undefined4 unaff_lr;
  
  pbVar1 = *(byte **)(param_2 + 0x40);
  *(uint *)(param_2 + 0x28) =
       (((unaff_r4 & DAT_080b99c8 | (uint)*pbVar1) & DAT_080b99cc | (uint)pbVar1[1] << 8) &
        DAT_080b99d0 | (uint)pbVar1[2] << 0x10) & DAT_080b99d4 | (uint)pbVar1[3] << 0x18;
  *(byte **)(param_2 + 0x40) = pbVar1 + 4;
  return unaff_lr;
}

