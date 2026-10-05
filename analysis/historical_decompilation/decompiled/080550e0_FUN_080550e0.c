
undefined4 FUN_080550e0(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  FUN_0802a20c(0x71,0xe3,0xa0,0x3c);
  piVar1 = DAT_08055168;
  FUN_08019a00(*(undefined2 *)(*DAT_08055168 + 2),3);
  FUN_08019a00(*(undefined2 *)(*piVar1 + DAT_0805516c + 2),3);
  if ((*DAT_08055170 & 0x20) == 0) {
    FUN_080067e8(0x17e);
  }
  FUN_08028e2c(1,0,8,0);
  FUN_08028e2c(2,0,8,0);
  puVar2 = DAT_08055174;
  iVar3 = *piVar1;
  uVar4 = 0;
  do {
    if (((*puVar2 & 1 << (uVar4 & 0xff)) != 0) && (*(short *)(iVar3 + 0xc) == 0xc)) {
      *(undefined2 *)(iVar3 + 0xc) = 0;
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + DAT_0805516c;
  } while (uVar4 < 5);
  FUN_08019a4c();
  return unaff_lr;
}

