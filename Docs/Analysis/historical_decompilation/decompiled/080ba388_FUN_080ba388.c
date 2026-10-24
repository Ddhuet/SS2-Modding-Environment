
undefined8 FUN_080ba388(uint param_1,int param_2)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_lr;
  undefined1 auStack_54 [64];
  
  param_1 = param_1 & 0xffff;
  uVar2 = DAT_080ba3a4;
  if (param_1 < *(ushort *)(*DAT_080ba3a0 + 10)) {
    uVar2 = FUN_080ba154(param_1);
    uVar2 = uVar2 & 0xffff;
    if (uVar2 == 0) {
      FUN_080b9cd8(auStack_54);
      iVar3 = *DAT_080ba3ec;
      *DAT_080ba3e4 = *DAT_080ba3e4 & (ushort)DAT_080ba3e8 | *(ushort *)(iVar3 + 0x10);
      psVar1 = DAT_080ba3f0;
      *DAT_080ba3f0 = (short)*(undefined4 *)(iVar3 + 4);
      iVar3 = (param_1 << *(sbyte *)(iVar3 + 8)) + 0xe000000;
      while (*psVar1 != 0) {
        uVar2 = FUN_080ba1f0(param_2,iVar3);
        uVar2 = uVar2 & 0xffff;
        if (uVar2 != 0) break;
        *psVar1 = *psVar1 + -1;
        param_2 = param_2 + 1;
        iVar3 = iVar3 + 1;
      }
      *DAT_080ba42c = *DAT_080ba42c & (ushort)DAT_080ba430 | 3;
    }
  }
  return CONCAT44(unaff_lr,uVar2);
}

