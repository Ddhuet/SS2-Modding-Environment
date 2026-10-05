
/* WARNING: Control flow encountered bad instruction data */

void FUN_08df80d8(int param_1)

{
  uint uVar1;
  int unaff_r9;
  int unaff_r10;
  int *unaff_lr;
  int *piVar2;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined1 uVar3;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_NG != in_OV) {
    unaff_lr = unaff_lr + -0x140;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_function(0,0xb,6,in_cr0,in_cr1,in_cr14);
    coprocessor_moveto(0xe,5,5,&stack0x00000000,in_cr15,in_cr0);
  }
  if (in_NG == in_OV) {
    coprocessor_store(0xe,in_cr12,param_1 + -0x2b8);
    unaff_lr = (int *)0x8df80f0;
    param_1 = func_0x075a336c();
  }
  uVar3 = false;
  if ((bool)in_ZR) {
    uVar1 = (uint)unaff_lr >> 0x14 | (int)unaff_lr << 0xc;
    in_CY = CARRY4((uint)unaff_lr,uVar1);
    in_OV = SCARRY4((int)unaff_lr,uVar1);
    unaff_r10 = (int)unaff_lr + uVar1;
    in_NG = unaff_r10 < 0;
    uVar3 = unaff_r10 == 0;
  }
  if ((bool)in_CY && !(bool)uVar3) {
    coprocessor_function(0xe,10,5,in_cr14,in_cr8,in_cr9);
    coprocessor_function(0xe,10,5,in_cr12,in_cr6,in_cr7);
  }
  piVar2 = unaff_lr;
  if (in_NG == in_OV) {
    piVar2 = unaff_lr + 0x140;
    *unaff_lr = unaff_r10;
  }
  if (!(bool)in_NG) {
    coprocessor_function(0,10,7,in_cr0,in_cr1,in_cr14);
  }
  if ((bool)uVar3) {
    coprocessor_function(0xe,9,5,in_cr5,in_cr15,in_cr0);
  }
  if (!(bool)in_CY || (bool)uVar3) {
    coprocessor_store(0xe,in_cr1,param_1 + -0x278);
    piVar2 = (int *)0x8df8114;
    param_1 = func_0x0a59f210();
  }
  if ((bool)uVar3) {
    unaff_r9 = (int)piVar2 - ((int)piVar2 >> 0x14);
  }
  if ((bool)in_NG) {
    coprocessor_movefromRt(0xe,4,4,in_cr8,in_cr9);
  }
  if ((bool)in_CY) {
    coprocessor_movefromRt(0xe,4,4,in_cr6,in_cr7);
  }
  if (!(bool)in_CY || (bool)uVar3) {
    *piVar2 = unaff_r9;
  }
  if (!(bool)uVar3 && in_NG == in_OV) {
    coprocessor_function(0,9,6,in_cr0,in_cr1,in_cr14);
    coprocessor_moveto(0xe,4,4,&stack0x00000000,in_cr15,in_cr0);
  }
  if ((bool)in_CY && !(bool)uVar3) {
    coprocessor_store(0xe,in_cr12,param_1 + -0x238);
    func_0x0759b3b4();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

