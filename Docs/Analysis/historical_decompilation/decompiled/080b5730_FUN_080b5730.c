
void FUN_080b5730(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort *puVar5;
  undefined2 unaff_r10;
  int in_stack_00000124;
  undefined4 in_stack_00000130;
  uint in_stack_0000014c;
  undefined4 in_stack_00000168;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = FUN_0800c4c8();
  if ((iVar2 == 0) && (iVar2 = FUN_08058354(), iVar2 == 0)) {
    FUN_080b4bfc();
  }
  piVar1 = DAT_080b5824;
  puVar5 = (ushort *)*DAT_080b5824;
  *DAT_080b5828 = *DAT_080b5828 & ~(1 << (*puVar5 & 0xff));
  *(undefined1 *)((int)puVar5 + DAT_080b582c) = 0;
  *(undefined1 *)(*piVar1 + DAT_080b5830) = 0;
  iVar2 = *piVar1;
  *(undefined2 *)(iVar2 + 0x68) = unaff_r10;
  *(undefined2 *)(iVar2 + 0x6c) = 0;
  *(undefined2 *)(iVar2 + 0x6a) = 0;
  FUN_080682e4(*(undefined2 *)(iVar2 + 2));
  FUN_08059a8c(0xbd);
  FUN_080973e0(*piVar1,&stack0x00000010,*(undefined2 *)(in_stack_00000124 + DAT_080b5834),
               in_stack_00000130);
  iVar2 = FUN_080020f4();
  if (((*(uint *)(iVar2 * 0x154 + DAT_080b5838 + 0x38) & 0x2000) == 0) &&
     (*(short *)(*piVar1 + 0x5a) != 0)) {
    uVar3 = FUN_0801e274(*DAT_080b583c,in_stack_00000124);
    in_stack_0000014c = 0x1d;
    do {
      iVar2 = *DAT_080b5824;
      *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + -0x20;
      FUN_08061e9c(iVar2,uVar3);
      FUN_080003f0();
      uVar4 = in_stack_0000014c * 0x10000 + DAT_080b5840;
      in_stack_0000014c = uVar4 >> 0x10;
    } while ((int)uVar4 >> 0x10 != -1);
    FUN_0801c87c(*DAT_080b583c,uVar3);
  }
  iVar2 = FUN_08002204();
  if (iVar2 != 0) {
    iVar2 = FUN_0805ccc8(*DAT_080b5844,&stack0x000000e0);
    if (iVar2 != 0) {
      while ((iVar2 = FUN_08066a74(*(undefined4 *)(*DAT_080b5878 + 0x14),
                                   *(undefined4 *)(*DAT_080b5878 + 0x18),&stack0x000000e0),
             iVar2 == 0 && (iVar2 = FUN_08058354(), iVar2 == 0))) {
        FUN_080003f0();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x080b5874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

