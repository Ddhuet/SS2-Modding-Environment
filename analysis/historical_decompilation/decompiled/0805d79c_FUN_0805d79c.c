
void FUN_0805d79c(void)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  short *psVar4;
  undefined1 *puVar5;
  
  piVar1 = DAT_0805d7c4;
  psVar4 = (short *)(*DAT_0805d7c4 + 0x118);
  if (*psVar4 == 3) {
    iVar2 = FUN_0805d938(psVar4);
    if (iVar2 == 0) {
      *(undefined1 *)(*piVar1 + DAT_0805d7d8) = 0;
      return;
    }
    puVar5 = (undefined1 *)(*piVar1 + DAT_0805d7c8);
    uVar3 = 1;
  }
  else {
    puVar5 = (undefined1 *)(*DAT_0805d7c4 + DAT_0805d7ec);
    uVar3 = 0;
  }
  *puVar5 = uVar3;
  return;
}

