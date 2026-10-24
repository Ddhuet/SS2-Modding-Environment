
undefined4 FUN_0800a494(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  uint local_2c;
  undefined4 local_28;
  uint *local_24;
  
  iVar4 = DAT_0800a520;
  *(undefined4 *)(DAT_0800a520 + 0x9c) = 1;
  iVar1 = FUN_080020f4();
  iVar1 = iVar1 * 0x154 + DAT_0800a524;
  uVar5 = (*(int *)(iVar1 + 0x94) >> 0xb) - 0xfU & 0xffff;
  uVar9 = (*(int *)(iVar1 + 0x98) >> 0xb) - 0xbU & 0xffff;
  FUN_080003f0();
  FUN_080003f0();
  if ((*(short *)(iVar4 + 0x8c) != 5) || (*(short *)(iVar4 + 0x90) != 0xd)) {
    if (*(short *)(iVar4 + 0x8c) == 10) {
      if ((*(short *)(iVar4 + 0x90) == 3) || (*(short *)(iVar4 + 0x90) == 0xd)) {
        FUN_08008dc4(1,*(undefined4 *)(iVar4 + 0x60),uVar5,0);
        FUN_08008dc4(2,*(undefined4 *)(iVar4 + 0x60),uVar5,0);
      }
      else {
        FUN_08008dc4(1,*(undefined4 *)(iVar4 + 0x60),uVar5,uVar9);
        FUN_08008dc4(2,*(undefined4 *)(iVar4 + 0x60),uVar5,uVar9);
      }
    }
    else {
      FUN_08008dc4(1,*(undefined4 *)(iVar4 + 0x60),uVar5,uVar9);
      FUN_08008dc4(2,*(undefined4 *)(iVar4 + 0x60),uVar5,uVar9);
    }
    FUN_08008dc4(3,*(undefined4 *)(DAT_0800a588 + 0x60),uVar5,uVar9);
  }
  FUN_08009e48(*(undefined2 *)(DAT_0800a588 + 0x8c),0,0);
  puVar2 = (uint *)(DAT_0800a588 + 0x9c);
  local_24 = &local_2c;
  do {
    if (((*puVar2 & 2) != 0) || (iVar4 = FUN_0800c4c8(), iVar4 != 0)) goto LAB_0800a7e2;
    while (iVar3 = FUN_0800c684(), iVar4 = DAT_0800a67c, iVar3 != 0) {
      FUN_080003f0();
    }
    if ((*puVar2 & 0xc) != 0) {
      iVar3 = FUN_0800c6dc();
      if (iVar3 == 0) {
        local_28 = FUN_08059ae4(0);
      }
      FUN_080003f4(DAT_0800a680);
      iVar3 = FUN_080021a8();
      if (iVar3 != 0) {
LAB_0800a7e2:
        *(undefined4 *)(DAT_0800a800 + 0x9c) = 0x80000000;
        return unaff_lr;
      }
      uVar5 = (*(int *)(iVar1 + 0x94) >> 0xb) - 0xf;
      uVar6 = uVar5 & 0xffff;
      uVar9 = (*(int *)(iVar1 + 0x98) >> 0xb) - 0xb;
      uVar10 = uVar9 & 0xffff;
      if ((uVar5 & 0x8000) != 0) {
        uVar6 = 0;
      }
      if ((uVar9 & 0x8000) != 0) {
        uVar10 = 0;
      }
      uVar5 = *(ushort *)(iVar4 + 0x70) - 0x1e;
      if ((int)uVar5 < (int)uVar6) {
        uVar6 = uVar5 & 0xffff;
      }
      if (*(short *)(iVar4 + 0x7e) < 0) {
        *(short *)(iVar4 + 0x7e) = 0;
      }
      uVar5 = *(ushort *)(iVar4 + 0x72) - 0x14;
      if ((int)uVar5 < (int)uVar10) {
        uVar10 = uVar5 & 0xffff;
      }
      psVar8 = (short *)(iVar4 + 0x8c);
      if ((*psVar8 == 5) && (*(short *)(iVar4 + 0x90) == 0xd)) {
        FUN_08000990(1,1);
        FUN_080009f8(0x800,0,1);
        FUN_080009c0(0x1700,0,1);
        local_2c = local_2c & DAT_0800a76c | DAT_0800a770;
        FUN_08000aa8(0,&local_2c);
        *(short *)local_24 = (short)DAT_0800a774;
        FUN_08000aa8(1,&local_2c);
        *(short *)local_24 = (short)DAT_0800a778;
        FUN_08000aa8(2,&local_2c);
        FUN_0800b150(0x2d,0x1d,0x6000000,0,0xf);
        FUN_0800b358(0x2c,0x1e);
        FUN_080003f0();
        FUN_080003f0();
      }
      else {
        FUN_08008c3c(*(undefined4 *)(iVar4 + 0xb0),*psVar8);
        if (*psVar8 == 10) {
          if ((*(short *)(iVar4 + 0x90) == 3) || (*(short *)(iVar4 + 0x90) == 0xd)) {
            FUN_08008dc4(1,*(undefined4 *)(iVar4 + 0x60),uVar6,0);
            FUN_08008dc4(2,*(undefined4 *)(iVar4 + 0x60),uVar6,0);
          }
          else {
            FUN_08008dc4(1,*(undefined4 *)(iVar4 + 0x60),uVar6,uVar10);
            FUN_08008dc4(2,*(undefined4 *)(iVar4 + 0x60),uVar6,uVar10);
          }
        }
        else {
          FUN_08008dc4(1,*(undefined4 *)(iVar4 + 0x60),uVar6,uVar10);
          FUN_08008dc4(2,*(undefined4 *)(iVar4 + 0x60),uVar6,uVar10);
        }
        FUN_08008dc4(3,*(undefined4 *)(DAT_0800a6c8 + 0x60),uVar6,uVar10);
      }
      unaff_r10 = 1;
      *puVar2 = *puVar2 & 0xfffffff3;
      FUN_08009e48(*DAT_0800a77c,local_28,1);
      iVar4 = FUN_0801a720();
      if (iVar4 == 0) {
        FUN_0801a630(0x14);
      }
      else {
        iVar4 = FUN_0801a720();
        if (iVar4 == 2) {
          FUN_0801a78c(6);
        }
        else {
          FUN_0801a74c(6);
        }
      }
    }
    psVar8 = DAT_0800a7fc;
    uVar5 = 1;
    psVar7 = DAT_0800a7fc + -1;
    do {
      FUN_08009090(uVar5 & 0xffff,(int)*psVar7,(int)*psVar8,unaff_r10);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 4);
    unaff_r10 = 0;
    FUN_08009680();
    FUN_080003f0();
    *puVar2 = *puVar2 | 0x40;
  } while( true );
}

