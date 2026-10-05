
void FUN_080afca8(void)

{
  ushort uVar1;
  short sVar2;
  short *psVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  undefined2 *puVar13;
  int *piVar14;
  int unaff_r7;
  undefined2 in_stack_00000010;
  int in_stack_00000018;
  int in_stack_00000020;
  int in_stack_0000002c;
  uint in_stack_00000030;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  uint in_stack_0000004c;
  undefined4 in_stack_00000050;
  int in_stack_00000054;
  int in_stack_0000006c;
  short *in_stack_00000070;
  short *in_stack_00000074;
  ushort *in_stack_00000078;
  undefined2 *in_stack_0000007c;
  undefined2 *in_stack_00000080;
  
  FUN_0802056c(unaff_r7);
  FUN_080003f0();
  if ((*(short *)(unaff_r7 + 0xc) == 10) && (in_stack_0000003c == 0)) {
    in_stack_0000003c = 8;
    pcVar10 = (char *)(in_stack_00000018 * 0xac + (uint)*(ushort *)(unaff_r7 + 0x58) +
                      DAT_080afd08 + 0xa0);
    *pcVar10 = *pcVar10 + '\x01';
  }
  iVar6 = FUN_0805a1e4();
  if (iVar6 == 0) {
    FUN_0801c540(unaff_r7);
    uVar7 = *(byte *)(unaff_r7 + DAT_080afd0c) - 1;
    if (uVar7 < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x080afd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar7 * 4 + DAT_080afd10))();
      return;
    }
  }
  if (in_stack_0000002c == 1) {
    in_stack_00000054 = 0;
    *in_stack_00000078 = *(short *)(unaff_r7 + 8) + 8;
    in_stack_00000050 = 1;
  }
  else if (in_stack_0000002c < 2) {
    if (in_stack_0000002c == 0) {
      in_stack_00000054 = 0;
      *in_stack_00000078 = *(ushort *)(unaff_r7 + 8);
      in_stack_00000050 = 1;
    }
  }
  else if (in_stack_0000002c == 2) {
    in_stack_00000054 = 1;
    *in_stack_00000078 = *(ushort *)(unaff_r7 + 8);
    in_stack_00000050 = 0;
  }
  else if (in_stack_0000002c == 9) {
    in_stack_00000054 = 2;
    in_stack_00000050 = 0;
  }
  if (in_stack_00000030 != *in_stack_00000078) {
    in_stack_00000030 = (uint)*in_stack_00000078;
    *in_stack_00000080 = 0;
    *in_stack_0000007c = 0;
  }
  uVar7 = FUN_08098318();
  if ((uVar7 & 1) == 0) {
    FUN_0800b5ac(*(int *)(unaff_r7 + 0x14) >> 8,*(int *)(unaff_r7 + 0x18) >> 8,0);
  }
  else {
    FUN_0809830c();
  }
  iVar6 = FUN_0800c6dc();
  if (iVar6 == 0) {
    if ((*(char *)(unaff_r7 + DAT_080b0268) == '\v') || (*(char *)(unaff_r7 + DAT_080b0268) == '\t')
       ) {
      iVar6 = in_stack_00000018 * 0xac + DAT_080b026c + in_stack_00000054 * 0x34;
      uVar1 = *in_stack_00000078;
      puVar13 = &stack0x00000010;
    }
    else {
      iVar6 = in_stack_00000018 * 0xac + DAT_080b0340 + in_stack_00000054 * 0x34;
      uVar1 = *in_stack_00000078;
      puVar13 = in_stack_0000007c;
    }
    uVar4 = FUN_0806599c(iVar6,uVar1,puVar13,in_stack_00000080);
    *(undefined2 *)(unaff_r7 + 0x6e) = uVar4;
  }
  FUN_0800b570((*(int *)(unaff_r7 + 0x14) << 8) >> 0x10,(*(int *)(unaff_r7 + 0x18) << 8) >> 0x10,
               in_stack_00000070,in_stack_00000074);
  if (in_stack_0000003c == 0) {
    iVar6 = FUN_0800c61c();
    if (((iVar6 != 0) || (iVar6 = FUN_0800c5e8(), iVar6 != 0)) ||
       (iVar6 = FUN_0800c684(), iVar6 != 0)) goto LAB_080b043c;
    iVar6 = in_stack_00000018 * 0xac + DAT_080b03fc;
    FUN_08000af0(*(ushort *)(iVar6 + 0xa6) + 0x10,
                 *(int *)(in_stack_00000054 * 0x34 + in_stack_00000018 * 0xac + DAT_080b03fc + 0x10)
                 + (uint)*(ushort *)(iVar6 + 0xa8) * 0x20,1);
    if ((*(char *)(unaff_r7 + DAT_080b0400) != '\v') && (*(char *)(unaff_r7 + DAT_080b0400) != '\t')
       ) {
      FUN_08007378((int)*in_stack_00000070,(int)*in_stack_00000074,*in_stack_00000078,
                   *in_stack_0000007c);
      goto LAB_080b043c;
    }
    sVar5 = *in_stack_00000070;
    sVar2 = *in_stack_00000074;
LAB_080b03ce:
    uVar1 = *in_stack_00000078;
    uVar4 = in_stack_00000010;
  }
  else {
    uVar7 = in_stack_0000003c - 1 & 0xffff;
    uVar11 = in_stack_0000003c & 1;
    in_stack_0000003c = uVar7;
    if (((uVar11 == 0) || (iVar6 = FUN_0800c61c(), iVar6 != 0)) ||
       ((iVar6 = FUN_0800c5e8(), iVar6 != 0 || (iVar6 = FUN_0800c684(), iVar6 != 0))))
    goto LAB_080b043c;
    iVar6 = in_stack_00000018 * 0xac + DAT_080b0344;
    FUN_08000af0(*(ushort *)(iVar6 + 0xa6) + 0x10,
                 *(int *)(in_stack_00000054 * 0x34 + in_stack_00000018 * 0xac + DAT_080b0344 + 0x10)
                 + (uint)*(ushort *)(iVar6 + 0xa8) * 0x20,1);
    if ((*(char *)(unaff_r7 + DAT_080b0348) == '\v') || (*(char *)(unaff_r7 + DAT_080b0348) == '\t')
       ) {
      sVar5 = *in_stack_00000070;
      sVar2 = *in_stack_00000074;
      goto LAB_080b03ce;
    }
    sVar5 = *in_stack_00000070;
    sVar2 = *in_stack_00000074;
    uVar1 = *in_stack_00000078;
    uVar4 = *in_stack_0000007c;
  }
  FUN_08007378((int)sVar5,(int)sVar2,uVar1,uVar4);
