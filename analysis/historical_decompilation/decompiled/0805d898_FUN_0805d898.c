
void FUN_0805d898(void)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = *(short *)(*DAT_0805d8b0 + 0x148) == 6;
  iVar1 = DAT_0805d8c4;
  if (bVar2) {
    iVar1 = DAT_0805d8b4;
  }
  *(bool *)(*DAT_0805d8b0 + iVar1) = bVar2;
  return;
}

