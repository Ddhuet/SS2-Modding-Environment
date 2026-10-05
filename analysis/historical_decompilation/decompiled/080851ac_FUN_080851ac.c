
undefined4 FUN_080851ac(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  piVar1 = DAT_080851b4;
  while( true ) {
    iVar3 = FUN_08001494(DAT_080851d4);
    *piVar1 = iVar3;
    if (iVar3 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)*DAT_080851d8 = 0;
  iVar3 = DAT_080851dc;
  while( true ) {
    iVar4 = FUN_08001494(0x800);
    *(int *)(iVar3 + 0x20) = iVar4;
    iVar2 = DAT_08085214;
    if (iVar4 != 0) break;
    FUN_080003f0();
  }
  *(int *)(DAT_08085214 + 0x10) = *(int *)(DAT_08085214 + 0x20) + DAT_08085218;
  *(undefined4 *)(iVar2 + 8) = 100;
  *(undefined4 *)(iVar2 + 0x24) = DAT_0808521c;
  *(undefined4 *)(iVar2 + 0xc) = DAT_08085220;
  FUN_08000274(iVar2,param_1);
  return unaff_lr;
}

