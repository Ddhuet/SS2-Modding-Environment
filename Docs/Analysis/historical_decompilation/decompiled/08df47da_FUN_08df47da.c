
/* WARNING: Control flow encountered bad instruction data */

void FUN_08df47da(int param_1,int param_2,undefined4 param_3,byte *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint unaff_r7;
  uint unaff_r8;
  uint uVar6;
  uint uVar7;
  uint unaff_r9;
  uint unaff_r10;
  uint uVar8;
  uint uVar9;
  uint *in_r12;
  uint *puVar10;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar11;
  bool bVar12;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (in_NG != in_OV) {
    in_r12 = in_r12 + 0x16f;
  }
  iVar2 = param_2;
  pbVar4 = param_4;
  if (in_CY) {
    pbVar4 = param_4 + 0xb0;
    coprocessor_load(0,in_cr0,param_4);
    iVar2 = param_2 + 0x2c8;
    coprocessor_load(0xc,in_cr2,param_2);
  }
  if (in_NG == in_OV) {
    software_interrupt(0x7cb0);
    in_r12 = in_r12 + -0x7c;
    coprocessor_loadlong(0xe,in_cr10,in_r12);
  }
  bVar11 = false;
  if (in_ZR) {
    puVar10 = (uint *)((int)in_r12 >> ((uint)in_r12 & 0xff));
    in_CY = puVar10 <= in_r12;
    in_OV = SBORROW4((int)in_r12,(int)puVar10);
    unaff_r10 = (int)in_r12 - (int)puVar10;
    in_NG = (int)unaff_r10 < 0;
    bVar11 = unaff_r10 == 0;
  }
  uVar6 = unaff_r8;
  uVar8 = unaff_r10;
  if (!(bool)in_NG) {
    uVar8 = unaff_r10 + 0x2ac;
    coprocessor_store(0xc,in_cr7,unaff_r10);
    uVar6 = unaff_r8 + 0x2a4;
    coprocessor_store(0xc,in_cr5,unaff_r8);
  }
  if (in_NG == in_OV) {
    puVar10 = in_r12 + param_1 * -0x1000;
    uVar8 = (uint)(byte)*in_r12;
    in_r12 = puVar10 + -0x15f;
    *puVar10 = uVar8;
  }
  pbVar5 = pbVar4;
  if (!in_CY || bVar11) {
    pbVar5 = pbVar4 + 0xb0;
    coprocessor_store(0,in_cr0,pbVar4);
  }
  iVar3 = iVar2;
  if (!bVar11) {
    iVar3 = iVar2 + 0x288;
    coprocessor_store(0xc,in_cr1,iVar2);
  }
  if (!in_CY || bVar11) {
    software_interrupt(0x3ca0);
    in_r12 = in_r12 + -0x3c;
    coprocessor_load(0xe,in_cr9,in_r12);
  }
  bVar12 = false;
  if (bVar11) {
    uVar9 = (uint)in_r12 & 0xff;
    in_CY = uVar9 == 0 && in_CY || uVar9 != 0 && (bool)((byte)((uint)in_r12 >> uVar9 - 1) & 1);
    unaff_r9 = (uint)in_r12 ^ (uint)in_r12 >> uVar9;
    in_NG = (int)unaff_r9 < 0;
    bVar12 = unaff_r9 == 0;
  }
  if (!in_CY) {
    coprocessor_load(0xc,in_cr3,uVar8);
  }
  if (in_NG == in_OV) {
    coprocessor_load(0xc,in_cr3,uVar6);
  }
  if (!in_CY || bVar12) {
    *in_r12 = unaff_r9;
    in_r12 = in_r12 + param_1 * 0x1000 + -0x153;
  }
  if (in_CY) {
    coprocessor_load(0,in_cr0,pbVar5);
  }
  if ((bool)in_NG) {
    coprocessor_load(0xc,in_cr2,iVar3);
  }
  if (in_CY && !bVar12) {
    software_interrupt(0x4c90);
    in_r12 = in_r12 + -0x7c;
    coprocessor_loadlong(0xe,in_cr8,in_r12);
  }
  bVar11 = false;
  if (bVar12) {
    puVar10 = (uint *)((uint)in_r12 >> ((uint)in_r12 & 0x1f) |
                      (int)in_r12 << 0x20 - ((uint)in_r12 & 0x1f));
    in_CY = puVar10 <= in_r12;
    in_OV = SBORROW4((int)in_r12,(int)puVar10);
    uVar6 = (int)in_r12 - (int)puVar10;
    in_NG = (int)uVar6 < 0;
    bVar11 = uVar6 == 0;
  }
  if ((bool)in_NG) {
    coprocessor_store(0xc,in_cr5,uVar8);
    coprocessor_store(0xc,in_cr4,uVar6);
  }
  if (in_CY && !bVar11) {
    puVar10 = in_r12 + param_1 * -0x1000;
    in_r12 = puVar10 + -0x157;
    uVar6 = (uint)(byte)*puVar10;
  }
  else {
    coprocessor_store(0,in_cr0,pbVar5);
  }
  if (!bVar11) {
    coprocessor_store(0xc,in_cr1,iVar3);
  }
  if (!(bool)in_OV) {
    software_interrupt(0x1c80);
    in_r12 = in_r12 + -0x1c;
    coprocessor_load(0xe,in_cr7,in_r12);
  }
  bVar12 = false;
  if (bVar11) {
    uVar9 = (uint)in_r12 & 0xff;
    in_CY = uVar9 == 0 && in_CY || uVar9 != 0 && (bool)((byte)((uint)in_r12 >> uVar9 - 1) & 1);
    unaff_r7 = (uint)in_r12 ^ (uint)in_r12 >> uVar9;
    in_NG = (int)unaff_r7 < 0;
    bVar12 = unaff_r7 == 0;
  }
  uVar7 = uVar6;
  uVar9 = uVar8;
  if (!in_CY) {
    uVar9 = uVar8 - 0x1ec;
    coprocessor_loadlong(0xc,in_cr10,uVar8);
    uVar7 = uVar6 - 0x1e4;
    coprocessor_loadlong(0xc,in_cr3,uVar6);
  }
  if (!(bool)in_OV) {
    *in_r12 = unaff_r7;
    in_r12 = in_r12 + param_1 * 0x1000 + -0x16b;
  }
  pbVar4 = pbVar5;
  if ((bool)in_NG) {
    pbVar4 = pbVar5 + -0xb0;
    coprocessor_loadlong(0,in_cr0,pbVar5);
  }
  iVar2 = iVar3;
  if (!in_CY || bVar12) {
    iVar2 = iVar3 + -0x1c8;
    coprocessor_loadlong(0xc,in_cr10,iVar3);
  }
  if ((bool)in_OV) {
    software_interrupt(0x1c70);
    in_r12 = in_r12 + -0xc;
    coprocessor_loadlong(0xe,in_cr6,in_r12);
  }
  uVar8 = uVar9;
  if (!in_CY || bVar12) {
    uVar8 = uVar9 - 0x1ac;
    coprocessor_storelong(0xc,in_cr4,uVar9);
  }
  uVar6 = uVar7;
  if (bVar12) {
    uVar6 = uVar7 - 0x1a4;
    coprocessor_storelong(0xc,in_cr0,uVar7);
  }
  if ((bool)in_OV) {
    in_r12 = in_r12 + param_1 * -0x1000 + -0x157;
  }
  pbVar5 = pbVar4;
  if (!in_CY || bVar12) {
    pbVar5 = pbVar4 + -0x130;
    coprocessor_storelong(0,in_cr0,pbVar4);
  }
  iVar3 = iVar2;
  if (!bVar12) {
    iVar3 = iVar2 + -0x188;
    coprocessor_storelong(0xc,in_cr1,iVar2);
  }
  if (!(bool)in_NG) {
    software_interrupt(0x1c60);
    coprocessor_load(0xe,in_cr5,in_r12 + -0x1c);
  }
  bVar11 = false;
  if (bVar12) {
    uVar9 = (uint)in_r12 & 0xff;
    in_CY = uVar9 == 0 && in_CY || uVar9 != 0 && (bool)((byte)((uint)in_r12 >> uVar9 - 1) & 1);
    uVar9 = (uint)in_r12 ^ (uint)in_r12 >> uVar9;
    in_NG = (int)uVar9 < 0;
    bVar11 = uVar9 == 0;
  }
  if (!in_CY) {
    coprocessor_movefromRt(0xc,5,in_cr11);
    uVar8 = coprocessor_movefromRt2(0xc,5,in_cr11);
    pbVar5 = (byte *)coprocessor_movefromRt(0xc,5,in_cr9);
    uVar6 = coprocessor_movefromRt2(0xc,5,in_cr9);
  }
  if (!(bool)in_NG) {
    in_r12 = in_r12 + param_1 * -0x1000 + 0x16b;
  }
  if (!in_CY) {
    param_1 = coprocessor_movefromRt(0,10,in_cr12);
    pbVar5 = (byte *)coprocessor_movefromRt2(0,10,in_cr12);
  }
  if (!bVar11) {
    coprocessor_movefromRt(0xc,5,in_cr2);
    iVar3 = coprocessor_movefromRt2(0xc,5,in_cr2);
  }
  if ((bool)in_NG) {
    software_interrupt(0x1c50);
    coprocessor_load(0xe,in_cr4,in_r12 + 0x9c);
  }
  bVar12 = false;
  if (bVar11) {
    lVar1 = ZEXT48(in_r12) * ZEXT48(in_r12);
    in_NG = lVar1 < 0;
    bVar12 = lVar1 == 0;
    in_r12 = (uint *)((ulonglong)lVar1 >> 0x20);
  }
  if (!bVar12) {
    coprocessor_moveto2(0xc,4,iVar3,uVar8,in_cr11);
    coprocessor_moveto2(0xc,4,iVar3,uVar6,in_cr9);
  }
  if ((bool)in_NG) {
    in_r12 = in_r12 + param_1 * 0x1000 + 0x153;
  }
  if (!bVar12) {
    coprocessor_moveto2(0,9,param_1,pbVar5,in_cr12);
    coprocessor_moveto2(0xc,4,iVar3,iVar3,in_cr2);
  }
  if (!in_CY) {
    software_interrupt(0x1c40);
    coprocessor_load(0xe,in_cr3,in_r12 + -0x1c);
  }
  if (bVar12) {
    pbVar5 = (byte *)((int)in_r12 + (uint)in_CY + ((int)in_r12 << ((uint)in_r12 & 0xff)));
  }
  uVar7 = uVar6;
  uVar9 = uVar8;
  if (in_NG == in_OV) {
    uVar9 = uVar8 - 0xec;
    coprocessor_load(0xc,in_cr10,uVar8);
    uVar7 = uVar6 - 0xe4;
    coprocessor_load(0xc,in_cr10,uVar6);
  }
  if (!in_CY) {
    puVar10 = in_r12 + param_1 * 0x1000;
    *in_r12 = (uint)pbVar5;
    in_r12 = puVar10 + 0x16b;
    *puVar10 = (uint)pbVar5;
  }
  iVar2 = iVar3;
  pbVar4 = pbVar5;
  if (!bVar12) {
    pbVar4 = pbVar5 + -0x70;
    coprocessor_load(0,in_cr0,pbVar5);
    iVar2 = iVar3 + -200;
    coprocessor_load(0xc,in_cr1,iVar3);
  }
  if (in_CY) {
    software_interrupt(0x1c30);
    coprocessor_load(0xe,in_cr2,in_r12 + -0x1c);
  }
  bVar11 = false;
  if (bVar12) {
    uVar8 = (uint)in_r12 & 0xff;
    in_CY = uVar8 == 0 && in_CY || uVar8 != 0 && (bool)((byte)((uint)in_r12 >> 0x20 - uVar8) & 1);
    bVar11 = ((uint)in_r12 & (int)in_r12 << uVar8) == 0;
  }
  if (!bVar11) {
    coprocessor_store(0xc,in_cr1,uVar9);
    coprocessor_store(0xc,in_cr1,uVar7);
  }
  if (in_CY) {
    in_r12 = in_r12 + param_1 * -0x1000 + -0x147;
  }
  if (!bVar11) {
    coprocessor_store(0,in_cr0,pbVar4);
    coprocessor_store(0xc,in_cr1,iVar2);
    software_interrupt(0x1c20);
    coprocessor_load(0xe,in_cr1,in_r12 + -0x2c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

