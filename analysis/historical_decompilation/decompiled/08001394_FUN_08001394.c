
undefined4 FUN_08001394(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 unaff_lr;
  
  uVar2 = DAT_080013c8;
  piVar1 = DAT_080013c4;
  puVar4 = (undefined4 *)*DAT_080013c0;
  uVar5 = 0;
  if (*DAT_080013c4 != 0) {
    do {
      uVar3 = puVar4[2];
      if ((int)uVar3 < 0) {
        FUN_080b9a84(*puVar4,puVar4[1],(uVar3 & 0x7fffffff) >> 2 & uVar2);
      }
      else {
        FUN_080b9a88(*puVar4,puVar4[1],uVar3 >> 2 & uVar2 | 0x4000000);
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 3;
    } while (uVar5 < *DAT_080013f4);
  }
  *piVar1 = 0;
  return unaff_lr;
}

