
undefined8 FUN_08068364(undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  
  puVar1 = DAT_08068374;
  uVar2 = *DAT_08068374;
  if (uVar2 < 0x32) {
    puVar3 = (undefined1 *)(*DAT_080683a8 + uVar2 * 0x88);
    *(undefined4 *)(puVar3 + 4) = 1;
    *puVar3 = 0x8b;
    FUN_080b9a88(param_1,puVar3 + 8,DAT_080683ac);
    puVar3[1] = 1;
    *puVar1 = *puVar1 + 1;
  }
  return CONCAT44(unaff_lr,(uint)(uVar2 < 0x32));
}

