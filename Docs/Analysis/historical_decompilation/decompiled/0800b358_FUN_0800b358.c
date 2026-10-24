
undefined4 FUN_0800b358(uint param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_lr;
  uint local_10;
  
  iVar1 = FUN_08006d98();
  local_10 = param_1 & 0x40000000;
  if (local_10 == 0) {
    local_10 = FUN_08000bc8(iVar1 + 4,&local_10);
  }
  else {
    local_10 = iVar1 + 4;
  }
  if ((*DAT_0800b3a0 & 0x80) == 0) {
    FUN_08001348(local_10,param_2 * 0x800 + 0x6000000,0x1000);
  }
  else {
    FUN_080b9a84(local_10,param_2 * 0x800 + 0x6000000,0x400);
  }
  if ((param_1 & 0x40000000) == 0) {
    FUN_080003f0();
    FUN_08001538(local_10);
  }
  return unaff_lr;
}

