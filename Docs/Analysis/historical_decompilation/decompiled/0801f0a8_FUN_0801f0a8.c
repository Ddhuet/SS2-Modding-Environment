
undefined4 FUN_0801f0a8(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 unaff_lr;
  
  if (*(byte *)(param_2 + 2) == 0) {
    *(undefined2 *)(param_1 + 0x7c) = 0;
    *(undefined2 *)(param_1 + 0x80) = 0;
    *(undefined2 *)(param_1 + 0x7e) = 0;
  }
  else {
    bVar2 = *(byte *)(param_2 + 2) >> 2;
    *(ushort *)(param_1 + 0x7c) = (ushort)bVar2;
    bVar1 = *(byte *)(param_2 + 2);
    if (bVar2 == 0) {
      *(ushort *)(param_1 + 0x7c) = 1;
      uVar3 = 0x100;
    }
    else {
      uVar3 = 0x400;
    }
    *(undefined2 *)(param_1 + 0x80) = uVar3;
    *(ushort *)(param_1 + 0x82) = (ushort)bVar1;
    *(short *)(param_1 + 0x7e) = (short)*(char *)(param_2 + 3);
  }
  return unaff_lr;
}

