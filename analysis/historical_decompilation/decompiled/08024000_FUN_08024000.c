
undefined4 FUN_08024000(undefined4 param_1,undefined4 param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  short *unaff_r4;
  uint unaff_r5;
  undefined4 in_stack_0000000c;
  
  sVar1 = *unaff_r4;
  sVar2 = *unaff_r4;
  while( true ) {
    if (sVar2 == 0) {
      return in_stack_0000000c;
    }
    uVar3 = (uint)*(ushort *)(*param_3 + 10);
    if (sVar1 != 0) {
      *(short **)(*param_3 + DAT_08024050 + uVar3 * 4) = unaff_r4;
      FUN_08023df0(unaff_r4,uVar3);
      *(short *)(*param_3 + 10) = *(short *)(*param_3 + 10) + 1;
    }
    unaff_r5 = unaff_r5 + 1;
    unaff_r4 = unaff_r4 + 0x1c;
    if (0x1f < unaff_r5) break;
    sVar1 = *unaff_r4;
    sVar2 = *unaff_r4;
  }
  return in_stack_0000000c;
}

