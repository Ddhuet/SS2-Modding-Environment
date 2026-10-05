
void FUN_080b4bfc(void)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  ushort *puVar14;
  short *psVar15;
  int unaff_r9;
  uint unaff_r10;
  short sStack00000110;
  short sStack00000112;
  int in_stack_00000124;
  int in_stack_00000128;
  int in_stack_0000012c;
  int in_stack_00000130;
  uint in_stack_00000134;
  uint in_stack_00000138;
  uint in_stack_0000013c;
  int in_stack_00000140;
  uint in_stack_0000014c;
  int in_stack_00000150;
  int in_stack_00000154;
  int in_stack_00000164;
  undefined4 in_stack_00000168;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(short *)(*DAT_080b4c3c + 0xc) == 10) && (in_stack_0000013c == 0)) {
    in_stack_0000013c = 8;
  }
  iVar6 = FUN_0805a1e4();
  piVar13 = DAT_080b4c3c;
  if (iVar6 == 0) {
    FUN_0801c540(*DAT_080b4c3c);
    uVar8 = *(byte *)(*piVar13 + DAT_080b4c40) - 1;
    if (uVar8 < 0x14) {
                    /* WARNING: Could not recover jumptable at 0x080b4c3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar8 * 4 + DAT_080b4c44))();
      return;
    }
  }
  if (in_stack_00000164 == 0) {
    piVar13 = DAT_080b5244;
    if ((uint)(int)*(short *)(*DAT_080b5244 + 8) < 8) {
                    /* WARNING: Could not recover jumptable at 0x080b5240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(short *)(*DAT_080b5244 + 8) * 4 + DAT_080b5250))();
      return;
    }
    goto LAB_080b5350;
  }
  if (*DAT_080b52a0 < 8) {
                    /* WARNING: Could not recover jumptable at 0x080b529c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*DAT_080b52a0 * 4 + DAT_080b52a4))();
    return;
  }
  if (unaff_r10 == 1) {
    iVar12 = *DAT_080b5330;
    iVar7 = *DAT_080b5334;
    iVar6 = 0x580;
    piVar10 = DAT_080b5334;
    piVar13 = DAT_080b5330;
LAB_080b5342:
    *(int *)(iVar12 + 0x14) = iVar7 + iVar6;
    *(int *)(iVar12 + 0x18) = piVar10[1] + DAT_080b5370;
  }
  else if ((int)unaff_r10 < 2) {
    piVar13 = DAT_080b52f0;
    if (unaff_r10 == 0) {
      iVar12 = *DAT_080b5318;
      iVar7 = *DAT_080b531c;
      piVar10 = DAT_080b531c;
      piVar13 = DAT_080b5318;
      iVar6 = 0x580;
      goto LAB_080b5342;
    }
  }
  else if ((unaff_r10 == 2) || (piVar13 = DAT_080b5304, unaff_r10 == 3)) {
    iVar12 = *DAT_080b5364;
    iVar7 = *DAT_080b5368;
    piVar10 = DAT_080b5368;
    piVar13 = DAT_080b5364;
    iVar6 = DAT_080b536c;
    goto LAB_080b5342;
  }
LAB_080b5350:
  iVar6 = *piVar13;
  uVar2 = *(ushort *)(iVar6 + 0xc);
  uVar3 = (ushort)unaff_r10;
  if (uVar2 == 1) {
    unaff_r9 = 0;
    in_stack_00000140 = 1;
    *(ushort *)(iVar6 + 0x68) = uVar3 + 4;
LAB_080b540c:
    iVar6 = *DAT_080b543c;
    if (in_stack_00000134 != *(ushort *)(iVar6 + 0x68)) {
      in_stack_00000134 = (uint)*(ushort *)(iVar6 + 0x68);
      *(undefined2 *)(iVar6 + 0x6c) = 0;
      *(undefined2 *)(iVar6 + 0x6a) = 0;
    }
  }
  else {
    if (uVar2 < 2) {
      if (uVar2 == 0) {
        unaff_r9 = 0;
        in_stack_00000140 = 1;
        *(ushort *)(iVar6 + 0x68) = uVar3;
      }
      goto LAB_080b540c;
    }
    if (uVar2 != 2) goto LAB_080b540c;
    in_stack_00000140 = 0;
    puVar14 = (ushort *)(iVar6 + 0x68);
    *puVar14 = uVar3;
    cVar1 = *(char *)(iVar6 + DAT_080b53dc);
    if (((cVar1 == '\x11') || (cVar1 == '\v')) || (cVar1 == '\x12')) {
      iVar6 = *piVar13;
      psVar15 = (short *)(iVar6 + 0x68);
      sVar5 = *psVar15;
      *psVar15 = sVar5 * 2;
      if (*(char *)(iVar6 + DAT_080b53dc) == '\v') {
        *psVar15 = sVar5 * 2 + 1;
      }
      goto LAB_080b540c;
    }
    if ((cVar1 != '\x03') || (in_stack_00000164 == 0)) goto LAB_080b540c;
    unaff_r9 = 0;
    in_stack_00000140 = 1;
    if (in_stack_00000134 != unaff_r10) {
      *(undefined2 *)(iVar6 + 0x6c) = 0;
      *(undefined2 *)(iVar6 + 0x6a) = 0;
      in_stack_00000134 = (uint)*puVar14;
      *puVar14 = uVar3;
      goto LAB_080b540c;
    }
  }
  if (unaff_r9 < 3) {
    if (unaff_r9 < 1) {
      if (unaff_r9 != 0) goto LAB_080b5452;
      goto LAB_080b5446;
    }
    in_stack_00000150 = unaff_r10 + 4;
  }
  else {
    if (unaff_r9 != 3) goto LAB_080b5452;
LAB_080b5446:
    in_stack_00000150 = unaff_r10 + 8;
  }
LAB_080b5452:
  if (in_stack_00000154 == 0) {
    FUN_08000af0(in_stack_00000130 + 0x10,&stack0x000000f0,1);
  }
  else {
    FUN_08000af0(in_stack_00000130 + 0x10,
                 *(int *)(&stack0x0000001c + unaff_r9 * 0x34) +
                 (uint)*(ushort *)(in_stack_00000124 + DAT_080b5480) * 0x20,1);
  }
  uVar8 = FUN_08098318();
  if ((uVar8 & 1) == 0) {
    FUN_0800b5ac(*(int *)(*DAT_080b54f4 + 0x14) >> 8,*(int *)(*DAT_080b54f4 + 0x18) >> 8,0);
  }
  else {
    FUN_0809830c();
  }
  iVar6 = FUN_0800c6dc();
  piVar10 = DAT_080b55bc;
  piVar13 = DAT_080b54f4;
  if (iVar6 == 0) {
    if (in_stack_00000140 == 0) {
      iVar6 = *DAT_080b54f4;
      uVar4 = FUN_0806599c(&stack0x00000010 + unaff_r9 * 0x34,*(undefined2 *)(iVar6 + 0x68),
                           iVar6 + 0x6a,iVar6 + 0x6c);
      *(undefined2 *)(*piVar13 + 0x6e) = uVar4;
    }
    else {
      iVar6 = *DAT_080b55bc;
      FUN_0806599c(&stack0x00000010 + unaff_r9 * 0x34,*(undefined2 *)(iVar6 + 0x68),iVar6 + 0x6a,
                   iVar6 + 0x6c);
      *(undefined2 *)(*piVar10 + 0x6e) = 0;
    }
  }
  piVar13 = DAT_080b55bc;
  FUN_0800b570((*(int *)(*DAT_080b55bc + 0x14) << 8) >> 0x10,
               (*(int *)(*DAT_080b55bc + 0x18) - in_stack_0000012c) * 0x100 >> 0x10,&stack0x00000110
               ,(int)&stack0x00000110 + 2);
  if (in_stack_0000013c == 0) {
    iVar6 = FUN_0800c61c();
    if (((iVar6 == 0) && (iVar6 = FUN_0800c5e8(), iVar6 == 0)) &&
       (iVar6 = FUN_0800c684(), iVar6 == 0)) {
      iVar6 = *piVar13;
      FUN_08007378((int)sStack00000110,(int)sStack00000112,*(undefined2 *)(iVar6 + 0x68),
                   *(undefined2 *)(iVar6 + 0x6a));
    }
  }
  else {
    uVar8 = in_stack_0000013c - 1 & 0xffff;
    uVar11 = in_stack_0000013c & 1;
    in_stack_0000013c = uVar8;
    if ((((uVar11 != 0) && (iVar6 = FUN_0800c61c(), iVar6 == 0)) &&
        (iVar6 = FUN_0800c5e8(), iVar6 == 0)) && (iVar6 = FUN_0800c684(), iVar6 == 0)) {
      iVar6 = *piVar13;
      FUN_08007378((int)sStack00000110,(int)sStack00000112,*(undefined2 *)(iVar6 + 0x68),
                   *(undefined2 *)(iVar6 + 0x6a));
    }
  }
  iVar6 = FUN_0800c6dc();
  if (((iVar6 == 0) && (iVar6 = FUN_0800c61c(), iVar6 == 0)) &&
     ((iVar6 = FUN_0800c5e8(), iVar6 == 0 &&
      ((iVar6 = FUN_0800c684(), iVar6 == 0 && ((*DAT_080b5708 & 1) != 0)))))) {
    FUN_0800b570((*(int *)(*DAT_080b570c + 0x14) << 8) >> 0x10,
                 (*(int *)(*DAT_080b570c + 0x18) << 8) >> 0x10,&stack0x00000110,
                 (int)&stack0x00000110 + 2);
    iVar6 = FUN_08007378((int)sStack00000110,2,in_stack_00000150,0);
    *(int *)(iVar6 + 0xc) = (int)sStack00000112;
  }
  iVar6 = *(int *)(*DAT_080b570c + 0x4c);
  if ((iVar6 != 0) && (in_stack_00000128 != iVar6)) {
    in_stack_00000138 = 10;
    in_stack_0000014c = 0;
    in_stack_00000128 = iVar6;
  }
  if (in_stack_00000138 == 0) {
    in_stack_00000128 = 0;
    *(undefined4 *)(*DAT_080b5824 + 0x4c) = 0;
  }
  else {
    iVar6 = FUN_0800c5e8();
    if (((iVar6 == 0) && (iVar6 = FUN_0800c61c(), iVar6 == 0)) &&
       (iVar6 = FUN_0800c684(), iVar6 == 0)) {
      FUN_08019c88(*DAT_080b570c,in_stack_00000128,(int)(short)in_stack_0000014c);
    }
    if ((in_stack_00000138 & 2) != 0) {
      in_stack_0000014c = in_stack_0000014c * 0x10000 + DAT_080b5710 >> 0x10;
    }
    in_stack_00000138 = in_stack_00000138 - 1 & 0xffff;
  }
  FUN_080003f0();
  sVar5 = FUN_08019824(*DAT_080b5824);
  if (((sVar5 == 0) && (iVar6 = FUN_0800c4c8(), iVar6 == 0)) && (iVar6 = FUN_08058354(), iVar6 == 0)
     ) {
    FUN_080b4bfc();
  }
  piVar13 = DAT_080b5824;
  puVar14 = (ushort *)*DAT_080b5824;
  *DAT_080b5828 = *DAT_080b5828 & ~(1 << (*puVar14 & 0xff));
  *(undefined1 *)((int)puVar14 + DAT_080b582c) = 0;
  *(undefined1 *)(*piVar13 + DAT_080b5830) = 0;
  iVar6 = *piVar13;
  *(ushort *)(iVar6 + 0x68) = uVar3;
  *(undefined2 *)(iVar6 + 0x6c) = 0;
  *(undefined2 *)(iVar6 + 0x6a) = 0;
  FUN_080682e4(*(undefined2 *)(iVar6 + 2));
  FUN_08059a8c(0xbd);
  FUN_080973e0(*piVar13,&stack0x00000010,*(undefined2 *)(in_stack_00000124 + DAT_080b5834),
               in_stack_00000130);
  iVar6 = FUN_080020f4();
  if (((*(uint *)(iVar6 * 0x154 + DAT_080b5838 + 0x38) & 0x2000) == 0) &&
     (*(short *)(*piVar13 + 0x5a) != 0)) {
    uVar9 = FUN_0801e274(*DAT_080b583c,in_stack_00000124);
    in_stack_0000014c = 0x1d;
    do {
      iVar6 = *DAT_080b5824;
      *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + -0x20;
      FUN_08061e9c(iVar6,uVar9);
      FUN_080003f0();
      uVar8 = in_stack_0000014c * 0x10000 + DAT_080b5840;
      in_stack_0000014c = uVar8 >> 0x10;
    } while ((int)uVar8 >> 0x10 != -1);
    FUN_0801c87c(*DAT_080b583c,uVar9);
  }
  iVar6 = FUN_08002204();
  if (iVar6 != 0) {
    iVar6 = FUN_0805ccc8(*DAT_080b5844,&stack0x000000e0);
    if (iVar6 != 0) {
      while ((iVar6 = FUN_08066a74(*(undefined4 *)(*DAT_080b5878 + 0x14),
                                   *(undefined4 *)(*DAT_080b5878 + 0x18),&stack0x000000e0),
             iVar6 == 0 && (iVar6 = FUN_08058354(), iVar6 == 0))) {
        FUN_080003f0();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x080b5874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

