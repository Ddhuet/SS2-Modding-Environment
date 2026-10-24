
undefined4 FUN_0801f0fc(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 unaff_lr;
  
  if (*(byte *)(param_2 + 2) == 0) {
    *(undefined2 *)(param_1 + 0xd6) = 0;
    *(undefined2 *)(param_1 + 0xda) = 0;
    *(undefined2 *)(param_1 + 0xdc) = 0;
  }
  else {
    bVar2 = *(byte *)(param_2 + 2) >> 2;
    *(ushort *)(param_1 + 0xd6) = (ushort)bVar2;
    bVar1 = *(byte *)(param_2 + 2);
    if (bVar2 == 0) {
      *(ushort *)(param_1 + 0xd6) = 1;
      uVar3 = 0x100;
    }
    else {
      uVar3 = 0x400;
    }
    *(undefined2 *)(param_1 + 0xda) = uVar3;
    *(ushort *)(param_1 + 0xdc) = (ushort)bVar1;
    *(short *)(param_1 + 0xd8) = (short)*(char *)(param_2 + 3);
  }
  return unaff_lr;
}

