
void FUN_080b8fec(char param_1,byte param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  param_3 = param_3 & 0xff;
  if (param_1 == '\x04') {
    if (param_2 < 0x15) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)(byte)(param_2 - 0x15);
      if (0x3b < uVar1) {
        uVar1 = 0x3b;
      }
    }
    uVar1 = (uint)*(byte *)(uVar1 + DAT_080b9020);
  }
  else {
    if (param_2 < 0x24) {
      param_3 = 0;
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)(byte)(param_2 - 0x24);
      if (0x82 < uVar1) {
        uVar1 = 0x82;
        param_3 = 0xff;
      }
    }
    iVar2 = (int)*(short *)((*(byte *)(uVar1 + DAT_080b908c) & 0xf) * 2 + DAT_080b9090) >>
            ((int)(uint)*(byte *)(uVar1 + DAT_080b908c) >> 4);
    uVar1 = (uint)*(byte *)(uVar1 + 1 + DAT_080b908c);
    uVar1 = iVar2 + ((int)((((int)*(short *)((uVar1 & 0xf) * 2 + DAT_080b9090) >> ((int)uVar1 >> 4))
                           - iVar2) * param_3) >> 8) + 0x800;
  }
                    /* WARNING: Could not recover jumptable at 0x080b908a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

