
/* WARNING: Control flow encountered bad instruction data */

void FUN_08287acc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int iVar2;
  undefined4 *unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr14;
  undefined8 uVar3;
  undefined1 auStack_20a1 [8353];
  
  uVar3 = CONCAT44(param_2,param_1);
  if (in_NG == in_OV) {
    unaff_lr = (undefined4 *)0x8287ad0;
    uVar3 = func_0x06eb51d8();
    in_r12 = extraout_r12;
  }
  uVar1 = (undefined4)uVar3;
  if (!(bool)in_NG) {
    *(BADSPACEBASE **)(unaff_r5 + -4) = register0x00000054;
    *(undefined4 *)(unaff_r5 + -8) = unaff_r9;
    *(undefined4 *)(unaff_r5 + -0xc) = uVar1;
  }
  if ((bool)in_CY) {
    coprocessor_storelong(1,in_cr5,(int)((ulonglong)uVar3 >> 0x20) + -0x17c);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = (undefined4 *)0x8287ae0;
    uVar1 = func_0x07943b0c();
    in_r12 = extraout_r12_00;
  }
  if (in_NG != in_OV) {
    software_interrupt(0xbfbdc3);
  }
  iVar2 = in_r12;
  if (!(bool)in_ZR) {
    iVar2 = in_r12 + 0x33c;
    coprocessor_loadlong(1,in_cr14,in_r12);
  }
  if (!(bool)in_OV) {
    in_CY = (undefined1 *)0x20a0 < &stack0x00000000;
    in_OV = SBORROW4((int)&stack0x00000000,0x20a1);
    in_NG = (int)auStack_20a1 < 0;
    in_ZR = &stack0x00000000 == (undefined1 *)0x20a1;
  }
  if ((bool)in_CY) {
    *(char *)(unaff_r6 + -0x275) = (char)unaff_r6;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    uRam08287af8 = SUB41(unaff_lr,0);
  }
  if (in_NG != in_OV) {
    coprocessor_load(0xd,in_cr11,unaff_r8);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_load(2,in_cr11,iVar2 + 0x2c4);
  }
  if (!(bool)in_ZR) {
    *unaff_lr = uVar1;
  }
  if ((bool)in_NG) {
    coprocessor_function(7,4,1,in_cr3,in_cr7,in_cr10);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

