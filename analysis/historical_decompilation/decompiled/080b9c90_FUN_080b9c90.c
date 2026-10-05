
void FUN_080b9c90(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  
  puVar1 = DAT_080b9cc0;
  *DAT_080b9cc0 = 0;
  puVar2 = DAT_080b9cc4;
  puVar3 = (undefined2 *)*DAT_080b9cc4;
  *puVar3 = 0;
  *puVar2 = puVar3 + 1;
  puVar3[1] = 0;
  *puVar2 = puVar3;
  *DAT_080b9cc8 = *DAT_080b9cc8 & ~(ushort)(8 << *DAT_080b9ccc);
  *puVar1 = *DAT_080b9cd0;
  return;
}

