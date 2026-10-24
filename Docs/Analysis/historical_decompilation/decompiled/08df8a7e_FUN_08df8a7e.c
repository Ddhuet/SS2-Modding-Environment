
/* WARNING: Control flow encountered bad instruction data */

void FUN_08df8a7e(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  byte unaff_r6;
  undefined4 uVar4;
  byte unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  uint in_r12;
  byte *unaff_lr;
  byte *pbVar5;
  uint *puVar6;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar7;
  bool bVar8;
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
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (in_NG != in_OV) {
    unaff_lr = unaff_lr + -0x52e;
  }
  if ((bool)in_CY && !in_ZR) {
    param_1 = coprocessor_movefromRt(0,5,5,in_cr3,in_cr14);
  }
  if (in_ZR || in_NG != in_OV) {
    in_r12 = coprocessor_movefromRt(0xe,5,5,in_cr1,in_cr2);
  }
  if (in_NG == in_OV) {
    software_interrupt(0xdeb0);
    coprocessor_storelong(0xe,in_cr10,unaff_lr + 0x378);
  }
  bVar7 = false;
  if (in_ZR) {
    lVar2 = (ulonglong)in_r12 * ZEXT48(unaff_lr);
    in_NG = lVar2 < 0;
    bVar7 = lVar2 == 0;
    unaff_r10 = (undefined4)lVar2;
    unaff_lr = (byte *)((ulonglong)lVar2 >> 0x20);
  }
  if (!(bool)in_CY || bVar7) {
    coprocessor_function(0xe,10,5,in_cr6,in_cr10,in_cr11);
  }
  else {
    coprocessor_function(0xe,10,5,in_cr14,in_cr8,in_cr9);
  }
  if (in_NG == in_OV) {
    pbVar5 = unaff_lr + param_1 * 0x4000;
    *unaff_lr = (byte)unaff_r10;
    unaff_lr = pbVar5 + 0x58e;
    *(undefined4 *)pbVar5 = unaff_r10;
  }
  coprocessor_moveto(0,5,5,param_1,in_cr3,in_cr14);
  if (!(bool)in_NG) {
    coprocessor_function(0xe,10,5,in_cr14,in_cr1,in_cr2);
  }
  if (!(bool)in_CY || bVar7) {
    software_interrupt(0x5ea0);
    coprocessor_load(0xe,in_cr9,unaff_lr + -0x38);
  }
  bVar8 = false;
  if (bVar7) {
    pbVar5 = (byte *)((uint)unaff_lr >> (in_r12 & 0xff));
    in_CY = pbVar5 <= unaff_lr;
    in_OV = SBORROW4((int)unaff_lr,(int)pbVar5);
    unaff_r9 = (int)unaff_lr - (int)pbVar5;
    in_NG = unaff_r9 < 0;
    bVar8 = unaff_r9 == 0;
  }
  if ((bool)in_NG) {
    coprocessor_movefromRt(0xe,4,4,in_cr10,in_cr11);
    coprocessor_movefromRt(0xe,4,4,in_cr8,in_cr9);
  }
  if (!(bool)in_CY || bVar8) {
    pbVar5 = unaff_lr + param_1 * -0x4000;
    *(int *)unaff_lr = unaff_r9;
    unaff_lr = pbVar5 + 0x52e;
    *(int *)pbVar5 = unaff_r9;
  }
  if (in_NG == in_OV) {
    param_1 = coprocessor_movefromRt(0,4,5,in_cr3,in_cr14);
  }
  if (!bVar8 && in_NG == in_OV) {
    in_r12 = coprocessor_movefromRt(0xe,4,4,in_cr1,in_cr2);
  }
  if ((bool)in_CY && !bVar8) {
    software_interrupt(0xde90);
    coprocessor_storelong(0xe,in_cr8,unaff_lr + 0x338);
  }
  bVar7 = false;
  if (bVar8) {
    lVar2 = (ulonglong)in_r12 * ZEXT48(unaff_lr);
    in_NG = lVar2 < 0;
    bVar7 = lVar2 == 0;
    unaff_r8 = (byte)lVar2;
    unaff_lr = (byte *)((ulonglong)lVar2 >> 0x20);
  }
  if (!(bool)in_CY || bVar7) {
    coprocessor_function(0xe,8,4,in_cr13,in_cr10,in_cr11);
  }
  if (!bVar7 && in_NG == in_OV) {
    coprocessor_function(0xe,8,4,in_cr11,in_cr8,in_cr9);
  }
  if ((bool)in_CY && !bVar7) {
    *unaff_lr = unaff_r8;
    unaff_lr = unaff_lr + param_1 * 0x4000 + 0x58e;
  }
  coprocessor_function(0,8,7,in_cr0,in_cr3,in_cr14);
  if (!(bool)in_NG) {
    coprocessor_function(0xe,8,4,in_cr5,in_cr1,in_cr2);
  }
  if (!(bool)in_OV) {
    software_interrupt(0x5e80);
    coprocessor_store(0xe,in_cr7,unaff_lr + -0x38);
  }
  if ((bool)in_NG) {
    coprocessor_movefromRt(0xe,3,3,in_cr10,in_cr11);
    coprocessor_movefromRt(0xe,3,3,in_cr8,in_cr9);
  }
  if (!(bool)in_OV) {
    pbVar5 = unaff_lr + param_1 * -0x4000;
    uVar4 = *(undefined4 *)unaff_lr;
    unaff_lr = pbVar5 + 0x55e;
    *(undefined4 *)pbVar5 = uVar4;
  }
  if (in_NG == in_OV) {
    coprocessor_function(0,7,5,in_cr0,in_cr3,in_cr14);
    coprocessor_movefromRt(0xe,3,3,in_cr1,in_cr2);
  }
  if ((bool)in_OV) {
    software_interrupt(0xde70);
    coprocessor_loadlong(0xe,in_cr6,unaff_lr + 0x378);
  }
  bVar8 = false;
  if (bVar7) {
    lVar2 = (ulonglong)in_r12 * ZEXT48(unaff_lr);
    in_NG = lVar2 < 0;
    bVar8 = lVar2 == 0;
    unaff_r6 = (byte)lVar2;
    unaff_lr = (byte *)((ulonglong)lVar2 >> 0x20);
  }
  if (bVar8 || in_NG != in_OV) {
    coprocessor_function(0xe,6,3,in_cr13,in_cr10,in_cr11);
  }
  else {
    coprocessor_function(0xe,6,3,in_cr12,in_cr8,in_cr9);
  }
  if ((bool)in_OV) {
    *unaff_lr = unaff_r6;
    unaff_lr = unaff_lr + param_1 * 0x4000 + 0x5ee;
  }
  coprocessor_moveto(0,3,4,param_1,in_cr3,in_cr14);
  if (!(bool)in_OV) {
    coprocessor_function(0xe,6,3,in_cr8,in_cr1,in_cr2);
  }
  if (!(bool)in_NG) {
    software_interrupt(0x5e60);
    coprocessor_load(0xe,in_cr5,unaff_lr + -0x78);
  }
  bVar7 = false;
  if (bVar8) {
    pbVar5 = (byte *)((uint)unaff_lr >> (in_r12 & 0xff));
    in_CY = pbVar5 <= unaff_lr;
    in_OV = SBORROW4((int)unaff_lr,(int)pbVar5);
    in_NG = (int)unaff_lr - (int)pbVar5 < 0;
    bVar7 = unaff_lr == pbVar5;
  }
  if (bVar7) {
    coprocessor_movefromRt(0xe,2,2,in_cr10,in_cr11);
  }
  if ((bool)in_NG) {
    param_1 = coprocessor_movefromRt(0xe,2,2,in_cr8,in_cr9);
  }
  else {
    puVar6 = (uint *)(unaff_lr + param_1 * -0x4000);
    bVar3 = *unaff_lr;
    unaff_lr = (byte *)((int)puVar6 + 0x55e);
    *puVar6 = (uint)bVar3;
  }
  if (in_NG == in_OV) {
    coprocessor_function(0,5,5,in_cr0,in_cr3,in_cr14);
    coprocessor_movefromRt(0xe,2,2,in_cr1,in_cr2);
  }
  if ((bool)in_NG) {
    software_interrupt(0xde50);
    coprocessor_loadlong(0xe,in_cr4,unaff_lr + 0x378);
  }
  bVar8 = false;
  if (bVar7) {
    uVar1 = (uint)unaff_lr >> 0x18 | (int)unaff_lr << 8;
    in_CY = CARRY4((uint)unaff_lr,uVar1);
    in_OV = SCARRY4((int)unaff_lr,uVar1);
    in_NG = (int)(unaff_lr + uVar1) < 0;
    bVar8 = unaff_lr + uVar1 == (byte *)0x0;
  }
  if (bVar8 || in_NG != in_OV) {
    coprocessor_function(0xe,4,2,in_cr13,in_cr10,in_cr11);
  }
  else {
    coprocessor_function(0xe,4,2,in_cr12,in_cr8,in_cr9);
  }
  if ((bool)in_NG) {
    unaff_lr = unaff_lr + param_1 * 0x4000 + 0x5be;
  }
  coprocessor_moveto(0,2,4,param_1,in_cr3,in_cr14);
  if (!(bool)in_OV) {
    coprocessor_function(0xe,4,2,in_cr11,in_cr1,in_cr2);
  }
  if (!(bool)in_CY) {
    software_interrupt(0x3e40);
    unaff_lr = unaff_lr + -0xf8;
    coprocessor_load(0xe,in_cr3,unaff_lr);
  }
  bVar7 = false;
  if (bVar8) {
    pbVar5 = (byte *)((uint)unaff_lr >> (in_r12 & 0x1f) | (int)unaff_lr << 0x20 - (in_r12 & 0x1f));
    in_CY = unaff_lr <= pbVar5;
    in_OV = SBORROW4((int)pbVar5,(int)unaff_lr);
    param_4 = (int)pbVar5 - (int)unaff_lr;
    in_NG = param_4 < 0;
    bVar7 = param_4 == 0;
  }
  bVar3 = (byte)param_4;
  if ((bool)in_NG) {
    coprocessor_movefromRt(0xe,1,1,in_cr10,in_cr11);
  }
  else {
    uVar4 = coprocessor_movefromRt(0xe,1,1,in_cr8,in_cr9);
    bVar3 = (byte)uVar4;
  }
  if (!(bool)in_CY) {
    *unaff_lr = bVar3;
    unaff_lr = unaff_lr + param_1 * 0x4000 + 0x5ee;
  }
  if (in_NG == in_OV) {
    coprocessor_function(0,3,5,in_cr0,in_cr3,in_cr14);
    coprocessor_movefromRt(0xe,1,1,in_cr1,in_cr2);
  }
  if ((bool)in_CY) {
    software_interrupt(0xde30);
    coprocessor_loadlong(0xe,in_cr2,unaff_lr + 0x378);
  }
  if (bVar7 || in_NG != in_OV) {
    coprocessor_function(0xe,2,1,in_cr9,in_cr10,in_cr11);
  }
  if (in_NG != in_OV) {
    coprocessor_function(0xe,2,1,in_cr9,in_cr8,in_cr9);
  }
  if ((bool)in_CY) {
    unaff_lr = unaff_lr + param_1 * 0x4000 + 0x5be;
  }
  coprocessor_moveto(0,1,2,param_1,in_cr3,in_cr14);
  if (!(bool)in_OV) {
    coprocessor_function(0xe,2,1,in_cr11,in_cr1,in_cr2);
  }
  if (!bVar7) {
    software_interrupt(0x2e20);
    coprocessor_loadlong(0xe,in_cr1,unaff_lr + -0x138);
  }
  if (!(bool)in_NG) {
    coprocessor_movefromRt(0xe,0,0,in_cr10,in_cr11);
  }
  if (!(bool)in_OV) {
    coprocessor_movefromRt(0xe,0,0,in_cr8,in_cr9);
  }
  if (!bVar7) {
    pbVar5 = unaff_lr + param_1 * 0x4000;
    uVar4 = *(undefined4 *)unaff_lr;
    unaff_lr = pbVar5 + 0x5be;
    *pbVar5 = (byte)uVar4;
  }
  if (in_NG == in_OV) {
    coprocessor_function(0,1,5,in_cr0,in_cr3,in_cr14);
    coprocessor_movefromRt(0xe,0,0,in_cr1,in_cr2);
  }
  if (bVar7) {
    software_interrupt(0xae10);
    coprocessor_loadlong(0xe,in_cr0,unaff_lr + 0x378);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

