
undefined4 FUN_08093890(char param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  
  iVar5 = DAT_08093918;
  iVar8 = DAT_08093918 + -0x20;
  puVar15 = (undefined4 *)(&stack0xffffffe0 + DAT_08093918);
  iVar12 = DAT_08093918 + -0x20;
  iVar4 = DAT_08093918 + -0x20;
  puVar16 = (undefined4 *)(&stack0xffffffe0 + DAT_08093918);
  puVar17 = (undefined4 *)(&stack0xffffffe0 + DAT_08093918);
  puVar18 = (undefined4 *)(&stack0xffffffe0 + DAT_08093918);
  puVar19 = (undefined4 *)(&stack0xffffffe0 + DAT_08093918);
  puVar20 = (undefined4 *)(&stack0xffffffe0 + DAT_08093918);
  puVar21 = (undefined4 *)(&stack0xffffffe0 + DAT_08093918);
  uVar7 = ((int)param_1 & 0x3fU) * 4;
  *(uint *)(&stack0x00000238 + DAT_08093918) = uVar7;
  if (0x14 < uVar7) {
    *(undefined4 *)(&stack0x00000238 + DAT_08093918) = 0x14;
  }
  *(uint *)(&stack0x0000022c + DAT_08093918) =
       *(int *)(&stack0x00000238 + DAT_08093918) * ((int)param_1 + 1U & 0xffff) & 0xffff;
  *(undefined4 *)(&stack0x00000228 + DAT_08093918) = 0;
  iVar13 = param_2 * 0x1000000 + -0x1000000 >> 0x18;
  *(undefined4 *)(&stack0xffffffe0 + DAT_08093918) = 1;
  FUN_08065784(&stack0x00000188 + DAT_08093918,iVar13 + DAT_0809391c,7,0xffffffff);
  (&stack0xffffffe0)[DAT_08093920 + iVar5] = (&stack0x00000228)[iVar5];
  *puVar15 = 1;
  FUN_08065784(&stack0x000001bc + iVar5,DAT_08093924,8,0xffffffff);
  (&stack0x000001e0)[iVar5] = 1;
  if (iVar13 == 1) {
    *(undefined4 *)(&stack0x00000214 + iVar5) = 0x8000;
    *(undefined4 *)(&stack0x00000218 + iVar5) = 0x12000;
    *(undefined4 *)(&stack0x0000021c + iVar5) = 0x5a00;
  }
  else if (iVar13 < 2) {
    if (iVar13 == 0) {
      *(undefined4 *)(&stack0x00000214 + iVar5) = 0x8800;
      *(undefined4 *)(&stack0x00000218 + iVar5) = 0x12000;
      *(undefined4 *)(&stack0x0000021c + iVar5) = 0x6800;
    }
  }
  else if (iVar13 == 2) {
    *(undefined4 *)(&stack0x00000214 + iVar5) = 0x7800;
    *(undefined4 *)(&stack0x00000218 + iVar5) = 0x12000;
    *(undefined4 *)(&stack0x0000021c + iVar5) = 0x5000;
  }
  else if (iVar13 == 3) {
    *(undefined4 *)(&stack0x00000214 + iVar5) = 0x8000;
    *(undefined4 *)(&stack0x00000218 + iVar5) = 0x12000;
    *(undefined4 *)(&stack0x0000021c + iVar5) = 0x5800;
  }
  *(undefined4 *)(&stack0x00000230 + iVar5) = 0x10;
  *(undefined4 *)(&stack0x00000234 + iVar5) = 0;
  *(undefined2 *)(&stack0x00000210 + iVar5) = 0;
  *(undefined2 *)(&stack0xffffffe0 + DAT_080939f8 + iVar5) =
       *(undefined2 *)(&stack0x00000234 + iVar5);
  uVar7 = 0;
  *(undefined1 **)(&stack0x0000023c + iVar5) = &stack0xfffffffc + iVar5;
  do {
    iVar11 = uVar7 * 0x14 + iVar12;
    *(undefined2 *)(&stack0x00000006 + iVar11 + 0x20) = 0;
    *(undefined2 *)(&stack0x00000004 + iVar11 + 0x20) = 0;
    (&stack0x00000008)[iVar11 + 0x20] = 0;
    iVar13 = FUN_0800086c();
    iVar10 = (iVar13 << 0x10) >> 0x10;
    iVar13 = (iVar10 + (iVar10 - ((iVar13 << 0x10) >> 0x1f) >> 1) * -2) * 0x10000 >> 0x10;
    if (iVar13 < 0) {
      iVar13 = -iVar13;
    }
    (&stack0x0000000a)[iVar11 + 0x20] = (char)iVar13 + '\x01';
    sVar6 = FUN_0800086c();
    sVar6 = FUN_080ba93c((int)sVar6,0xc);
    iVar13 = (int)sVar6;
    if (iVar13 < 0) {
      iVar13 = -iVar13;
    }
    (&stack0x00000009)[iVar11 + 0x20] = (char)iVar13;
    if ((&stack0x0000000a)[iVar11 + 0x20] == '\x01') {
      *(undefined4 *)(&stack0xfffffff8 + iVar11 + 0x20) = 0;
    }
    else {
      *(undefined4 *)(&stack0xfffffff8 + iVar11 + 0x20) = 0xf000;
    }
    sVar6 = FUN_0800086c();
    iVar11 = *(int *)(&stack0x0000023c + iVar5);
    sVar6 = FUN_080ba93c((int)sVar6,0x8c);
    iVar13 = (int)sVar6;
    if (iVar13 < 0) {
      iVar13 = -iVar13;
    }
    *(int *)(iVar11 + uVar7 * 0x14) = (iVar13 + 0x10) * 0x100;
    sVar6 = FUN_0800086c();
    iVar13 = uVar7 * 0x14 + iVar8;
    sVar6 = FUN_080ba93c((int)sVar6,0x14);
    if (sVar6 < 0) {
      sVar6 = -sVar6;
    }
    *(short *)(&stack0x00000000 + iVar13 + 0x20) = (sVar6 + 10) * 0x20;
    sVar6 = FUN_0800086c();
    iVar10 = (int)sVar6;
    iVar11 = iVar10;
    if (iVar10 < 0) {
      iVar11 = iVar10 + 3;
    }
    iVar11 = (iVar10 + (iVar11 >> 2) * -4) * 0x10000 >> 0x10;
    if (iVar11 < 0) {
      iVar11 = -iVar11;
    }
    *(short *)(&stack0x00000002 + iVar13 + 0x20) = (short)(iVar11 << 3);
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 0x14);
  FUN_08098284(&stack0x000001f0 + iVar5,*(int *)(&stack0x00000194 + iVar5) + 0xe0);
  FUN_08097210(&stack0x000001f0 + iVar5,0x1f);
  *(undefined4 *)(&stack0x00000220 + iVar5) = 0;
  *(undefined4 *)(&stack0x00000224 + iVar5) = 0;
  uVar7 = 5;
  FUN_0801a74c(6);
  while (iVar8 = FUN_0801a6dc(), iVar8 == 0) {
    FUN_080003f0();
  }
  do {
    if (uVar7 - 1 < 5) {
                    /* WARNING: Could not recover jumptable at 0x08093ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (**(code **)((uVar7 - 1) * 4 + DAT_08093ac4))();
      return uVar9;
    }
    if (uVar7 == 2) {
      FUN_08000af0(0x11,*(int *)(&stack0x000001c8 + iVar5) + 0x100,1);
      iVar8 = DAT_08093dfc;
      uVar14 = 0;
      if (*(int *)(&stack0x00000238 + iVar5) != 0) {
        do {
          iVar12 = uVar14 * 0x14 + iVar4;
          *puVar16 = 1;
          FUN_0806599c(&stack0x000001bc + iVar5,0,&stack0x00000004 + iVar12 + 0x20,
                       &stack0x00000006 + iVar12 + 0x20);
          if ((*DAT_08093e00 & 1) != 0) {
            sVar6 = *(short *)(((byte)(&stack0x00000008)[iVar12 + 0x20] + 0x40) * 2 + iVar8);
            bVar1 = (&stack0x00000009)[iVar12 + 0x20];
            iVar13 = *(int *)(&stack0xfffffff8 + iVar12 + 0x20);
            sVar3 = *(short *)((uint)(byte)(&stack0x00000008)[iVar12 + 0x20] * 2 + iVar8);
            iVar11 = *(int *)(*(int *)(&stack0x0000023c + iVar5) + uVar14 * 0x14);
            uVar2 = *(undefined2 *)(&stack0x00000004 + iVar12 + 0x20);
            *puVar17 = 0;
            *(undefined1 **)(&stack0xffffffe4 + iVar5) = &stack0x000001d8 + iVar5;
            *(undefined4 *)(&stack0xffffffe8 + iVar5) = *(undefined4 *)(&stack0x000001c4 + iVar5);
            *(undefined4 *)(&stack0xffffffec + iVar5) = *(undefined4 *)(&stack0x000001bc + iVar5);
            FUN_08007378((int)(iVar13 + (uint)bVar1 * (int)sVar6) >> 8,
                         (int)(iVar11 + (uint)bVar1 * (int)sVar3) >> 8,0,uVar2);
          }
          (&stack0x00000008)[iVar12 + 0x20] = (&stack0x00000008)[iVar12 + 0x20] + '\x02';
          uVar14 = uVar14 + 1 & 0xff;
        } while (uVar14 < *(uint *)(&stack0x00000238 + iVar5));
      }
    }
    if (2 < uVar7) {
      *puVar18 = 0x10;
      *(undefined4 *)(&stack0xffffffe4 + iVar5) = 0;
      FUN_08008b40(0x10,0x23,0,*(undefined4 *)(&stack0x00000230 + iVar5));
      if (uVar7 == 4) {
        FUN_08000af0(0x10,&stack0x000001f0 + iVar5,1);
      }
      else {
        FUN_08000af0(0x10,*(int *)(&stack0x00000194 + iVar5) + 0xe0,1);
      }
      *puVar19 = 1;
      FUN_0806599c(&stack0x00000188 + iVar5,0,&stack0x00000210 + iVar5,
                   &stack0xffffffe0 + DAT_08093e70 + iVar5);
      iVar8 = *(int *)(&stack0x00000214 + iVar5);
      iVar12 = *(int *)(&stack0x00000218 + iVar5);
      uVar2 = *(undefined2 *)(&stack0x00000210 + iVar5);
      *puVar20 = 1;
      *(undefined4 *)(&stack0xffffffe4 + iVar5) = 0;
      *(undefined4 *)(&stack0xffffffe8 + iVar5) = *(undefined4 *)(&stack0x00000234 + iVar5);
      *(undefined1 **)(&stack0xffffffec + iVar5) = &stack0x000001a4 + iVar5;
      *(undefined4 *)(&stack0xfffffff0 + iVar5) = *(undefined4 *)(&stack0x00000190 + iVar5);
      *(undefined4 *)(&stack0xfffffff4 + iVar5) = *(undefined4 *)(&stack0x00000188 + iVar5);
      FUN_0800747c(iVar8 >> 8,iVar12 >> 8,0,uVar2);
    }
    FUN_080003f0();
    iVar8 = FUN_080021a8();
    if (iVar8 == 1) {
      uVar7 = 0;
    }
  } while (uVar7 != 0);
  FUN_0801a7e4(6);
  while (iVar8 = FUN_0801a6dc(), iVar8 == 0) {
    FUN_080003f0();
  }
  FUN_08059b00(3);
  FUN_0800c568();
  FUN_0800c5b8();
  FUN_0809833c();
  *puVar21 = 0;
  *(undefined4 *)(&stack0xffffffe4 + iVar5) = 0;
  FUN_08008b40(0,0,0,0);
  return *(undefined4 *)(&stack0x0000025c + iVar5);
}

