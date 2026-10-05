
undefined4 FUN_08058668(uint param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 unaff_lr;
  
  iVar1 = FUN_08002204();
  if (iVar1 != 0) {
    *(undefined1 *)(*DAT_08058698 + 0x1c8 + (param_2 & 0xff) + (param_1 & 0xff) * 5) = param_3;
  }
  return unaff_lr;
}

