
undefined4 FUN_08019c88(int param_1,uint param_2,short param_3)

{
  undefined4 unaff_lr;
  bool bVar1;
  short local_18;
  short local_16;
  
  bVar1 = (param_2 & 0x8000) == 0;
  if (!bVar1) {
    param_2 = param_2 & DAT_08019ca8;
  }
  if (DAT_08019d04 < param_2) {
    param_2 = DAT_08019d04;
  }
  FUN_0800b570((*(int *)(param_1 + 0x14) << 8) >> 0x10,(*(int *)(param_1 + 0x18) << 8) >> 0x10,
               &local_18,&local_16,0x30,0);
  local_18 = local_18 + -8;
  if (bVar1) {
    FUN_08065a50((int)local_18,(int)local_16 + (int)param_3,param_2,0,4);
  }
  else {
    FUN_08065a50((int)local_18,(int)local_16 + (int)param_3,DAT_08019d08 & param_2,3,4);
  }
  return unaff_lr;
}

