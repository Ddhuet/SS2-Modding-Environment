
undefined4 FUN_080b8db0(undefined4 *param_1,byte *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  if (param_1[0xd] != DAT_080b8e60) {
    return unaff_lr;
  }
  param_1[0xd] = param_1[0xd] + 1;
  param_1[1] = 0;
  *param_1 = param_2;
  param_1[0xc] = *(undefined4 *)(param_2 + 4);
  *(byte *)((int)param_1 + 9) = param_2[2];
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 7) = 0x96;
  *(undefined2 *)(param_1 + 8) = 0x96;
  *(undefined2 *)((int)param_1 + 0x1e) = 0x100;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  iVar2 = 0;
  puVar1 = (undefined1 *)param_1[0xb];
  if (*param_2 != 0) {
    if (*(char *)(param_1 + 2) == '\0') goto LAB_080b8e42;
    do {
      FUN_080b82f0(param_1,puVar1);
      *puVar1 = 0xc0;
      *(undefined4 *)(puVar1 + 0x20) = 0;
      *(undefined4 *)(puVar1 + 0x40) = *(undefined4 *)(param_2 + iVar2 * 4 + 8);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0x50;
      if ((int)(uint)*param_2 <= iVar2) break;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 2));
  }
  if (iVar2 < (int)(uint)*(byte *)(param_1 + 2)) {
    do {
      FUN_080b82f0(param_1,puVar1);
      *puVar1 = 0;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0x50;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 2));
  }
LAB_080b8e42:
  if ((param_2[3] & 0x80) != 0) {
    FUN_080b8bc4(param_2[3]);
  }
  param_1[0xd] = DAT_080b8e60;
  return unaff_lr;
}

