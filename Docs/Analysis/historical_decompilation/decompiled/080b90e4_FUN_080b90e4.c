
undefined4 FUN_080b90e4(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  bVar1 = *(byte *)(param_1 + 2);
  bVar2 = *(byte *)(param_1 + 3);
  if (bVar1 < bVar2) {
    if (bVar2 >> 1 < bVar1) goto LAB_080b9110;
    *(undefined1 *)(param_1 + 0x1b) = 0xf0;
LAB_080b911e:
    uVar4 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) >> 4;
    *(char *)(param_1 + 10) = (char)uVar4;
    if (uVar4 < 0x10) goto LAB_080b9130;
    uVar3 = 0xf;
  }
  else {
    if (bVar2 <= bVar1 >> 1) {
      *(undefined1 *)(param_1 + 0x1b) = 0xf;
      goto LAB_080b911e;
    }
LAB_080b9110:
    *(undefined1 *)(param_1 + 0x1b) = 0xff;
    uVar3 = (undefined1)((uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) >> 4);
  }
  *(undefined1 *)(param_1 + 10) = uVar3;
LAB_080b9130:
  *(char *)(param_1 + 0x19) =
       (char)((int)((uint)*(byte *)(param_1 + 10) * (uint)*(byte *)(param_1 + 6) + 0xf) >> 4);
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1c) & *(byte *)(param_1 + 0x1b);
  return unaff_lr;
}

