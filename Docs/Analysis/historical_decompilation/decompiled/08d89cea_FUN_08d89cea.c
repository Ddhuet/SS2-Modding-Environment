
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d89cea(void)

{
  int in_r3;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int unaff_r5;
  int iVar1;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int extraout_r12_01;
  undefined1 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr14;
  
  if (!(bool)in_NG) {
    unaff_lr = 0xf6;
    func_0x07c5ae0a();
    in_r3 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0xfa;
    func_0x07c5ae4e();
    in_r3 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0xfe;
    func_0x07c9ee6e();
    in_r3 = extraout_r3_01;
    in_r12 = extraout_r12_01;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xe,in_cr14,in_r12 + 0x3b8);
    iVar1 = unaff_r5 + 0x3b4;
    coprocessor_load(0xe,in_cr14,unaff_r5);
  }
  else {
    coprocessor_storelong(0xb,in_cr5,in_r12);
    iVar1 = unaff_r5;
  }
  if (in_NG != in_OV) {
    *(undefined1 *)(iVar1 + -0xedd) = unaff_lr;
  }
  if ((bool)in_NG) {
    *(undefined1 *)(in_r3 + -0xddc) = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

