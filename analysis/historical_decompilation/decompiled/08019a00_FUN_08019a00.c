
undefined4 FUN_08019a00(short param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_lr;
  
  iVar2 = *DAT_08019a18;
  uVar3 = 0;
  uVar1 = 1;
  while (((*DAT_08019a1c & uVar1) == 0 || (*(short *)(iVar2 + 2) != param_1))) {
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + DAT_08019a48;
    if (4 < uVar3) {
      return unaff_lr;
    }
    uVar1 = 1 << (uVar3 & 0xff);
  }
  *(undefined2 *)(iVar2 + 0x88) = param_2;
  return unaff_lr;
}

