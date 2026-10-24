
undefined8 FUN_080682e4(undefined4 param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 unaff_lr;
  
  puVar1 = DAT_08068314;
  uVar3 = *DAT_08068314;
  if (uVar3 < 0x32) {
    puVar2 = (undefined1 *)(*DAT_08068318 + uVar3 * 0x88);
    *(undefined4 *)(puVar2 + 4) = 1;
    *puVar2 = 0x89;
    *(undefined4 *)(puVar2 + 8) = param_1;
    puVar2[1] = 1;
    *puVar1 = *puVar1 + 1;
  }
  return CONCAT44(unaff_lr,(uint)(uVar3 < 0x32));
}

