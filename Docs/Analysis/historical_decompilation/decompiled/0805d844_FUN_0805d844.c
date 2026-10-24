
void FUN_0805d844(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_0805d864;
  if (*(short *)(*DAT_0805d864 + 0x138) == 7) {
    *(undefined1 *)(*DAT_0805d864 + 0x142) = 1;
  }
  else {
    iVar2 = FUN_080020f4();
    *(undefined2 *)(iVar2 * 0x154 + DAT_0805d894 + 0xce) = 0;
    *(undefined1 *)(*piVar1 + 0x142) = 0;
  }
  return;
}

