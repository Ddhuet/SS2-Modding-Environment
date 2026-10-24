
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d82488(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  char *unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  uint unaff_lr;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined4 in_cr14;
  
  if (!(bool)in_CY) {
    unaff_lr = 0x8d8248c;
    param_1 = func_0x07c6f9a0();
    param_3 = extraout_r2;
  }
  if ((bool)in_CY) {
    in_NG = (int)(unaff_lr - 0x4c00) < 0;
    in_ZR = unaff_lr == 0x4c00;
  }
  if (!(bool)in_NG) {
    coprocessor_storelong(0xc,in_cr6,&stack0x00000044);
  }
  if ((!(bool)in_CY || unaff_lr < 0x4c00) || (bool)in_ZR) {
    coprocessor_movefromRt(8,6,4,in_cr14,in_cr9);
    unaff_r4[-0xffffffff00000004] = -0x60;
    unaff_r4[-0xffffffff00000003] = '$';
    unaff_r4[-0xffffffff00000002] = -0x28;
    unaff_r4[-0xffffffff00000001] = '\b';
    *(undefined4 *)(unaff_r4 + -8) = unaff_r10;
    *(undefined4 *)(unaff_r4 + -0xc) = unaff_r8;
    *(undefined4 *)(unaff_r4 + -0x10) = unaff_r6;
    *(char **)(unaff_r4 + -0x14) = unaff_r4;
    *(undefined4 *)(unaff_r4 + -0x18) = param_3;
    *(undefined4 *)(unaff_r4 + -0x1c) = param_1;
  }
  if ((bool)in_NG) {
    *unaff_r4 = (char)unaff_r4 + -0x44;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

