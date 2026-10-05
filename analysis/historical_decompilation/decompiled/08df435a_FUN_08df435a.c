
/* WARNING: Control flow encountered bad instruction data */

void FUN_08df435a(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int unaff_r4;
  int unaff_r6;
  byte *unaff_lr;
  uint *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar5;
  bool bVar6;
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
    unaff_lr = unaff_lr + 0x5de;
  }
  if (in_ZR || in_NG != in_OV) {
    param_1 = coprocessor_movefromRt(0,5,6,in_cr3,in_cr14);
    coprocessor_movefromRt(0xe,5,5,in_cr1,in_cr2);
  }
  if (in_NG == in_OV) {
    software_interrupt(0xdeb0);
    coprocessor_loadlong(0xe,in_cr10,unaff_lr + 0x378);
  }
  if (in_ZR) {
    unaff_lr = unaff_lr + 0xce;
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_function(0xe,10,5,in_cr13,in_cr10,in_cr11);
    coprocessor_function(0xe,10,5,in_cr13,in_cr8,in_cr9);
  }
  if (in_NG == in_OV) {
    unaff_lr = unaff_lr + param_1 * 0x4000 + 0x5de;
    coprocessor_function(0,10,4,in_cr0,in_cr3,in_cr14);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_function(0xe,10,5,in_cr8,in_cr1,in_cr2);
  }
  if (!in_CY || in_ZR) {
    software_interrupt(0xdea0);
    coprocessor_storelong(0xe,in_cr9,unaff_lr + 0x338);
  }
  bVar5 = false;
  bVar7 = in_CY;
  if (in_ZR) {
    pbVar3 = (byte *)((uint)unaff_lr >> 0x19);
    bVar7 = pbVar3 < unaff_lr || (uint)((int)unaff_lr - (int)pbVar3) < (uint)in_CY;
    in_OV = SBORROW4((int)unaff_lr,(int)pbVar3) !=
            SBORROW4((int)unaff_lr - (int)pbVar3,(uint)!in_CY);
    in_NG = (int)unaff_lr - (int)(pbVar3 + !in_CY) < 0;
    bVar5 = unaff_lr == pbVar3 + !in_CY;
  }
  if (bVar5 || in_NG != in_OV) {
    coprocessor_movefromRt(0xe,4,4,in_cr10,in_cr11);
    coprocessor_movefromRt(0xe,4,4,in_cr8,in_cr9);
  }
  if (!bVar7 || bVar5) {
    unaff_lr = unaff_lr + param_1 * 0x4000 + 0x5de;
  }
  if (bVar5 || in_NG != in_OV) {
    param_1 = coprocessor_movefromRt(0,4,6,in_cr3,in_cr14);
    coprocessor_movefromRt(0xe,4,4,in_cr1,in_cr2);
  }
  if (bVar7 && !bVar5) {
    software_interrupt(0xde90);
    coprocessor_loadlong(0xe,in_cr8,unaff_lr + 0x378);
  }
  if (bVar5) {
    unaff_lr = unaff_lr + 0xce;
  }
  if (bVar5 || in_NG != in_OV) {
    coprocessor_function(0xe,8,4,in_cr13,in_cr10,in_cr11);
    coprocessor_function(0xe,8,4,in_cr13,in_cr8,in_cr9);
  }
  if (bVar7 && !bVar5) {
    puVar2 = (uint *)(unaff_lr + param_1 * 0x4000);
    bVar1 = *unaff_lr;
    unaff_lr = (byte *)((int)puVar2 + 0x5de);
    *puVar2 = (uint)bVar1;
  }
  if (in_NG != in_OV) {
    coprocessor_function(0,8,6,in_cr0,in_cr3,in_cr14);
  }
  if ((bool)in_OV) {
    coprocessor_function(0xe,8,4,in_cr12,in_cr1,in_cr2);
  }
  else {
    software_interrupt(0x6e80);
    unaff_lr = unaff_lr + -0x2f8;
    coprocessor_storelong(0xe,in_cr7,unaff_lr);
  }
  bVar6 = false;
  bVar8 = bVar7;
  if (bVar5) {
    pbVar3 = (byte *)((uint)unaff_lr >> 0x18 | (int)unaff_lr << 8);
    bVar8 = pbVar3 < unaff_lr || (uint)((int)unaff_lr - (int)pbVar3) < (uint)bVar7;
    in_OV = SBORROW4((int)unaff_lr,(int)pbVar3) !=
            SBORROW4((int)unaff_lr - (int)pbVar3,(uint)!bVar7);
    in_NG = (int)unaff_lr - (int)(pbVar3 + !bVar7) < 0;
    bVar6 = unaff_lr == pbVar3 + !bVar7;
  }
  if (bVar6 || in_NG != in_OV) {
    coprocessor_movefromRt(0xe,3,3,in_cr10,in_cr11);
    coprocessor_movefromRt(0xe,3,3,in_cr8,in_cr9);
  }
  if (!(bool)in_OV) {
    unaff_lr = unaff_lr + param_1 * 0x4000 + 0x5de;
  }
  if (bVar6 || in_NG != in_OV) {
    param_1 = coprocessor_movefromRt(0,3,6,in_cr3,in_cr14);
    coprocessor_movefromRt(0xe,3,3,in_cr1,in_cr2);
  }
  if ((bool)in_OV) {
    software_interrupt(0xde70);
    coprocessor_loadlong(0xe,in_cr6,unaff_lr + 0x378);
  }
  pbVar3 = unaff_lr;
  if (bVar6) {
    pbVar3 = unaff_lr + 0xce;
    unaff_r6 = (int)(char)*unaff_lr;
  }
  if (bVar6 || in_NG != in_OV) {
    coprocessor_function(0xe,6,3,in_cr13,in_cr10,in_cr11);
  }
  if (bVar8 && !bVar6) {
    coprocessor_function(0xe,6,3,in_cr13,in_cr8,in_cr9);
  }
  if ((bool)in_OV) {
    pbVar4 = pbVar3 + param_1 * 0x4000;
    *(int *)pbVar3 = unaff_r6;
    pbVar3 = pbVar4 + 0x58e;
    *pbVar4 = (byte)unaff_r6;
  }
  if (in_NG != in_OV) {
    coprocessor_function(0,6,1,in_cr0,in_cr3,in_cr14);
    coprocessor_function(0xe,6,3,in_cr11,in_cr1,in_cr2);
  }
  if (!(bool)in_NG) {
    software_interrupt(0xbe60);
    pbVar3 = pbVar3 + -0x338;
    coprocessor_storelong(0xe,in_cr5,pbVar3);
  }
  bVar5 = false;
  bVar7 = bVar8;
  if (bVar6) {
    pbVar4 = (byte *)((uint)pbVar3 >> 0x18 | (int)pbVar3 << 8);
    bVar7 = pbVar4 < pbVar3 || (uint)((int)pbVar3 - (int)pbVar4) < (uint)bVar8;
    in_OV = SBORROW4((int)pbVar3,(int)pbVar4) != SBORROW4((int)pbVar3 - (int)pbVar4,(uint)!bVar8);
    in_NG = (int)pbVar3 - (int)(pbVar4 + !bVar8) < 0;
    bVar5 = pbVar3 == pbVar4 + !bVar8;
  }
  if ((bool)in_OV) {
    coprocessor_movefromRt(0xe,2,2,in_cr10,in_cr11);
  }
  if (bVar5 || in_NG != in_OV) {
    coprocessor_movefromRt(0xe,2,2,in_cr8,in_cr9);
  }
  if (!(bool)in_NG) {
    pbVar3 = pbVar3 + param_1 * 0x4000 + 0x5de;
  }
  if (bVar5 || in_NG != in_OV) {
    param_1 = coprocessor_movefromRt(0,2,6,in_cr3,in_cr14);
    coprocessor_movefromRt(0xe,2,2,in_cr1,in_cr2);
  }
  if ((bool)in_NG) {
    software_interrupt(0xde50);
    coprocessor_loadlong(0xe,in_cr4,pbVar3 + 0x378);
  }
  pbVar4 = pbVar3;
  if (bVar5) {
    pbVar4 = pbVar3 + 0xce;
    unaff_r4 = (int)(char)*pbVar3;
  }
  if (bVar5 || in_NG != in_OV) {
    coprocessor_function(0xe,4,2,in_cr13,in_cr10,in_cr11);
  }
  if (bVar7 && !bVar5) {
    coprocessor_function(0xe,4,2,in_cr8,in_cr8,in_cr9);
  }
  if ((bool)in_NG) {
    pbVar3 = pbVar4 + param_1 * 0x4000;
    *(int *)pbVar4 = unaff_r4;
    pbVar4 = pbVar3 + 0x58e;
    *pbVar3 = (byte)unaff_r4;
    coprocessor_moveto(0,2,5,param_1,in_cr3,in_cr14);
  }
  if (in_NG != in_OV) {
    coprocessor_function(0xe,4,2,in_cr11,in_cr1,in_cr2);
  }
  if (!bVar7) {
    software_interrupt(0xbe40);
    pbVar4 = pbVar4 + -0x2b8;
    coprocessor_storelong(0xe,in_cr3,pbVar4);
  }
  if (bVar5) {
    pbVar4 = pbVar4 + 0xce;
  }
  if (bVar5 || in_NG != in_OV) {
    coprocessor_movefromRt(0xe,1,1,in_cr10,in_cr11);
    coprocessor_movefromRt(0xe,1,1,in_cr8,in_cr9);
  }
  if (!bVar7) {
    pbVar4 = pbVar4 + param_1 * 0x4000 + 0x5de;
  }
  if (bVar5 || in_NG != in_OV) {
    param_1 = coprocessor_movefromRt(0,1,6,in_cr3,in_cr14);
    coprocessor_movefromRt(0xe,1,1,in_cr1,in_cr2);
  }
  if (bVar7) {
    software_interrupt(0xde30);
    coprocessor_store(0xe,in_cr2,pbVar4 + 0x238);
  }
  bVar6 = false;
  bVar8 = bVar7;
  if (bVar5) {
    bVar8 = (byte *)((int)pbVar4 * 0x2000000) < pbVar4 ||
            (uint)((int)pbVar4 * -0x1ffffff) < (uint)bVar7;
    in_OV = SBORROW4((int)pbVar4,(int)pbVar4 * 0x2000000) !=
            SBORROW4((int)pbVar4 * -0x1ffffff,(uint)!bVar7);
    param_3 = (int)pbVar4 * -0x1ffffff - (uint)!bVar7;
    in_NG = param_3 < 0;
    bVar6 = param_3 == 0;
  }
  if (bVar8 && !bVar6) {
    coprocessor_function(0xe,2,1,in_cr13,in_cr10,in_cr11);
  }
  if (!bVar6 && in_NG == in_OV) {
    coprocessor_function(0xe,2,1,in_cr8,in_cr8,in_cr9);
  }
  if (bVar8) {
    pbVar3 = pbVar4 + param_1 * 0x4000;
    *pbVar4 = (byte)param_3;
    pbVar4 = pbVar3 + 0x58e;
    *pbVar3 = (byte)param_3;
  }
  if (!bVar6 && in_NG == in_OV) {
    coprocessor_function(0,2,4,in_cr0,in_cr3,in_cr14);
  }
  if (in_NG != in_OV) {
    coprocessor_function(0xe,2,1,in_cr11,in_cr1,in_cr2);
  }
  if (bVar6) {
    pbVar3 = (byte *)((uint)pbVar4 >> 0x18 | (int)pbVar4 << 8);
    bVar5 = pbVar3 < pbVar4 || (uint)((int)pbVar4 - (int)pbVar3) < (uint)bVar8;
    in_OV = SBORROW4((int)pbVar4,(int)pbVar3) != SBORROW4((int)pbVar4 - (int)pbVar3,(uint)!bVar8);
    param_2 = (int)pbVar4 - (int)(pbVar3 + !bVar8);
    in_NG = param_2 < 0;
    bVar6 = param_2 == 0;
  }
  else {
    software_interrupt(0xce20);
    coprocessor_store(0xe,in_cr1,pbVar4 + 0x338);
    bVar5 = bVar8;
  }
  if (bVar5 && !bVar6) {
    coprocessor_movefromRt(0xe,0,0,in_cr10,in_cr11);
    coprocessor_movefromRt(0xe,0,0,in_cr8,in_cr9);
  }
  if (!bVar6) {
    *(int *)pbVar4 = param_2;
    pbVar4 = pbVar4 + param_1 * 0x4000 + 0x5de;
  }
  if (bVar6 || in_NG != in_OV) {
    param_1 = coprocessor_movefromRt(0,0,6,in_cr3,in_cr14);
    coprocessor_movefromRt(0xe,0,0,in_cr1,in_cr2);
  }
  bVar7 = false;
  bVar8 = bVar5;
  if (bVar6) {
    software_interrupt(0xde10);
    pbVar4 = pbVar4 + -0x238;
    coprocessor_store(0xe,in_cr0,pbVar4);
    pbVar3 = (byte *)((uint)pbVar4 >> 0x19);
    bVar8 = pbVar3 < pbVar4 || (uint)((int)pbVar4 - (int)pbVar3) < (uint)bVar5;
    in_OV = SBORROW4((int)pbVar4,(int)pbVar3) != SBORROW4((int)pbVar4 - (int)pbVar3,(uint)!bVar5);
    param_1 = (int)pbVar4 - (int)(pbVar3 + !bVar5);
    in_NG = param_1 < 0;
    bVar7 = param_1 == 0;
  }
  if (bVar8 && !bVar7) {
    coprocessor_function(0xe,0,0,in_cr13,in_cr10,in_cr11);
  }
  if (bVar8) {
    coprocessor_function(0xe,0,0,in_cr12,in_cr8,in_cr9);
  }
  if (bVar7) {
    *(int *)pbVar4 = param_1;
    *(int *)(pbVar4 + param_1 * -0x4000) = param_1;
  }
  if (bVar8) {
    coprocessor_function(0,0,6,in_cr0,in_cr3,in_cr14);
  }
  if (in_NG != in_OV) {
    coprocessor_function(0xe,0,0,in_cr5,in_cr1,in_cr2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

