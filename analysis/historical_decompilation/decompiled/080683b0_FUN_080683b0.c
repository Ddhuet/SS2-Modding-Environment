
undefined8 FUN_080683b0(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  
  puVar1 = DAT_080683f4;
  uVar3 = *DAT_080683f4;
  if (uVar3 < 0x32) {
    puVar4 = (undefined1 *)(*DAT_080683f8 + uVar3 * 0x88);
    *(undefined4 *)(puVar4 + 4) = 1;
    *puVar4 = 0x8c;
    iVar2 = FUN_080020f4();
    *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(iVar2 * 0x154 + DAT_080683fc + 0x38);
    puVar4[1] = 1;
    *puVar1 = *puVar1 + 1;
  }
  return CONCAT44(unaff_lr,(uint)(uVar3 < 0x32));
}

