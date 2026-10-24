
undefined4 FUN_0801fba8(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 unaff_lr;
  
  if ((*(int *)(param_1 + 0x114) != *(int *)(param_1 + 0xe4)) && (*(char *)(param_1 + 0x70) != '\0')
     ) {
    bVar1 = *(byte *)(param_1 + 0x71);
    if (((bVar1 & 0x80) == 0) && (bVar1 != 0)) {
      sVar2 = FUN_080ba8a4((int)*(short *)(param_1 + 0x6a) * (uint)*(byte *)(param_1 + 0x71),100);
      if (sVar2 == 0) {
        sVar2 = 1;
      }
      *(short *)(param_1 + 0x92) = sVar2 + *(short *)(param_1 + 0x92);
      *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0xe4);
      *(uint *)(param_1 + 0xe8) = bVar1 & 0x80;
    }
  }
  return unaff_lr;
}

