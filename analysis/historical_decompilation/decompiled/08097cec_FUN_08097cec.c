
undefined4 FUN_08097cec(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_lr;
  
  iVar1 = (param_3 - param_1) * 0x100 >> 0x10;
  if (iVar1 == 0) {
    *param_5 = 0;
    param_5[1] = 0x100;
    iVar1 = DAT_08097d48;
    if (param_2 <= param_4) {
      return unaff_lr;
    }
  }
  else {
    uVar2 = FUN_080b9a80(iVar1,(int)(short)((uint)(param_4 - param_2) >> 8));
    iVar1 = DAT_08097d2c;
    uVar2 = (uVar2 & 0xffff) >> 8;
    *param_5 = (int)*(short *)((uVar2 + 0x40) * 2 + DAT_08097d2c);
    iVar1 = (int)*(short *)(uVar2 * 2 + iVar1);
  }
  param_5[1] = iVar1;
  return unaff_lr;
}

