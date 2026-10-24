
undefined4 FUN_08001040(ushort param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined4 unaff_lr;
  
  puVar4 = DAT_080010a8;
  puVar2 = DAT_080010a4;
  puVar3 = DAT_080010a0;
  uVar1 = *DAT_0800109c;
  while ((uVar1 & 3) != 0) {
    uVar1 = *DAT_0800109c;
  }
  *DAT_080010a0 = 0;
  *puVar4 = 0;
  param_1 = param_1 | *puVar2;
  *puVar2 = param_1;
  puVar2 = DAT_0800109c;
  *DAT_0800109c = param_1;
  puVar4 = DAT_080010a8;
  uVar1 = *puVar2;
  while ((uVar1 & 3) != 0) {
    uVar1 = *puVar2;
  }
  *puVar3 = 1;
  *puVar4 = 1;
  return unaff_lr;
}

