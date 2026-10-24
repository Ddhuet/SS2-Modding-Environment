
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0893bc20 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_08279510(int param_1,uint param_2,uint param_3,uint *param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  short *psVar9;
  short *psVar10;
  undefined1 *extraout_r2;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 *unaff_r4;
  uint unaff_r5;
  undefined1 *unaff_r6;
  undefined1 *puVar13;
  uint unaff_r7;
  uint unaff_r8;
  uint uVar14;
  uint unaff_r9;
  undefined4 unaff_r10;
  uint unaff_r11;
  undefined1 extraout_r12;
  uint uVar15;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined4 in_cr0;
  undefined4 in_cr7;
  undefined4 in_cr13;
  undefined8 uVar19;
  
  puVar11 = param_4;
  if (in_NG != in_OV) {
    puVar11 = (uint *)((int)param_4 + 0x5b9);
    unaff_r11 = *param_4;
  }
  uVar15 = (uint)*(ushort *)(param_1 + 0x29);
  if (!in_CY) {
    uVar19 = func_0x092085f8();
    puVar11 = (uint *)((ulonglong)uVar19 >> 0x20);
    iVar3 = (int)uVar19;
    puVar13 = extraout_r2;
    if (in_CY) {
      puVar13 = unaff_r6;
    }
    if (in_ZR) {
      software_interrupt(0x14171b);
    }
    coprocessor_loadlong(2,in_cr0,unaff_r8 + 0x28);
    if (!in_ZR && in_NG == in_OV) {
      coprocessor_storelong(7,in_cr13,0x8279534);
    }
    coprocessor_loadlong(4,in_cr13,0x8279538);
    if (!in_ZR) {
      software_interrupt(0x160afb);
      *(BADSPACEBASE **)iVar3 = register0x00000054;
      *(undefined4 *)(iVar3 + -4) = unaff_r10;
      *(uint *)(iVar3 + -8) = unaff_r5;
      *(undefined1 **)(iVar3 + -0xc) = puVar13;
    }
    uVar4 = *unaff_r4;
    uVar15 = unaff_r4[1];
    uVar12 = unaff_r4[2];
    uVar14 = unaff_r4[3];
    puVar13 = unaff_r6;
    if (!in_ZR && in_NG == in_OV) {
      coprocessor_loadlong(6,in_cr13,uVar4);
      puVar13 = unaff_r6 + ((int)unaff_r9 >> 0xf);
      *unaff_r6 = extraout_r12;
    }
    if (!in_CY) {
      *puVar11 = unaff_r11;
      puVar11[-1] = unaff_r9;
      puVar11[-2] = uVar14;
      puVar11[-3] = unaff_r7;
      puVar11[-4] = (uint)puVar13;
      puVar11[-5] = unaff_r5;
      puVar11[-6] = (uint)(unaff_r4 + 4);
      puVar11[-7] = uVar15;
      puVar11[-8] = (uint)puVar11;
      puVar11 = puVar11 + -9;
    }
    if (!(bool)in_OV) {
      func_0x09ed1a90(uVar4,puVar11,uVar15,uVar12);
    }
    if ((bool)in_OV) {
      coprocessor_loadlong(0xe,in_cr7,unaff_r7);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR) {
    uVar14 = 0;
    bVar16 = true;
    bVar18 = true;
  }
  else {
    bVar18 = SUB41((unaff_r8 << 0x1f) >> 0x1f,0);
    uVar14 = ~(unaff_r8 >> 1 | unaff_r8 << 0x1f);
    bVar16 = uVar14 == 0;
  }
  if (bVar18 && !bVar16) {
    bVar18 = SUB41((unaff_r8 << 0x1f) >> 0x1f,0);
    uVar14 = ~(unaff_r8 >> 1 | unaff_r8 << 0x1f);
    bVar16 = uVar14 == 0;
  }
  if (bVar16) {
    uVar14 = uVar14 & uVar14 << (uVar14 & 0xff);
  }
  if (bVar18 && !bVar16) {
    bVar18 = SUB41((unaff_r8 << 0x1f) >> 0x1f,0);
    uVar14 = ~(unaff_r8 >> 1 | unaff_r8 << 0x1f);
    bVar16 = uVar14 == 0;
  }
  if (bVar16) {
    uVar14 = 0;
  }
  bVar17 = false;
  if (bVar16) {
    uVar14 = unaff_r11 ^ (uint)unaff_r4 & param_2;
    bVar17 = uVar14 == 0;
  }
  bVar16 = false;
  if (bVar17) {
    uVar14 = (uint)unaff_r4 ^ (uint)unaff_r4 & param_2;
    bVar16 = uVar14 == 0;
  }
  if (bVar16) {
    uVar14 = 0;
  }
  if (bVar18 && !bVar16) {
    bVar18 = SUB41((unaff_r11 << 0x1f) >> 0x1f,0);
    uVar14 = ~(unaff_r11 >> 1 | unaff_r11 << 0x1f);
    bVar16 = uVar14 == 0;
  }
  if (bVar18 && !bVar16) {
    bVar18 = SUB41((unaff_r11 << 0x1f) >> 0x1f,0);
    uVar14 = ~(unaff_r11 >> 1 | unaff_r11 << 0x1f);
    bVar16 = uVar14 == 0;
  }
  if (bVar16) {
    uVar14 = uVar14 & uVar14 << (uVar14 & 0xff);
  }
  if (bVar18 && !bVar16) {
    bVar18 = SUB41((unaff_r11 << 0x1f) >> 0x1f,0);
    uVar14 = ~(unaff_r11 >> 1 | unaff_r11 << 0x1f);
    bVar16 = uVar14 == 0;
  }
  if (bVar16) {
    uVar14 = 0;
  }
  if (bVar18 && !bVar16) {
    bVar18 = SUB41((unaff_r11 << 0x1f) >> 0x1f,0);
    uVar14 = ~(unaff_r11 >> 1 | unaff_r11 << 0x1f);
    bVar16 = uVar14 == 0;
  }
  if (bVar16) {
    uVar14 = 0;
  }
  if (bVar18 && !bVar16) {
    bVar18 = SUB41((uint)((int)puVar11 << 0x1f) >> 0x1f,0);
    uVar14 = ~((uint)puVar11 >> 1 | (int)puVar11 << 0x1f);
    bVar16 = uVar14 == 0;
  }
  if (bVar18 && !bVar16) {
    bVar18 = SUB41((uint)((int)puVar11 << 0x1f) >> 0x1f,0);
    uVar14 = ~((uint)puVar11 >> 1 | (int)puVar11 << 0x1f);
    bVar16 = uVar14 == 0;
  }
  if (bVar16) {
    uVar14 = uVar14 & uVar14 << (uVar14 & 0xff);
  }
  if (bVar18 && !bVar16) {
    bVar18 = SUB41((uint)((int)puVar11 << 0x1f) >> 0x1f,0);
    uVar14 = ~((uint)puVar11 >> 1 | (int)puVar11 << 0x1f);
    bVar16 = uVar14 == 0;
  }
  if (bVar16) {
    uVar14 = 0;
  }
  if (bVar18 && !bVar16) {
    bVar18 = SUB41((uint)((int)puVar11 << 0x1f) >> 0x1f,0);
    uVar14 = ~((uint)puVar11 >> 1 | (int)puVar11 << 0x1f);
    bVar16 = uVar14 == 0;
  }
  if (bVar16) {
    uVar14 = (uint)puVar11 & param_3 & uVar15;
    uVar14 = param_2 & uVar14 & (uint)unaff_r4 >> (uVar14 & 0xff);
    uVar14 = uVar14 & unaff_r8 << (uVar14 & 0xff);
    uVar14 = param_2 & uVar14 & unaff_r8 << (uVar14 & 0xff);
    uVar14 = uVar14 & (int)unaff_r4 << (uVar14 & 0xff);
    uVar14 = uVar14 & (int)unaff_r4 << (uVar14 & 0xff);
  }
  if (bVar18 && !bVar16) {
    bVar18 = SUB41((unaff_r8 << 0x1f) >> 0x1f,0);
    uVar14 = ~(unaff_r8 >> 1 | unaff_r8 << 0x1f);
    bVar16 = uVar14 == 0;
  }
  if (bVar18 && !bVar16) {
    bVar18 = SUB41((unaff_r8 << 0x1f) >> 0x1f,0);
    uVar14 = ~(unaff_r8 >> 1 | unaff_r8 << 0x1f);
    bVar16 = uVar14 == 0;
  }
  if (bVar16) {
    uVar14 = 0;
  }
  if (bVar18 && !bVar16) {
    bVar18 = SUB41((uint)((int)puVar11 << 0x1f) >> 0x1f,0);
    uVar14 = ~((uint)puVar11 >> 1 | (int)puVar11 << 0x1f);
    bVar16 = uVar14 == 0;
  }
  if (bVar18 && !bVar16) {
    bVar18 = SUB41((uint)((int)puVar11 << 0x1f) >> 0x1f,0);
    uVar14 = ~((uint)puVar11 >> 1 | (int)puVar11 << 0x1f);
    bVar16 = uVar14 == 0;
  }
  if (bVar16) {
    uVar14 = uVar14 & uVar14 << (uVar14 & 0xff);
  }
  if (bVar18 && !bVar16) {
    uVar14 = ~((uint)puVar11 >> 1 | (int)puVar11 << 0x1f);
    bVar16 = uVar14 == 0;
  }
  uVar2 = param_2;
  if (bVar16) {
    uVar14 = param_2 & param_2 & param_2 & unaff_r7 &
                                           (int)unaff_r6 <<
                                           ((uint)unaff_r4 & (uint)unaff_r6 & param_3 & 0xff) &
                                           uVar15 & (int)unaff_r4 >> 3 & unaff_r8 << 2 &
                                 unaff_r8 << 2 & (int)unaff_r4 << 2 & (int)unaff_r4 << 2;
    uVar14 = uVar14 & uVar14 << 2;
    piVar5 = (int *)(param_2 & uVar14 & uVar14 << 2);
    puVar11 = (uint *)((int)piVar5 - uVar15);
    *piVar5 = (int)puVar11;
    piVar5[1] = param_2;
    *puVar11 = (int)puVar11 - uVar15;
    puVar11[1] = param_2;
    piVar5 = (int *)(param_2 & (int)puVar11 - uVar15);
    puVar11 = (uint *)((int)piVar5 - unaff_r8);
    *piVar5 = (int)puVar11;
    piVar5[1] = param_2;
    *puVar11 = (int)puVar11 - unaff_r8;
    puVar11[1] = param_2;
    piVar5 = (int *)(param_2 & (int)puVar11 - unaff_r8);
    puVar11 = (uint *)((int)piVar5 - (int)unaff_r4);
    *piVar5 = (int)puVar11;
    piVar5[1] = param_2;
    *puVar11 = (int)puVar11 - (int)unaff_r4;
    puVar11[1] = param_2;
    puVar6 = (undefined4 *)(param_2 & (int)puVar11 - (int)unaff_r4);
    *puVar6 = 0;
    puVar6[1] = param_2;
    _Reset = 0;
    uVar14 = 0;
    uVar2 = _UndefinedInstruction;
    _UndefinedInstruction = param_2;
  }
  if (bVar16) {
    uVar14 = uVar2 & uVar14 & (int)uVar15 >> 1 & (int)uVar15 >> 1;
  }
  if (bVar16) {
    uVar14 = uVar2 & uVar14 & (int)unaff_r8 >> 1 & (int)unaff_r8 >> 1;
  }
  if (bVar16) {
    uVar14 = uVar2 & uVar14 & (int)unaff_r4 >> 1 & (int)unaff_r4 >> 1;
    uVar14 = uVar14 & (int)uVar14 >> 1;
    puVar7 = (undefined2 *)(uVar2 & uVar14 & (int)uVar14 >> 1);
    puVar8 = (undefined2 *)((int)puVar7 - uVar15);
    *puVar7 = (short)puVar8;
    *puVar8 = (short)((int)puVar8 - uVar15);
    puVar7 = (undefined2 *)(uVar2 & (int)puVar8 - uVar15);
    puVar8 = (undefined2 *)((int)puVar7 - unaff_r8);
    *puVar7 = (short)puVar8;
    *puVar8 = (short)((int)puVar8 - unaff_r8);
    psVar9 = (short *)(uVar2 & (int)puVar8 - unaff_r8);
    psVar10 = (short *)((int)psVar9 - (int)unaff_r4);
    sVar1 = (short)psVar10;
    *psVar9 = sVar1;
    *psVar10 = sVar1 - (short)unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

