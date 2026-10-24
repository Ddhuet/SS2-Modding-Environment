
undefined8 FUN_0805d9a8(short *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_lr;
  
  if (((param_1 != (short *)0x0) && (*param_1 == 5)) && ((char)param_1[4] == '\0')) {
    iVar1 = FUN_08006d98((ushort)param_1[1] | 0xe0000);
    uVar2 = FUN_0801dc54();
    if ((((int)(uint)*(ushort *)(iVar1 + 0x182) >> (uVar2 & 0xff) & 1U) != 0) &&
       (iVar3 = FUN_080020f4(),
       (int)(uint)*(ushort *)(iVar1 + 0x180) <= (int)*(short *)(iVar3 * 0x154 + DAT_0805da0c + 0x40)
       )) {
      uVar4 = 1;
      goto LAB_0805da12;
    }
  }
  uVar4 = 0;
LAB_0805da12:
  return CONCAT44(unaff_lr,uVar4);
}

