
void FUN_080b9094(byte param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  puVar1 = DAT_080b90b8;
  puVar3 = DAT_080b90c0;
  if (param_1 == 2) {
LAB_080b90d2:
    *puVar3 = 8;
    puVar3 = puVar3 + 4;
  }
  else {
    puVar3 = DAT_080b90e0;
    if (2 < param_1) {
      if (param_1 == 3) {
        uVar2 = 0;
        puVar3 = DAT_080b90cc;
        goto LAB_080b90da;
      }
      goto LAB_080b90d2;
    }
    if (param_1 != 1) goto LAB_080b90d2;
    *DAT_080b90b8 = 8;
    puVar3 = puVar1 + 2;
  }
  uVar2 = 0x80;
LAB_080b90da:
  *puVar3 = uVar2;
  return;
}

