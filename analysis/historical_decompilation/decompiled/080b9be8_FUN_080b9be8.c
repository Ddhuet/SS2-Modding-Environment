
undefined4 FUN_080b9be8(uint param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  sbyte *psVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined4 unaff_lr;
  
  puVar1 = DAT_080b9c74;
  puVar4 = (undefined2 *)((param_1 & 0xff) * 6 + *DAT_080b9c6c);
  *DAT_080b9c70 = *DAT_080b9c74;
  *puVar1 = 0;
  puVar2 = DAT_080b9c78;
  puVar5 = (undefined2 *)*DAT_080b9c78;
  puVar5[1] = 0;
  psVar3 = DAT_080b9c80;
  *DAT_080b9c7c = *DAT_080b9c7c | (ushort)(8 << *DAT_080b9c80);
  *DAT_080b9c84 = 0;
  *DAT_080b9c88 = *puVar4;
  *puVar5 = puVar4[1];
  *puVar2 = puVar5 + 1;
  puVar5[1] = puVar4[2];
  *puVar2 = puVar5;
  *DAT_080b9c8c = (short)(8 << *psVar3);
  *puVar1 = 1;
  return unaff_lr;
}

