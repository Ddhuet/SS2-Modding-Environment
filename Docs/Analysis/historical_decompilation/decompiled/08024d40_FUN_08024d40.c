
undefined4 FUN_08024d40(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r8;
  undefined4 in_stack_00000044;
  undefined4 in_stack_0000004c;
  undefined2 in_stack_00000078;
  short sStack0000007c;
  short sStack0000007e;
  int in_stack_00000084;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000090;
  int in_stack_000000a4;
  uint in_stack_000000a8;
  int in_stack_000000b8;
  undefined4 in_stack_00000100;
  
  iVar2 = in_stack_000000b8;
  piVar1 = DAT_08024d78;
  if (in_stack_000000a8 < 3) {
    FUN_0806599c(&stack0x00000044,in_stack_000000b8,&stack0x00000078,&stack0x0000007a);
    iVar3 = FUN_0800c684();
    if ((((iVar3 == 0) && (iVar3 = FUN_0800c5e8(), iVar3 == 0)) &&
        (iVar3 = FUN_0800c61c(), iVar3 == 0)) && (iVar3 = FUN_0800c6dc(), iVar3 == 0)) {
      FUN_0800b5ac(in_stack_0000008c,in_stack_00000090,0);
      FUN_0800b570((int)(short)in_stack_0000008c,(int)(short)in_stack_00000090,&stack0x0000007c,
                   (int)&stack0x0000007c + 2);
      if ((*DAT_08024e2c & 1) != 0) {
        if (in_stack_000000b8 == 2) {
          FUN_08007378(sStack0000007c + 0x10,(int)sStack0000007e,2,in_stack_00000078);
        }
        else {
          if (in_stack_000000b8 == 6) {
            iVar3 = sStack0000007c + -0x10;
            iVar2 = 6;
          }
          else {
            iVar3 = (int)sStack0000007c;
          }
          FUN_08007378(iVar3,(int)sStack0000007e,iVar2,in_stack_00000078);
        }
      }
    }
    FUN_080003f0();
    if ((*(ushort *)(*DAT_08024ea8 + 4) >> 4 & 1) == 0) {
      FUN_08024696();
    }
  }
  else {
    *(uint *)(*DAT_08024d78 + 0x40) = (uint)*(ushort *)(in_stack_00000084 + 4);
    if (((*(short *)(DAT_08024d7c + 0x8c) == 10) && (*(short *)(DAT_08024d7c + 0x90) == 0x10)) &&
       (iVar2 = FUN_0800c780(), iVar2 != 0)) {
      *(undefined4 *)(*piVar1 + 0x40) = 0x12;
    }
    while (iVar2 = FUN_08068408(), iVar2 == 0) {
      FUN_080003f0();
    }
  }
  if ((*(ushort *)(*DAT_08024ea8 + 4) >> 3 & 1) != 0) {
    FUN_08059a8c(0x24);
  }
  if (*(ushort *)(in_stack_00000084 + 6) == 0) {
    *(undefined4 *)(*DAT_080256f8 + 0x44) = 0;
  }
  else {
    *(uint *)(*DAT_08025630 + 0x44) = (uint)(*(ushort *)(in_stack_00000084 + 6) >> 8);
  }
  if (in_stack_000000a4 == 0) {
    iVar3 = FUN_080020f4();
    iVar2 = DAT_080256fc;
    FUN_0801e07c(iVar3 * 0x154 + DAT_080256fc,6);
    iVar3 = FUN_080020f4();
    FUN_0801e07c(iVar3 * 0x154 + iVar2,7);
  }
  *(uint *)(unaff_r8 + 0x38) = *(uint *)(unaff_r8 + 0x38) & DAT_08025700;
  piVar1 = DAT_08025704;
  iVar2 = *DAT_08025704;
  while (iVar2 != 0) {
    FUN_080003f0();
    iVar2 = *piVar1;
  }
  FUN_0800c964();
  piVar1 = DAT_080256f8;
  uVar4 = 0;
  do {
    uVar5 = 0;
    uVar6 = uVar4 + 1;
    do {
      *(undefined1 *)(*piVar1 + 0x1c8 + uVar5 + uVar4 * 5) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 5);
    uVar4 = uVar6;
  } while (uVar6 < 0x14);
  FUN_080003f0();
  FUN_0801a23c(0x12,2);
  FUN_08058ae8(3);
  return in_stack_00000100;
}

