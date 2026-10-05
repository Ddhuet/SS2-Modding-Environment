
bool FUN_08068408(void)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  puVar1 = DAT_08068438;
  uVar3 = *DAT_08068438;
  if (uVar3 < 0x32) {
    puVar2 = (undefined1 *)(*DAT_0806843c + uVar3 * 0x88);
    *(undefined4 *)(puVar2 + 4) = 1;
    *puVar2 = 0x8d;
    *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(*DAT_08068440 + 0x40);
    puVar2[1] = 1;
    *puVar1 = *puVar1 + 1;
  }
  return uVar3 < 0x32;
}

