
/* WARNING: Control flow encountered bad instruction data */

void FUN_08819658(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  char *unaff_r4;
  char *pcVar1;
  uint unaff_r5;
  undefined4 *unaff_r6;
  int unaff_r8;
  int iVar2;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int iVar3;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_OV;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if ((bool)in_OV) {
    unaff_lr = 0x881965c;
    func_0x07706d4c();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if ((bool)in_NG) {
    unaff_r4[-0x444] = (char)unaff_r4;
    pcVar1 = unaff_r4 + -0x444;
    *unaff_r4 = (char)pcVar1;
  }
  else {
    unaff_r5 = (uint)*(byte *)(unaff_r5 - 0x555);
    pcVar1 = unaff_r4;
  }
  coprocessor_moveto(0xd,7,6,&stack0x00000000,in_cr14,in_cr13);
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x000001b4);
  }
  if ((bool)in_OV) {
    coprocessor_loadlong(0xd,in_cr13,unaff_r6 + 0xcd);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    iVar2 = unaff_r8 + -0x22c;
    coprocessor_storelong(0xb,in_cr6,unaff_r8);
  }
  else {
    coprocessor_loadlong(6,in_cr12,in_r12 + 0x1b0);
    iVar2 = unaff_r8;
  }
  if (in_NG != in_OV) {
    unaff_r6 = (undefined4 *)SignedSaturate((int)unaff_r5 >> 0x16,0x1c);
    SignedDoesSaturate((int)unaff_r5 >> 0x16,0x1c);
  }
  if ((bool)in_NG) {
    *pcVar1 = (char)pcVar1 + -0x44;
  }
  coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
  iVar3 = coprocessor_movefromRt(0xd,6,6,in_cr14,in_cr14);
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr13,iVar3 + 0x374);
    coprocessor_loadlong(0xd,in_cr6,iVar3 + 0x358);
    *(int *)in_r12 = iVar3;
    in_r12 = in_r12 * 0x8000001;
  }
  else {
    *unaff_r6 = param_3;
    unaff_r6[1] = param_4;
    unaff_r6[2] = unaff_r5;
    unaff_r6[3] = unaff_r6;
    unaff_r6[4] = iVar2;
    unaff_r6[5] = unaff_r9;
    unaff_r6[6] = unaff_r11;
    unaff_r6[7] = iVar3;
    unaff_r6[8] = unaff_lr;
  }
  if (!(bool)in_NG) {
    unaff_lr = 0x88196a4;
    func_0x09ef6c7c();
    in_r12 = extraout_r12_00;
  }
  coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
  coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
  coprocessor_moveto(0xe,7,6,unaff_lr,in_cr14,in_cr14);
  coprocessor_movefromRt(0xd,6,6,in_cr14,in_cr13);
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr6,iVar3 + 0x374);
    coprocessor_store(0xc,in_cr13,in_r12 + 0x218);
  }
  if ((bool)in_OV) {
    coprocessor_storelong(6,in_cr8,unaff_r6 + 0xb5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

