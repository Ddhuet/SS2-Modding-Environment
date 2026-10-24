
void FUN_080b804c(void)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)*DAT_080b82e8;
  if (((uint)(*piVar4 - DAT_080b82ec) < 2) &&
     (bVar1 = *(byte *)(piVar4 + 1), iVar5 = bVar1 - 1, *(char *)(piVar4 + 1) = (char)iVar5,
     iVar5 == 0 || bVar1 == 0)) {
    *(undefined1 *)(piVar4 + 1) = *(undefined1 *)((int)piVar4 + 0xb);
    puVar3 = DAT_080b8080;
    puVar2 = DAT_080b807c;
    *DAT_080b807c = 0;
    *puVar3 = 0;
    *puVar2 = 0xb600;
    *puVar3 = 0xb600;
  }
  return;
}

