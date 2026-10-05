
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08000940(void)

{
  byte *pbVar1;
  undefined4 unaff_lr;
  
  FUN_08001040(8);
  pbVar1 = DAT_08000964;
  *DAT_08000964 = *DAT_08000964 & 0x7f;
  _DAT_04000000 = *(undefined2 *)pbVar1;
  FUN_080066d8();
  return unaff_lr;
}

