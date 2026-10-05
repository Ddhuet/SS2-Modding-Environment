
undefined8 FUN_08068e44(int param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 unaff_lr;
  
  puVar1 = DAT_08068e74;
  uVar3 = *DAT_08068e74;
  if (uVar3 < 0x32) {
    puVar2 = (undefined1 *)(*DAT_08068e78 + uVar3 * 0x88);
    *(undefined4 *)(puVar2 + 4) = 1;
    *puVar2 = 0x9b;
    *(uint *)(puVar2 + 8) = (uint)*(ushort *)(param_1 + 0xc);
    puVar2[1] = 1;
    *puVar1 = *puVar1 + 1;
  }
  return CONCAT44(unaff_lr,(uint)(uVar3 < 0x32));
}

