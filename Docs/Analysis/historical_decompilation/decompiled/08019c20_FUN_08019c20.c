
undefined4 FUN_08019c20(short param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_lr;
  
  if (param_1 != 0) {
    iVar1 = *DAT_08019c68;
    uVar2 = 0;
    do {
      if (((*DAT_08019c6c & 1 << (uVar2 & 0xff)) != 0) && (*(short *)(iVar1 + 2) == param_1)) {
        *(undefined1 *)(iVar1 + 0x1dc) = param_2;
        return unaff_lr;
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + DAT_08019c70;
    } while (uVar2 < 5);
  }
  return unaff_lr;
}

