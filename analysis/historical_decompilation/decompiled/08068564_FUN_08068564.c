
bool FUN_08068564(void)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  puVar1 = DAT_08068594;
  uVar3 = *DAT_08068594;
  if (uVar3 < 0x32) {
    puVar2 = (undefined1 *)(*DAT_08068598 + uVar3 * 0x88);
    *(undefined4 *)(puVar2 + 4) = 1;
    *puVar2 = 0x93;
    *(undefined4 *)(puVar2 + 8) = 0;
    puVar2[1] = 2;
    *puVar1 = *puVar1 + 1;
  }
  return uVar3 < 0x32;
}

