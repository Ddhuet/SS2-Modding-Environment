
undefined8 FUN_0805b458(short *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_lr;
  
  if (((param_1 != (short *)0x0) && (*param_1 == 2)) && ((char)param_1[4] == '\0')) {
    iVar2 = FUN_08006d98((ushort)param_1[1] | 0xb0000);
    uVar3 = FUN_0801dc54();
    if (((int)(uint)*(ushort *)(iVar2 + 0x186) >> (uVar3 & 0xff) & 1U) != 0) {
      if ((*(short *)(iVar2 + 0x174) == 9) ||
         (uVar1 = FUN_0801cd3c(), *(ushort *)(iVar2 + 0x184) <= uVar1)) {
        uVar4 = 1;
        goto LAB_0805b4ba;
      }
    }
  }
  uVar4 = 0;
LAB_0805b4ba:
  return CONCAT44(unaff_lr,uVar4);
}

