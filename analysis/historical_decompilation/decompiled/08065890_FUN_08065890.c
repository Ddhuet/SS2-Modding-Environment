
undefined4
FUN_08065890(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
            undefined2 param_5)

{
  ushort uVar1;
  uint uVar2;
  undefined4 unaff_lr;
  
  uVar2 = (uint)*(ushort *)((int)param_1 + 0x2e);
  uVar1 = *(ushort *)(param_1 + 0xb);
  *(short *)(param_1 + 0xb) = (short)(uVar2 + uVar1);
  if ((uVar2 != 0 && -1 < (int)(uVar2 * 0x10000)) &&
     ((int)*(short *)(param_1 + 0xc) < (int)((uVar2 + uVar1) * 0x10000) >> 0x10)) {
    *(ushort *)((int)param_1 + 0x2e) = -*(ushort *)((int)param_1 + 0x2e);
  }
  if ((*(short *)((int)param_1 + 0x2e) < 0) &&
     (*(short *)(param_1 + 0xb) < *(short *)((int)param_1 + 0x32))) {
    *(short *)((int)param_1 + 0x2e) = -*(short *)((int)param_1 + 0x2e);
  }
  FUN_08007a14(param_2,param_3,param_4,param_5,0,param_1 + 7,param_1[2],*param_1,
               (int)*(short *)(param_1 + 0xb),(int)*(short *)(param_1 + 0xb),0xff);
  return unaff_lr;
}

