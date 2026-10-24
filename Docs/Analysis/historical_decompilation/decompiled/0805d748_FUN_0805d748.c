
void FUN_0805d748(void)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  short *psVar4;
  undefined1 *puVar5;
  
  piVar1 = DAT_0805d770;
  psVar4 = (short *)(*DAT_0805d770 + 0x108);
  if (*psVar4 == 4) {
    iVar2 = FUN_0805d8c8(psVar4);
    if (iVar2 == 0) {
      *(undefined1 *)(*piVar1 + DAT_0805d784) = 0;
      return;
    }
    puVar5 = (undefined1 *)(*piVar1 + DAT_0805d774);
    uVar3 = 1;
  }
  else {
    puVar5 = (undefined1 *)(*DAT_0805d770 + DAT_0805d798);
    uVar3 = 0;
  }
  *puVar5 = uVar3;
  return;
}

