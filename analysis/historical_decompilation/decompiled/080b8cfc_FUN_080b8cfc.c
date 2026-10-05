
undefined4 FUN_080b8cfc(void)

{
  undefined2 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  puVar1 = DAT_080b8d34;
  piVar2 = (int *)*DAT_080b8d2c;
  iVar3 = *piVar2;
  if (iVar3 != DAT_080b8d30) {
    *DAT_080b8d34 = 0xb600;
    puVar1[6] = 0xb600;
    *(undefined1 *)(piVar2 + 1) = 0;
    *piVar2 = iVar3 + -10;
  }
  return unaff_lr;
}

