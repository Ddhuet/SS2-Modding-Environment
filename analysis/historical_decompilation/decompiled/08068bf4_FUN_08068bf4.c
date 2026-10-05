
bool FUN_08068bf4(void)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  puVar1 = DAT_08068c20;
  uVar3 = *DAT_08068c20;
  if (uVar3 < 0x32) {
    puVar2 = (undefined1 *)(*DAT_08068c24 + uVar3 * 0x88);
    *(undefined4 *)(puVar2 + 4) = 1;
    *puVar2 = 0xaf;
    *(undefined4 *)(puVar2 + 8) = 1;
    puVar2[1] = 1;
    *puVar1 = *puVar1 + 1;
  }
  return uVar3 < 0x32;
}

