
undefined8 FUN_0800b570(short param_1,short param_2,short *param_3,short *param_4)

{
  int iVar1;
  undefined4 unaff_lr;
  
  iVar1 = DAT_0800b5a8;
  *param_3 = param_1 - (*(short *)(DAT_0800b5a8 + 0x84) + *(short *)(DAT_0800b5a8 + 0x7c));
  *param_4 = param_2 - (*(short *)(iVar1 + 0x86) + *(short *)(iVar1 + 0x7e));
  return CONCAT44(unaff_lr,1);
}

