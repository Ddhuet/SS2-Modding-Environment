
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x079a2fcc) */
/* WARNING: Removing unreachable block (ram,0x079dcac4) */
/* WARNING: Removing unreachable block (ram,0x08ef1d94) */
/* WARNING: Type propagation algorithm not settling */

void FUN_08ef1ce4(undefined1 *param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r3;
  uint extraout_r3_00;
  uint unaff_r4;
  int unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  uint *unaff_r8;
  uint unaff_r9;
  uint uVar4;
  uint in_r12;
  uint extraout_r12;
  uint extraout_r12_00;
  char *pcVar5;
  ushort *puVar6;
  ushort *puVar7;
  short *psVar8;
  char *unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined4 in_cr4;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  uVar4 = coprocessor_movefromRt(5,6,0,in_cr12,in_cr8);
  if (in_NG == in_OV) {
    param_1 = (undefined1 *)0x0;
  }
  if ((bool)in_NG) {
    if ((bool)in_ZR) {
      param_1 = (undefined1 *)(unaff_r5 - (!(bool)in_CY + 0x4000000c));
    }
    bVar9 = false;
    if ((bool)in_ZR) {
      param_2 = unaff_r7 - (!(bool)in_CY + 0x6000000c);
      lVar1 = (ulonglong)(unaff_r5 - (!(bool)in_CY + 0x4000000c)) * ZEXT48(&stack0x00000000);
      bVar9 = lVar1 == 0;
      param_1 = (undefined1 *)lVar1;
      unaff_lr = (char *)((ulonglong)lVar1 >> 0x20);
    }
    bVar10 = false;
    if (bVar9) {
      pcVar5 = unaff_lr + (int)&stack0x00000000 * 2;
      unaff_lr = pcVar5 + 0xd;
      param_1 = (undefined1 *)((uint)&stack0x00000000 & (int)*pcVar5);
      bVar10 = param_1 == (undefined1 *)0x0;
    }
    bVar9 = false;
    if ((bool)in_CY) {
      uVar4 = (uint)param_1 & 0xff;
      bVar9 = uVar4 == 0 || uVar4 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar4) & 1);
      param_1 = (undefined1 *)((int)unaff_lr << uVar4 & 0x85f279c);
      bVar10 = param_1 == (undefined1 *)0x0;
    }
    bVar11 = false;
    if (bVar10) {
      bVar9 = CARRY4((uint)&stack0x00000000,(uint)param_1);
      param_1 = &stack0x00000000 + (int)param_1;
      bVar11 = param_1 == (undefined1 *)0x0;
    }
    if (bVar11) {
      param_1 = (undefined1 *)((int)unaff_lr * (int)param_1);
    }
    lVar1 = CONCAT44(unaff_lr,param_1);
    bVar10 = false;
    if (bVar11) {
      lVar1 = ZEXT48(param_1) * ZEXT48(&stack0x00000000);
      bVar10 = lVar1 == 0;
    }
    puVar6 = (ushort *)((ulonglong)lVar1 >> 0x20);
    puVar2 = (uint *)lVar1;
    bVar11 = false;
    puVar7 = puVar6;
    if (bVar10) {
      puVar7 = (ushort *)((int)puVar6 + (int)register0x00000054);
      puVar2 = (uint *)((uint)&stack0x00000000 ^ (uint)*puVar6);
      bVar11 = puVar2 == (uint *)0x0;
    }
    if (bVar9 && !bVar11) {
      uVar4 = (uint)puVar2 & 0xff;
      bVar9 = uVar4 == 0 && bVar9 || uVar4 != 0 && (bool)((byte)((uint)puVar7 >> uVar4 - 1) & 1);
      puVar2 = (uint *)((uint)puVar7 >> uVar4 ^ 0x85f2814);
      bVar11 = puVar2 == (uint *)0x0;
    }
    bVar10 = false;
    bVar12 = bVar9;
    if (bVar11) {
      bVar12 = CARRY4((uint)&stack0x00000000,(uint)puVar2) ||
               CARRY4((uint)(&stack0x00000000 + (int)puVar2),(uint)bVar9);
      puVar2 = (uint *)((int)puVar2 + (int)(&stack0x00000000 + bVar9));
      bVar10 = puVar2 == (uint *)0x0;
    }
    bVar9 = false;
    bVar11 = bVar12;
    if (bVar10) {
      *(short *)puVar2 = (short)puVar2 - (short)puVar7;
      pcVar5 = (char *)((int)puVar7 + (int)register0x00000054);
      puVar7 = (ushort *)(pcVar5 + 0xd);
      puVar3 = (undefined1 *)(int)*pcVar5;
      bVar11 = puVar3 < &stack0x00000000 ||
               (uint)((int)&stack0x00000000 - (int)puVar3) < (uint)bVar12;
      puVar2 = (uint *)(&stack0x00000000 + -(int)(puVar3 + !bVar12));
      bVar9 = puVar2 == (uint *)0x0;
    }
    bVar10 = false;
    bVar12 = bVar11;
    if (bVar9) {
      puVar3 = (undefined1 *)*puVar2;
      param_2 = puVar2[1];
      bVar12 = puVar3 < &stack0x00000000 ||
               (uint)((int)&stack0x00000000 - (int)puVar3) < (uint)bVar11;
      puVar2 = (uint *)(&stack0x00000000 + -(int)(puVar3 + !bVar11));
      bVar10 = puVar2 == (uint *)0x0;
    }
    bVar9 = false;
    if (bVar10) {
      param_2 = puVar2[1];
      psVar8 = (short *)((int)puVar7 + 0xd);
      puVar7 = puVar7 + 0xd;
      bVar12 = &stack0x00000000 <= (undefined1 *)(int)*psVar8;
      puVar2 = (uint *)((undefined1 *)(int)*psVar8 + -(int)&stack0x00000000);
      bVar9 = puVar2 == (uint *)0x0;
    }
    bVar10 = false;
    if (bVar9) {
      puVar2 = (uint *)(((uint)puVar2 &
                        ((uint)puVar7 >> ((uint)puVar2 & 0x1f) |
                        (int)puVar7 << 0x20 - ((uint)puVar2 & 0x1f))) -
                       (int)(&stack0x00000000 + !bVar12));
      bVar10 = puVar2 == (uint *)0x0;
    }
    if (bVar10) {
      *puVar2 = (int)puVar2 - (int)puVar7;
      puVar2[1] = param_2;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_ZR || in_OV != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_load(0,in_cr4,unaff_r7);
  if (!(bool)in_ZR && in_OV == '\0') {
    coprocessor_loadlong(7,in_cr11,&stack0x00000040);
    unaff_lr = (char *)0x8ef1d5c;
    func_0x07de0bf0();
    param_2 = extraout_r1;
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_moveto(0xe,7,6,unaff_lr,in_cr14,in_cr11);
    coprocessor_function(0xd,0xe,7,in_cr12,in_cr14,in_cr14);
    coprocessor_loadlong(0xe,in_cr13,&stack0x00000374);
  }
  else {
    coprocessor_storelong(0xd,in_cr13,unaff_lr);
  }
  if (in_NG != in_OV) {
    coprocessor_loadlong(0xc,in_cr12,&stack0x00000000);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0xc,in_cr13,in_r12);
  }
  if (in_NG == in_OV) {
    coprocessor_loadlong(0xd,in_cr12,&stack0x00000000);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x0826d8b8();
    param_2 = extraout_r1_00;
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if (!(bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_OV) {
    *unaff_r8 = param_2;
    unaff_r8[1] = param_3;
    unaff_r8[2] = param_4;
    unaff_r8[3] = unaff_r4;
    unaff_r8[4] = unaff_r6;
    unaff_r8[5] = unaff_r7;
    unaff_r8[6] = unaff_r9;
    unaff_r8[7] = uVar4;
    unaff_r8[8] = in_r12;
    unaff_r8[9] = (uint)register0x00000054;
    unaff_r8[10] = 0x8ef1d94;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

