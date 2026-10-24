
undefined4
FUN_08008b40(ushort param_1,short param_2,short param_3,ushort param_4,short param_5,
            undefined2 param_6)

{
  int iVar1;
  undefined4 unaff_lr;
  
  iVar1 = DAT_08008b7c;
  *(ushort *)(DAT_08008b7c + 0x40) = param_1 | param_3 << 6 | param_2 << 8;
  *(ushort *)(iVar1 + 0x42) = param_4 | param_5 << 8;
  *(undefined2 *)(iVar1 + 0x44) = param_6;
  return unaff_lr;
}