LAB_080b043c:
  iVar6 = *(int *)(unaff_r7 + 0x4c);
  if ((iVar6 != 0) && (in_stack_00000020 != iVar6)) {
    in_stack_00000040 = 10;
    in_stack_0000004c = 0;
    in_stack_00000020 = iVar6;
  }
  if (in_stack_00000040 == 0) {
    in_stack_00000020 = 0;
    *(undefined4 *)(unaff_r7 + 0x4c) = 0;
  }
  else {
    iVar6 = FUN_0800c5e8();
    if (((iVar6 == 0) && (iVar6 = FUN_0800c61c(), iVar6 == 0)) &&
       (iVar6 = FUN_0800c684(), iVar6 == 0)) {
      FUN_08019c88(unaff_r7,in_stack_00000020,(int)(short)in_stack_0000004c);
    }
    if ((in_stack_00000040 & 2) != 0) {
      in_stack_0000004c = in_stack_0000004c * 0x10000 + DAT_080b04a0 >> 0x10;
    }
    in_stack_00000040 = in_stack_00000040 - 1 & 0xffff;
  }
  sVar5 = FUN_08019824(unaff_r7);
  if (sVar5 == 0) {
    FUN_080afca8();
  }
  FUN_080003f0();
  iVar6 = DAT_080b0534;
  iVar8 = in_stack_00000018 * 0xac;
  piVar14 = (int *)(iVar8 + DAT_080b0534);
  FUN_080682e4(*(undefined2 *)(*piVar14 + 2));
  iVar9 = FUN_0800048c();
  psVar3 = in_stack_00000070;
  iVar12 = *(int *)(iVar9 + 8) + -0x44;
  *(int *)(iVar9 + 8) = iVar12;
  *DAT_080b0538 = *DAT_080b0538 & ~(1 << (**(ushort **)(iVar12 * 0xac + iVar6) & 0xff));
  in_stack_00000054 = 0;
  *(undefined2 *)(*piVar14 + 0x68) = 0x18;
  *in_stack_00000080 = 0;
  *in_stack_0000007c = 0;
  in_stack_00000050 = 0;
  iVar6 = DAT_080b053c + iVar8;
  in_stack_0000006c = iVar6 + 0x1c;
  do {
    uVar7 = FUN_08098318();
    if ((uVar7 & 1) == 0) {
      FUN_0800b5ac(*(int *)(unaff_r7 + 0x14) >> 8,*(int *)(unaff_r7 + 0x18) >> 8,0);
    }
    else {
      FUN_0809830c();
    }
    iVar9 = FUN_0800c6dc();
    if (iVar9 == 0) {
      uVar4 = FUN_0806599c(iVar6,*in_stack_00000078,in_stack_0000007c,in_stack_00000080);
      *(undefined2 *)(unaff_r7 + 0x6e) = uVar4;
    }
    iVar9 = FUN_0800c61c();
    if (((iVar9 == 0) && (iVar9 = FUN_0800c5e8(), iVar9 == 0)) &&
       ((iVar9 = FUN_0800c684(), iVar9 == 0 &&
        (uVar7 = in_stack_0000003c - 1 & 0xffff, uVar11 = in_stack_0000003c & 1,
        in_stack_0000003c = uVar7, uVar11 != 0)))) {
      FUN_0800b570((*(int *)(unaff_r7 + 0x14) << 8) >> 0x10,(*(int *)(unaff_r7 + 0x18) << 8) >> 0x10
                   ,psVar3,in_stack_00000074);
      FUN_08000af0(*(ushort *)(iVar8 + DAT_080b0618 + 0xa6) + 0x10,
                   *(int *)(iVar8 + DAT_080b0618 + 0x10) +
                   (uint)*(ushort *)(iVar8 + DAT_080b0618 + 0xa8) * 0x20,1);
      FUN_08007378((int)*psVar3,(int)*in_stack_00000074,*in_stack_00000078,*in_stack_0000007c);
    }
    FUN_080003f0();
  } while( true );
}

