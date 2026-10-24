
undefined8 FUN_0806666c(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  int local_1c;
  int local_18;
  
  if (*DAT_080666cc < 0x32) {
    iVar3 = *param_1;
    local_1c = (int)*(short *)(iVar3 + (*(byte *)(param_1 + 1) & 0xffffff7f) * 8 + 10) << 0xb;
    local_18 = (int)*(short *)(iVar3 + (*(byte *)(param_1 + 1) & 0xffffff7f) * 8 + 0xc) << 0xb;
    if (((*(ushort *)(iVar3 + (*(byte *)(param_1 + 1) & 0xffffff7f) * 8 + 8) & 0x4000) != 0) ||
       (iVar3 = FUN_080179d8(&local_1c), iVar3 != 0)) {
      if (*DAT_080666d0 == '\0') {
        *DAT_080666d0 = '\x01';
        piVar1 = DAT_08066714;
        puVar4 = (undefined1 *)(*DAT_08066710 + *DAT_08066714 * 0x88);
        *(undefined4 *)(puVar4 + 4) = 1;
        *puVar4 = 0x86;
        FUN_080b9a88(param_1,puVar4 + 8,DAT_08066718);
        puVar4[1] = 1;
        *piVar1 = *piVar1 + 1;
        uVar2 = 1;
        goto LAB_08066706;
      }
    }
  }
  uVar2 = 0;
LAB_08066706:
  return CONCAT44(unaff_lr,uVar2);
}

