
undefined4 * FUN_08000274(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_08000470();
  if (iVar1 != 1) {
    if (param_1[2] == 0) {
      param_1[2] = 1;
    }
    param_1[1] = 1;
    puVar3 = (undefined4 *)*DAT_080002d8;
    do {
      puVar2 = puVar3;
      if (-1 < (int)(puVar2[2] - param_1[2])) {
        puVar3 = (undefined4 *)puVar2[6];
        *puVar3 = param_1;
        param_1[6] = puVar3;
        *param_1 = puVar2;
        puVar2[6] = param_1;
        goto LAB_080002be;
      }
      puVar3 = (undefined4 *)*puVar2;
    } while ((undefined4 *)*puVar2 != (undefined4 *)0x0);
    *puVar2 = param_1;
    *param_1 = 0;
    param_1[6] = puVar2;
LAB_080002be:
    *DAT_080002dc = *DAT_080002dc + 1;
    iVar1 = param_1[4];
    *(undefined4 *)(iVar1 + -0x24) = param_2;
    *(undefined4 *)(iVar1 + -0x20) = extraout_r2;
    *(undefined4 *)(iVar1 + -4) = DAT_080004ac;
    param_1[4] = iVar1 + -0x30;
    param_1 = (undefined4 *)0x0;
  }
  return param_1;
}

