
/* WARNING: Control flow encountered bad instruction data */

void FUN_08dfbf9a(int param_1)

{
  undefined4 uVar1;
  int unaff_r9;
  uint uVar2;
  undefined4 unaff_r11;
  uint in_r12;
  undefined4 *unaff_lr;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar5;
  bool bVar6;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  puVar3 = unaff_lr;
  if (in_NG != (bool)in_OV) {
    puVar3 = (undefined4 *)((int)unaff_lr + -0x53e);
    *unaff_lr = unaff_r11;
  }
  if (in_NG) {
    param_1 = coprocessor_movefromRt(0,5,2,in_cr3,in_cr14);
  }
  if (in_CY) {
    coprocessor_movefromRt(0xe,5,5,in_cr1,in_cr2);
  }
  if (in_NG == (bool)in_OV) {
    software_interrupt(0xbeb0);
    puVar3 = puVar3 + -0x7e;
    coprocessor_loadlong(0xe,in_cr10,puVar3);
  }
  bVar5 = false;
  if (in_ZR) {
    uVar2 = (uint)puVar3 >> (in_r12 & 0x1f) | (int)puVar3 << 0x20 - (in_r12 & 0x1f);
    in_CY = (in_r12 & 0xff) == 0 && in_CY || (in_r12 & 0xff) != 0 && SUB41(uVar2 >> 0x1f,0);
    uVar2 = (uint)puVar3 ^ uVar2;
    in_NG = (int)uVar2 < 0;
    bVar5 = uVar2 == 0;
  }
  if (in_NG) {
    coprocessor_function(0xe,10,5,in_cr3,in_cr8,in_cr9);
  }
  else {
    coprocessor_function(0xe,10,5,in_cr10,in_cr10,in_cr11);
  }
  if (in_NG == (bool)in_OV) {
    puVar3 = (undefined4 *)((int)puVar3 + param_1 * 0x4000 + -0x5de);
  }
  if (in_CY) {
    coprocessor_function(0,10,2,in_cr0,in_cr3,in_cr14);
    coprocessor_function(0xe,10,5,in_cr5,in_cr1,in_cr2);
  }
  if (!in_CY || bVar5) {
    software_interrupt(0x1ea0);
    puVar3 = puVar3 + -0xe;
    coprocessor_loadlong(0xe,in_cr9,puVar3);
  }
  bVar6 = false;
  if (bVar5) {
    puVar4 = (undefined4 *)((uint)puVar3 >> 0x18);
    in_CY = puVar4 <= puVar3;
    in_OV = SBORROW4((int)puVar3,(int)puVar4);
    unaff_r9 = (int)puVar3 - (int)puVar4;
    in_NG = unaff_r9 < 0;
    bVar6 = unaff_r9 == 0;
  }
  if (in_CY && !bVar6) {
    coprocessor_movefromRt(0xe,4,4,in_cr10,in_cr11);
  }
  if (!in_NG) {
    coprocessor_movefromRt(0xe,4,4,in_cr8,in_cr9);
  }
  if (!in_CY || bVar6) {
    *(char *)puVar3 = (char)unaff_r9;
    puVar3 = (undefined4 *)((int)puVar3 + param_1 * -0x4000 + 0x57e);
  }
  if (bVar6) {
    coprocessor_function(0,9,2,in_cr0,in_cr3,in_cr14);
  }
  if (in_NG != (bool)in_OV) {
    coprocessor_movefromRt(0xe,4,4,in_cr1,in_cr2);
  }
  if (in_CY && !bVar6) {
    software_interrupt(0xbe90);
    puVar3 = puVar3 + 0x3e;
    coprocessor_load(0xe,in_cr8,puVar3);
  }
  if (in_CY) {
    coprocessor_function(0xe,8,4,in_cr14,in_cr10,in_cr11);
  }
  if (bVar6 || in_NG != (bool)in_OV) {
    coprocessor_function(0xe,8,4,in_cr4,in_cr8,in_cr9);
  }
  if (in_CY && !bVar6) {
    puVar4 = puVar3 + param_1 * 0x1000;
    uVar1 = *puVar3;
    puVar3 = (undefined4 *)((int)puVar4 + 0x5be);
    *(char *)puVar4 = (char)uVar1;
  }
  if (in_NG != (bool)in_OV) {
    coprocessor_function(0,8,1,in_cr0,in_cr3,in_cr14);
  }
  if (!(bool)in_OV) {
    coprocessor_function(0xe,8,4,in_cr11,in_cr1,in_cr2);
    software_interrupt(0xe80);
    coprocessor_storelong(0xe,in_cr7,puVar3 + -0xce);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

