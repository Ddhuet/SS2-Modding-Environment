
undefined8 FUN_0805b314(void)

{
  int iVar1;
  ushort *puVar2;
  undefined4 uVar3;
  undefined4 unaff_lr;
  
  iVar1 = FUN_080020f4();
  iVar1 = iVar1 * 0x154 + DAT_0805b344;
  if (*(short *)(iVar1 + 0x12) == *(short *)(iVar1 + 0x6c)) {
    iVar1 = *DAT_0805b364 + (uint)*(ushort *)(*DAT_0805b364 + 0x70) * 0x10;
    if (*(char *)(iVar1 + 0x81) == '\0') {
      uVar3 = 0;
      goto LAB_0805b378;
    }
    puVar2 = (ushort *)(iVar1 + 0x7a);
  }
  else {
    puVar2 = (ushort *)(*(int *)(iVar1 + 0x140) + 0x19c);
  }
  uVar3 = FUN_08006d98(*puVar2 | 0xb0000);
LAB_0805b378:
  return CONCAT44(unaff_lr,uVar3);
}

