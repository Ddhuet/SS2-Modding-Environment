
undefined4 FUN_0802917c(uint param_1,undefined2 param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 unaff_lr;
  
  if (param_1 < 0x100001) {
    if (param_1 == 0) {
      iVar1 = FUN_080020f4();
      *(undefined2 *)(iVar1 * 0x154 + DAT_0802920c + 0x22) = param_2;
    }
    else if (param_1 - 1 < 5) {
      *(undefined2 *)(*DAT_080291e8 + DAT_080291ec * (param_1 - 1) + 8) = param_2;
    }
  }
  else {
    puVar2 = (uint *)(*DAT_080291c0 + DAT_080291c4);
    uVar3 = 0;
    do {
      if (*puVar2 == param_1) goto LAB_080291aa;
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 0x1c;
    } while (uVar3 < 0xf);
    FUN_080003f0();
    puVar2 = (uint *)0x0;
LAB_080291aa:
    if (puVar2 != (uint *)0x0) {
      *(undefined2 *)(puVar2 + 9) = param_2;
      *(undefined2 *)((int)puVar2 + 0x36) = 3;
      do {
        FUN_080003f0();
      } while (*(short *)((int)puVar2 + 0x36) == 3);
    }
  }
  return unaff_lr;
}

