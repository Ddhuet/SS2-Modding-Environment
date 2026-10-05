
/* WARNING: Control flow encountered bad instruction data */

void FUN_08df8efe(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_r6;
  uint unaff_r8;
  uint uVar5;
  uint unaff_r10;
  uint uVar6;
  byte unaff_r11;
  uint *in_r12;
  uint *puVar7;
  uint *puVar8;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  bool in_OV;
  bool bVar9;
  bool bVar10;
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
  
  puVar8 = in_r12;
  if ((bool)in_NG != in_OV) {
    puVar8 = in_r12 + 0x15f;
    *(byte *)in_r12 = unaff_r11;
  }
  iVar1 = param_2;
  uVar3 = param_4;
  if (!in_OV) {
    uVar3 = param_4 + 0x2f0;
    coprocessor_load(0,in_cr0,param_4);
    iVar1 = param_2 + 0x2c8;
    coprocessor_load(0xc,in_cr7,param_2);
  }
  if ((bool)in_NG == in_OV) {
    software_interrupt(0x8cb0);
    coprocessor_store(0xe,in_cr10,puVar8 + 0x8c);
  }
  bVar9 = false;
  if (in_ZR) {
    in_CY = puVar8 <= (uint *)((int)puVar8 * 0x2000000);
    in_OV = SBORROW4((int)puVar8 * 0x2000000,(int)puVar8);
    unaff_r10 = (int)puVar8 * 0x1ffffff;
    in_NG = (int)unaff_r10 < 0;
    bVar9 = unaff_r10 == 0;
  }
  uVar5 = unaff_r8;
  uVar6 = unaff_r10;
  if (!in_OV) {
    uVar6 = unaff_r10 + 0x2ac;
    coprocessor_store(0xc,in_cr3,unaff_r10);
    uVar5 = unaff_r8 + 0x2a4;
    coprocessor_store(0xc,in_cr7,unaff_r8);
  }
  if ((bool)in_NG == in_OV) {
    puVar7 = puVar8 + param_1 * -0x1000;
    puVar8 = puVar7 + -0x14f;
    uVar6 = *puVar7;
  }
  uVar4 = uVar3;
  if ((bool)in_NG) {
    uVar4 = uVar3 + 0x30;
    coprocessor_store(0,in_cr0,uVar3);
  }
  iVar2 = iVar1;
  if (!bVar9) {
    iVar2 = iVar1 + 0x288;
    coprocessor_store(0xc,in_cr4,iVar1);
  }
  if (!(bool)in_CY || bVar9) {
    software_interrupt(0x1ca0);
    coprocessor_storelong(0xe,in_cr9,puVar8 + -0xc);
  }
  if (!(bool)in_CY) {
    coprocessor_load(0xc,in_cr1,uVar6);
  }
  if (!(bool)in_NG) {
    coprocessor_load(0xc,in_cr3,uVar5);
  }
  if (!(bool)in_CY || bVar9) {
    puVar7 = puVar8 + param_1 * -0x1000;
    uVar3 = *puVar8;
    puVar8 = puVar7 + 0x15f;
    *puVar7 = uVar3;
  }
  if (!in_OV) {
    coprocessor_load(0,in_cr0,uVar4);
  }
  if (!(bool)in_NG) {
    coprocessor_load(0xc,in_cr3,iVar2);
  }
  if ((bool)in_CY && !bVar9) {
    software_interrupt(0x5c90);
    coprocessor_loadlong(0xe,in_cr8,puVar8 + -0x5c);
  }
  bVar10 = false;
  if (bVar9) {
    puVar7 = (uint *)((uint)puVar8 >> ((uint)puVar8 & 0x1f) |
                     (int)puVar8 << 0x20 - ((uint)puVar8 & 0x1f));
    in_CY = puVar8 <= puVar7;
    in_OV = SBORROW4((int)puVar7,(int)puVar8);
    uVar5 = (int)puVar7 - (int)puVar8;
    in_NG = (int)uVar5 < 0;
    bVar10 = uVar5 == 0;
  }
  if (!in_OV) {
    coprocessor_store(0xc,in_cr3,uVar6);
    coprocessor_store(0xc,in_cr2,uVar5);
  }
  if ((bool)in_CY && !bVar10) {
    puVar7 = puVar8 + param_1 * -0x1000;
    *puVar8 = uVar5;
    puVar8 = puVar7 + -0x14b;
    uVar5 = *puVar7;
  }
  if ((bool)in_NG) {
    coprocessor_store(0,in_cr0,uVar4);
  }
  if (!bVar10) {
    coprocessor_store(0xc,in_cr3,iVar2);
  }
  if (!in_OV) {
    software_interrupt(0x1c80);
    coprocessor_store(0xe,in_cr7,puVar8 + -0xc);
  }
  bVar9 = false;
  if (bVar10) {
    uVar3 = (uint)puVar8 & 0xff;
    in_CY = uVar3 == 0 && (bool)in_CY || uVar3 != 0 && (bool)((byte)((int)puVar8 >> uVar3 - 1) & 1);
    uVar3 = (uint)puVar8 ^ (int)puVar8 >> uVar3;
    in_NG = (int)uVar3 < 0;
    bVar9 = uVar3 == 0;
  }
  uVar3 = uVar6;
  if ((bool)in_CY) {
    uVar3 = uVar6 - 0x1ec;
    coprocessor_loadlong(0xc,in_cr3,uVar6);
  }
  uVar6 = uVar5;
  if (!in_OV) {
    uVar6 = uVar5 - 0x1e4;
    coprocessor_loadlong(0xc,in_cr7,uVar5);
    puVar8 = puVar8 + param_1 * -0x1000 + -0x15f;
  }
  if ((bool)in_NG) {
    iVar1 = iVar2 + -0x1c8;
    coprocessor_loadlong(0xc,in_cr5,iVar2);
  }
  else {
    coprocessor_loadlong(0,in_cr0,uVar4);
    iVar1 = iVar2;
    uVar4 = uVar4 - 0x1f0;
  }
  if (in_OV) {
    software_interrupt(0x4c70);
    coprocessor_loadlong(0xe,in_cr6,puVar8 + -0x4c);
  }
  if (bVar9) {
    unaff_r6 = (uint)puVar8 ^ (uint)puVar8 >> 0x18;
  }
  if (in_OV) {
    *puVar8 = unaff_r6;
    puVar8 = puVar8 + param_1 * -0x1000 + -0x14b;
  }
  else {
    coprocessor_storelong(0xc,in_cr2,uVar3);
    coprocessor_storelong(0xc,in_cr8,uVar6);
    uVar6 = uVar6 - 0x1a4;
    uVar3 = uVar3 - 0x1ac;
  }
  if (bVar9) {
    coprocessor_storelong(0,in_cr0,uVar4);
    iVar2 = iVar1;
    uVar4 = uVar4 - 0x70;
  }
  else {
    iVar2 = iVar1 + -0x188;
    coprocessor_storelong(0xc,in_cr1,iVar1);
  }
  if (!(bool)in_NG) {
    software_interrupt(0x1c60);
    coprocessor_store(0xe,in_cr5,puVar8 + -0xc);
  }
  bVar10 = false;
  if (bVar9) {
    in_CY = (byte)((uint)puVar8 >> 8) & 1;
    uVar5 = (uint)puVar8 & (int)puVar8 << 0x18;
    in_NG = (int)uVar5 < 0;
    bVar10 = uVar5 == 0;
  }
  if ((bool)in_CY) {
    param_3 = coprocessor_movefromRt(0xc,5,in_cr11);
    uVar3 = coprocessor_movefromRt2(0xc,5,in_cr11);
  }
  if (!in_OV) {
    coprocessor_movefromRt(0xc,5,in_cr9);
    uVar6 = coprocessor_movefromRt2(0xc,5,in_cr9);
  }
  if (!(bool)in_NG) {
    puVar7 = puVar8 + param_1 * -0x1000;
    uVar5 = *puVar8;
    puVar8 = puVar7 + -0x14f;
    *puVar7 = uVar5;
  }
  if (!(bool)in_CY) {
    param_1 = coprocessor_movefromRt(0,7,in_cr12);
    uVar4 = coprocessor_movefromRt2(0,7,in_cr12);
  }
  if ((bool)in_NG) {
    coprocessor_movefromRt(0xc,5,in_cr2);
    iVar2 = coprocessor_movefromRt2(0xc,5,in_cr2);
    software_interrupt(0x4c50);
    puVar8 = puVar8 + -0x5c;
    coprocessor_store(0xe,in_cr4,puVar8);
  }
  bVar9 = false;
  if (bVar10) {
    puVar7 = (uint *)((uint)puVar8 >> ((uint)puVar8 & 0x1f) |
                     (int)puVar8 << 0x20 - ((uint)puVar8 & 0x1f));
    in_CY = puVar8 <= puVar7;
    in_OV = SBORROW4((int)puVar7,(int)puVar8);
    in_NG = (int)puVar7 - (int)puVar8 < 0;
    bVar9 = puVar7 == puVar8;
  }
  if (!in_OV) {
    coprocessor_moveto2(0xc,4,uVar4,uVar3,in_cr11);
    coprocessor_moveto2(0xc,4,uVar6,uVar6,in_cr9);
  }
  if ((bool)in_NG) {
    puVar8 = puVar8 + param_1 * -0x1000 + -0x147;
  }
  if (bVar9) {
    coprocessor_moveto2(0,0,param_1,uVar4,in_cr12);
    coprocessor_moveto2(0xc,4,param_1,iVar2,in_cr2);
  }
  if (!(bool)in_CY) {
    software_interrupt(0x1c40);
    coprocessor_store(0xe,in_cr3,puVar8 + -0xc);
  }
  if (bVar9) {
    uVar4 = (uint)puVar8 & (int)puVar8 << 0x18;
  }
  uVar5 = uVar3;
  if ((bool)in_CY) {
    uVar5 = uVar3 - 0xec;
    coprocessor_load(0xc,in_cr1,uVar3);
  }
  uVar3 = uVar6;
  if (!(bool)in_NG) {
    uVar3 = uVar6 - 0xe4;
    coprocessor_load(0xc,in_cr7,uVar6);
  }
  if (!(bool)in_CY) {
    puVar7 = puVar8 + param_1 * -0x1000;
    puVar8 = puVar7 + -0x14f;
    uVar6 = (uint)(byte)*puVar7;
    uVar4 = uVar6 - 0x1f0;
    coprocessor_load(0,in_cr0,uVar6);
  }
  iVar1 = iVar2;
  if (bVar9) {
    iVar1 = iVar2 + -200;
    coprocessor_load(0xc,in_cr0,iVar2);
  }
  if ((bool)in_CY) {
    software_interrupt(0x1c30);
    puVar8 = puVar8 + -0x7c;
    coprocessor_loadlong(0xe,in_cr2,puVar8);
  }
  if (bVar9) {
    param_3 = (uint)puVar8 ^
              ((uint)puVar8 >> ((uint)puVar8 & 0x1f) | (int)puVar8 << 0x20 - ((uint)puVar8 & 0x1f));
  }
  if ((bool)in_CY) {
    puVar7 = puVar8 + param_1 * -0x1000;
    *puVar8 = param_3;
    puVar8 = puVar7 + -0x143;
    *puVar7 = param_3;
  }
  else {
    coprocessor_store(0xc,in_cr3,uVar5);
    coprocessor_store(0xc,in_cr3,uVar3);
  }
  if (bVar9) {
    coprocessor_store(0,in_cr0,uVar4);
    coprocessor_store(0xc,in_cr0,iVar1);
  }
  else {
    software_interrupt(0xc20);
    coprocessor_store(0xe,in_cr1,puVar8 + -0xc);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

