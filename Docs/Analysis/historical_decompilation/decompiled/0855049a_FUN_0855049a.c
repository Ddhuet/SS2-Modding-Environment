
/* WARNING: Control flow encountered bad instruction data */

void FUN_0855049a(uint param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  int iVar1;
  uint unaff_r4;
  undefined4 unaff_r9;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint unaff_lr;
  undefined4 *puVar5;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  puVar3 = &stack0x0000034c;
  coprocessor_loadlong2(5,in_cr11,&stack0x0000034c);
  if ((bool)in_ZR || in_NG != in_OV) {
    unaff_lr = param_1 & 0xfffffc13;
  }
  coprocessor_loadlong2(4,in_cr14,unaff_lr + 0x2d4);
  if (!(bool)in_ZR && in_NG == in_OV) {
    puVar3 = (undefined1 *)(uint)*param_4;
  }
  coprocessor_loadlong2(0,in_cr12,unaff_lr + 0x5a8);
  if ((bool)in_ZR || in_NG != in_OV) {
    in_CY = 0;
    uVar2 = unaff_lr + 0x5a8 & 0xc8bfffff;
    in_NG = (int)uVar2 < 0;
    in_ZR = uVar2 == 0;
  }
  uVar2 = coprocessor_movefromRt(5,7,6,in_cr15,in_cr3);
  software_interrupt(0xefe4f8);
  coprocessor_function2(0,0xf,7,in_cr12,in_cr15,in_cr4);
  software_interrupt(0xefefef);
  coprocessor_loadlong2(0xd,in_cr9,0x8550816);
  puVar5 = (undefined4 *)0x85504ca;
  iVar1 = func_0x0840f4bc();
  coprocessor_function2(0xd,0xf,7,in_cr9,in_cr15,in_cr4);
  puVar4 = puVar3 + 0x3f4;
  coprocessor_loadlong2(0xd,in_cr15,puVar3 + 0x3f4);
  if (!(bool)in_CY || (bool)in_ZR) {
    coprocessor_load(0xe,in_cr11,puVar3 + 0x7c0);
    coprocessor_load(0,in_cr7,puVar3 + 0x5e0);
  }
  if (in_NG != in_OV) {
    uVar2 = coprocessor_movefromRt(0,6,6,in_cr0,in_cr0);
  }
  if (!(bool)in_OV) {
    software_interrupt(0xd99d7b);
    puVar5 = (undefined4 *)0x85504e6;
    iVar1 = func_0x06cc1f5e();
  }
  if ((bool)in_OV) {
    puVar4 = puVar3 + 0x135b;
  }
  if (!(bool)in_NG) {
    puVar4 = (undefined1 *)((uVar2 & 0xffff) + iVar1 * 0x8000000);
    puVar5 = (undefined4 *)((int)puVar5 + -0x64f);
  }
  if ((bool)in_OV) {
    unaff_r9 = *puVar5;
  }
  if (!(bool)in_NG) {
    unaff_r4 = unaff_r4 - 0x44f;
  }
  if (!(bool)in_OV) {
    uVar2 = unaff_r4 >> 0x1c | unaff_r4 << 4;
    in_OV = SCARRY4((int)puVar4,uVar2);
    uVar2 = (int)puVar4 + uVar2;
    in_NG = (int)uVar2 < 0;
  }
  if (in_NG != in_OV) {
    coprocessor_moveto(5,7,5,uVar2,in_cr7,in_cr5);
    coprocessor_moveto(0xd,6,4,unaff_r9,in_cr6,in_cr0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

