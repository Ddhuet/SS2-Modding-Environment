
undefined8 FUN_0805da4c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 unaff_lr;
  
  piVar4 = (int *)*DAT_0805da90;
  uVar3 = 0;
  do {
    if ((*(ushort *)((int)piVar4 + 10) & 1) != 0) {
      iVar2 = param_1 - *piVar4 >> 8;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      iVar1 = param_2 - piVar4[1] >> 8;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (((iVar2 < 8) && (iVar1 < 8)) && (param_3 == *(ushort *)(piVar4 + 2))) goto LAB_0805da9e;
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 8;
  } while (uVar3 < 0x10);
  piVar4 = (int *)0x0;
LAB_0805da9e:
  return CONCAT44(unaff_lr,piVar4);
}

