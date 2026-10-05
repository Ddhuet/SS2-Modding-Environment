
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08000990(byte param_1,short param_2)

{
  byte *pbVar1;
  undefined4 unaff_lr;
  
  pbVar1 = DAT_080009bc;
  *DAT_080009bc = *DAT_080009bc & 0xf8 | param_1 & 7;
  if (param_2 != 0) {
    _DAT_04000000 = *(undefined2 *)pbVar1;
  }
  return unaff_lr;
}

