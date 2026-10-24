
undefined4 FUN_0801de28(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  undefined4 unaff_lr;
  
  piVar3 = DAT_0801dea0;
  sVar2 = *(short *)(param_1 + 0x6c);
  cVar1 = *(char *)(param_1 + 0x6e);
  FUN_0801b690(param_1,0,param_1 + 0x40,param_1 + 0x60,*DAT_0801dea0 + 0x38);
  if (*(short *)(param_1 + 0x6a) < *(short *)(param_1 + 0xcc)) {
    *(short *)(param_1 + 0xcc) = *(short *)(param_1 + 0x6a);
  }
  if ((sVar2 != *(short *)(param_1 + 0x6c)) || (cVar1 != *(char *)(param_1 + 0x6e))) {
    FUN_080667ac();
    FUN_0805b37c(*(undefined2 *)(*piVar3 + 0x70));
  }
  return unaff_lr;
}

