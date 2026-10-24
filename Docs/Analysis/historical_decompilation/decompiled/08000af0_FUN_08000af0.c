
undefined4 FUN_08000af0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  short *psVar2;
  undefined4 unaff_lr;
  
  iVar1 = DAT_08000b2c;
  FUN_080b9a84(param_2,param_1 * 0x20 + DAT_08000b2c,param_3 << 3 & DAT_08000b30);
  psVar2 = DAT_08000b34;
  if (*DAT_08000b34 == 0) {
    FUN_08001348(iVar1,0x5000000,0x400);
    *psVar2 = *psVar2 + 1;
  }
  return unaff_lr;
}

