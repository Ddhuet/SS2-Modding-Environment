
void FUN_0805d7f0(void)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  short *psVar4;
  undefined1 *puVar5;
  
  piVar1 = DAT_0805d818;
  psVar4 = (short *)(*DAT_0805d818 + 0x128);
  if (*psVar4 == 5) {
    iVar2 = FUN_0805d9a8(psVar4);
    if (iVar2 == 0) {
      *(undefined1 *)(*piVar1 + DAT_0805d82c) = 0;
      return;
    }
    puVar5 = (undefined1 *)(*piVar1 + DAT_0805d81c);
    uVar3 = 1;
  }
  else {
    puVar5 = (undefined1 *)(*DAT_0805d818 + DAT_0805d840);
    uVar3 = 0;
  }
  *puVar5 = uVar3;
  return;
}

