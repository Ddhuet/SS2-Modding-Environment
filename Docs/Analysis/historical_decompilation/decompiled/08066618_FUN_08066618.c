
undefined8 FUN_08066618(void)

{
  uint *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  
  puVar1 = DAT_08066628;
  uVar2 = *DAT_08066628;
  if (uVar2 < 0x32) {
    puVar3 = (undefined1 *)(*DAT_08066664 + uVar2 * 0x88);
    *(undefined4 *)(puVar3 + 4) = 1;
    *puVar3 = 0x85;
    FUN_080b9a88(*DAT_08066668 + 0x22,puVar3 + 8,10);
    puVar3[1] = 3;
    *puVar1 = *puVar1 + 1;
  }
  return CONCAT44(unaff_lr,(uint)(uVar2 < 0x32));
}

