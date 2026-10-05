
/* WARNING: Control flow encountered bad instruction data */

void FUN_08df8558(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r1;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r2_03;
  uint extraout_r2_04;
  uint extraout_r2_05;
  uint extraout_r2_06;
  uint extraout_r2_07;
  undefined4 unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint uVar5;
  uint uVar6;
  uint *unaff_r8;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint unaff_r9;
  uint *unaff_r10;
  undefined1 unaff_r11;
  uint *in_r12;
  uint *extraout_r12;
  uint *extraout_r12_00;
  uint *extraout_r12_01;
  uint *extraout_r12_02;
  uint *extraout_r12_03;
  uint *extraout_r12_04;
  uint *extraout_r12_05;
  uint *extraout_r12_06;
  uint *extraout_r12_07;
  uint *puVar10;
  undefined4 unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined1 uVar11;
  undefined1 uVar12;
  bool bVar13;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr12;
  undefined8 uVar14;
  
  puVar9 = in_r12;
  if (in_NG != in_OV) {
    puVar9 = in_r12 + 0x140;
    *(undefined1 *)in_r12 = unaff_r11;
    in_CY = puVar9 < (uint *)0xf0000003;
    in_OV = SBORROW4(-0xffffffe,(int)puVar9);
    in_NG = -(int)puVar9 + -0xffffffe < 0;
    in_ZR = -(int)puVar9 == 0xffffffe;
  }
  iVar1 = param_2;
  if (!(bool)in_OV) {
    iVar1 = param_2 + 0x1f0;
    coprocessor_load(0,in_cr0,param_2);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    coprocessor_store(0xc,in_cr8,0x8df856c);
  }
  if (in_NG == in_OV) {
    coprocessor_store(0xc,in_cr8,param_1 + -0x2b8);
    uVar14 = func_0x0ad237a4(param_1,iVar1);
    iVar1 = (int)((ulonglong)uVar14 >> 0x20);
    param_1 = (int)uVar14;
    param_3 = extraout_r2;
    puVar9 = extraout_r12;
  }
  uVar11 = false;
  if ((bool)in_ZR) {
    puVar7 = (uint *)((uint)puVar9 >> ((uint)unaff_r10 & 0xff));
    in_CY = puVar9 <= puVar7;
    in_OV = SBORROW4((int)puVar7,(int)puVar9);
    unaff_r10 = (uint *)((int)puVar7 - (int)puVar9);
    in_NG = (int)unaff_r10 < 0;
    uVar11 = unaff_r10 == (uint *)0x0;
  }
  puVar7 = unaff_r8;
  if (!(bool)in_OV) {
    puVar7 = unaff_r8 + 0xa9;
    coprocessor_store(0xc,in_cr7,unaff_r8);
  }
  uVar5 = unaff_r6;
  if (!(bool)in_CY) {
    uVar5 = unaff_r6 + 0x29c;
    coprocessor_store(0xc,in_cr5,unaff_r6);
  }
  puVar10 = puVar9;
  if (in_NG == in_OV) {
    puVar10 = puVar9 + -0x140;
    unaff_r10 = puVar9 + -0xc000140;
  }
  if ((bool)uVar11) {
    coprocessor_load(0xc,in_cr1,0x8df8590);
  }
  else {
    coprocessor_store(0,in_cr0,iVar1);
    iVar1 = iVar1 + 0x130;
  }
  uVar14 = CONCAT44(iVar1,param_1);
  if (!(bool)in_CY || (bool)uVar11) {
    coprocessor_store(0xc,in_cr4,param_1 + -0x278);
    uVar14 = func_0x0991f688(param_1,iVar1);
    param_3 = extraout_r2_00;
    puVar10 = extraout_r12_00;
  }
  uVar12 = false;
  if ((bool)uVar11) {
    uVar6 = (uint)unaff_r10 & 0xff;
    in_CY = uVar6 == 0 && (bool)in_CY ||
            uVar6 != 0 && (bool)((byte)((uint)puVar10 >> 0x20 - uVar6) & 1);
    unaff_r9 = (uint)puVar10 ^ (int)puVar10 << uVar6;
    in_NG = (int)unaff_r9 < 0;
    uVar12 = unaff_r9 == 0;
  }
  if (!(bool)in_NG) {
    coprocessor_load(0xc,in_cr3,puVar7);
  }
  if (!(bool)in_OV) {
    coprocessor_load(0xc,in_cr3,uVar5);
  }
  puVar9 = puVar10;
  if (!(bool)in_CY || (bool)uVar12) {
    puVar9 = puVar10 + 0x140;
    *puVar10 = unaff_r9;
    in_CY = puVar9 < (uint *)0x30000003;
    in_OV = SBORROW4(0x30000002,(int)puVar9);
    in_NG = -(int)puVar9 + 0x30000002 < 0;
    uVar12 = -(int)puVar9 == -0x30000002;
  }
  if (!(bool)in_NG) {
    coprocessor_load(0,in_cr0,(int)((ulonglong)uVar14 >> 0x20));
    coprocessor_store(0xc,in_cr5,0x8df85b4);
  }
  if ((bool)in_CY && !(bool)uVar12) {
    coprocessor_store(0xc,in_cr5,(int)uVar14 + -0x238);
    uVar14 = func_0x0ad1b7ac();
    param_3 = extraout_r2_01;
    puVar9 = extraout_r12_01;
  }
  uVar11 = false;
  if ((bool)uVar12) {
    puVar7 = (uint *)((uint)puVar9 >> ((uint)unaff_r10 & 0xff));
    in_CY = puVar9 <= puVar7;
    in_OV = SBORROW4((int)puVar7,(int)puVar9);
    puVar7 = (uint *)((int)puVar7 - (int)puVar9);
    in_NG = (int)puVar7 < 0;
    uVar11 = puVar7 == (uint *)0x0;
  }
  if (!(bool)in_OV) {
    coprocessor_store(0xc,in_cr2,puVar7);
  }
  if ((bool)in_CY) {
    coprocessor_store(0xc,in_cr2,uVar5);
  }
  puVar10 = puVar9;
  if ((bool)in_CY && !(bool)uVar11) {
    puVar10 = puVar9 + -0x140;
    puVar7 = puVar9 + -0xc000140;
  }
  if ((bool)uVar11) {
    coprocessor_loadlong(0xc,in_cr1,0x8df85d8);
  }
  else {
    coprocessor_store(0,in_cr0,(int)((ulonglong)uVar14 >> 0x20));
  }
  if (!(bool)in_OV) {
    coprocessor_store(0xc,in_cr0,(int)uVar14 + -0x1f8);
    uVar14 = func_0x09d17750();
    param_3 = extraout_r2_02;
    puVar10 = extraout_r12_02;
  }
  iVar4 = (int)((ulonglong)uVar14 >> 0x20);
  iVar1 = (int)uVar14;
  puVar9 = puVar10;
  uVar6 = uVar5;
  puVar8 = puVar7;
  if (!(bool)in_OV) {
    puVar8 = puVar7 + -0x79;
    coprocessor_loadlong(0xc,in_cr7,puVar7);
    uVar6 = uVar5 - 0x1dc;
    coprocessor_loadlong(0xc,in_cr3,uVar5);
    puVar9 = puVar10 + -0x140;
    in_CY = (uint *)0xf0000000 < puVar9;
    in_OV = SBORROW4((int)puVar9,-0xfffffff);
    in_NG = (int)puVar10 + 0xffffaff < 0;
    uVar11 = puVar9 == (uint *)0xf0000001;
  }
  iVar2 = iVar4;
  if ((bool)in_NG) {
    iVar2 = iVar4 + -0x170;
    coprocessor_loadlong(0,in_cr0,iVar4);
    coprocessor_storelong(0xc,in_cr4,0x8df85fc);
  }
  uVar14 = CONCAT44(iVar2,iVar1);
  if ((bool)in_OV) {
    coprocessor_store(0xc,in_cr5,iVar1 + -0x1b8);
    uVar14 = func_0x099136b4(iVar1,iVar2);
    param_3 = extraout_r2_03;
    puVar9 = extraout_r12_03;
  }
  iVar4 = (int)((ulonglong)uVar14 >> 0x20);
  iVar1 = (int)uVar14;
  uVar12 = false;
  if ((bool)uVar11) {
    puVar7 = (uint *)((uint)puVar9 >> 0x14);
    in_CY = puVar9 <= puVar7;
    in_OV = SBORROW4((int)puVar7,(int)puVar9);
    uVar6 = (int)puVar7 - (int)puVar9;
    in_NG = (int)uVar6 < 0;
    uVar12 = uVar6 == 0;
  }
  puVar7 = puVar8;
  if (!(bool)in_OV) {
    puVar7 = puVar8 + -0x69;
    coprocessor_storelong(0xc,in_cr8,puVar8);
  }
  uVar5 = uVar6;
  if ((bool)in_CY) {
    uVar5 = uVar6 - 0x19c;
    coprocessor_storelong(0xc,in_cr2,uVar6);
  }
  if ((bool)in_OV) {
    puVar9 = puVar9 + -0x140;
    uVar5 = (uint)puVar9 & 0x70000000;
  }
  if ((bool)uVar12) {
    iVar2 = coprocessor_movefromRt(0xc,6,in_cr0);
    unaff_pc = coprocessor_movefromRt2(0xc,6,in_cr0);
  }
  else {
    iVar2 = iVar4 + -0x70;
    coprocessor_storelong(0,in_cr0,iVar4);
  }
  uVar14 = CONCAT44(iVar2,iVar1);
  if (!(bool)in_NG) {
    coprocessor_store(0xc,in_cr0,iVar1 + -0x178);
    uVar14 = func_0x0950f658(iVar1,iVar2);
    param_3 = extraout_r2_04;
    puVar9 = extraout_r12_04;
  }
  if ((bool)uVar12) {
    unaff_r5 = (uint)puVar9 ^ (uint)puVar9 >> 0x14;
  }
  if (!(bool)in_OV) {
    coprocessor_movefromRt(0xc,5,in_cr9);
    puVar7 = (uint *)coprocessor_movefromRt2(0xc,5,in_cr9);
  }
  if (!(bool)in_CY) {
    coprocessor_movefromRt(0xc,5,in_cr7);
    uVar5 = coprocessor_movefromRt2(0xc,5,in_cr7);
  }
  puVar10 = puVar9;
  if (!(bool)in_NG) {
    puVar10 = puVar9 + -0x140;
    *puVar9 = unaff_r5;
    in_CY = 1;
    in_NG = (int)((uint)puVar10 ^ 0xf0000001) < 0;
    uVar12 = ((uint)puVar10 ^ 0xf0000001) == 0;
  }
  if ((bool)in_NG) {
    iVar1 = coprocessor_movefromRt(0,4,in_cr12);
    uVar3 = coprocessor_movefromRt2(0,4,in_cr12);
    coprocessor_store(0xc,in_cr2,iVar1 + -0x138);
    uVar14 = func_0x0ad0b83c(iVar1,uVar3);
    param_3 = extraout_r2_05;
    puVar10 = extraout_r12_05;
  }
  else {
    coprocessor_moveto2(0xc,5,unaff_r4,unaff_pc,in_cr0);
  }
  uVar3 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar11 = false;
  if ((bool)uVar12) {
    puVar9 = (uint *)((uint)puVar10 >> ((uint)unaff_r10 & 0xff));
    in_CY = puVar10 <= puVar9;
    in_OV = SBORROW4((int)puVar9,(int)puVar10);
    in_NG = (int)puVar9 - (int)puVar10 < 0;
    uVar11 = puVar9 == puVar10;
  }
  if (!(bool)in_OV) {
    coprocessor_moveto2(0xc,4,puVar7,puVar7,in_cr9);
  }
  if (!(bool)uVar11) {
    coprocessor_moveto2(0xc,4,uVar3,uVar5,in_cr7);
  }
  if ((bool)in_NG) {
    puVar10 = puVar10 + -0x140;
  }
  if ((bool)uVar11) {
    coprocessor_moveto2(0,0,(int)uVar14,uVar3,in_cr12);
    coprocessor_load(0xc,in_cr1,0x8df8668);
  }
  if (!(bool)in_CY) {
    coprocessor_store(0xc,in_cr0,(int)uVar14 + -0xf8);
    uVar14 = func_0x091076a0();
    param_3 = extraout_r2_06;
    puVar10 = extraout_r12_06;
  }
  iVar1 = (int)((ulonglong)uVar14 >> 0x20);
  puVar9 = puVar7;
  if (!(bool)in_NG) {
    puVar9 = puVar7 + -0x39;
    coprocessor_load(0xc,in_cr7,puVar7);
  }
  uVar6 = uVar5;
  if (!(bool)in_CY) {
    uVar6 = uVar5 - 0xdc;
    coprocessor_load(0xc,in_cr3,uVar5);
    puVar10 = puVar10 + -0x140;
    in_CY = true;
    uVar11 = puVar10 == (uint *)0xf0000001;
  }
  iVar4 = iVar1;
  if ((bool)uVar11) {
    iVar4 = iVar1 + -0x30;
    coprocessor_load(0,in_cr0,iVar1);
  }
  if (!(bool)in_OV) {
    coprocessor_store(0xc,in_cr1,0x8df868c);
  }
  if ((bool)in_CY) {
    coprocessor_store(0xc,in_cr7,(int)uVar14 + -0xb8);
    func_0x09903884((int)uVar14,iVar4);
    iVar4 = extraout_r1;
    param_3 = extraout_r2_07;
    puVar10 = extraout_r12_07;
  }
  bVar13 = false;
  if ((bool)uVar11) {
    uVar5 = (uint)unaff_r10 & 0xff;
    in_CY = uVar5 == 0 && (bool)in_CY ||
            uVar5 != 0 && (bool)((byte)((uint)puVar10 >> uVar5 - 1) & 1);
    param_3 = (uint)puVar10 ^ (uint)puVar10 >> uVar5;
    bVar13 = param_3 == 0;
  }
  if (!(bool)in_CY) {
    coprocessor_store(0xc,in_cr3,puVar9);
  }
  if (bVar13) {
    coprocessor_store(0xc,in_cr0,uVar6);
  }
  if ((bool)in_CY) {
    *puVar10 = param_3;
  }
  if (bVar13) {
    coprocessor_store(0,in_cr0,iVar4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

