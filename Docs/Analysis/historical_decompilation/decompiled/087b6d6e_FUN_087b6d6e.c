
/* WARNING: Control flow encountered bad instruction data */

void FUN_087b6d6e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr12;
  undefined4 in_cr14;
  
  if (in_NG == (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (undefined1 *)register0x00000054;
  if (in_NG == (bool)in_OV) {
    puVar1 = &stack0x000002e4;
    coprocessor_store(7,in_cr9,&stack0x00000000);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    coprocessor_loadlong(7,in_cr7,puVar1);
  }
  coprocessor_function2(0xc,0xd,6,in_cr6,in_cr14,in_cr12);
  if (in_ZR || in_NG != (bool)in_OV) {
    coprocessor_loadlong(0xe,in_cr10,0x87b70ba);
    software_interrupt(0xddeedd);
  }
  if (!in_CY || in_ZR) {
    *unaff_r4 = 0x87b6d8e;
    unaff_r4[-1] = unaff_lr;
    unaff_r4[-2] = in_r12;
    unaff_r4[-3] = unaff_r11;
    unaff_r4[-4] = unaff_r10;
    unaff_r4[-5] = unaff_r9;
    unaff_r4[-6] = unaff_r8;
    unaff_r4[-7] = unaff_r7;
    unaff_r4[-8] = unaff_r6;
    unaff_r4[-9] = unaff_r5;
    unaff_r4[-10] = param_4;
    unaff_r4[-0xb] = param_3;
    unaff_r4[-0xc] = param_2;
    unaff_r4 = unaff_r4 + -0xd;
  }
  if (!in_CY) {
    unaff_lr = *(undefined4 *)(unaff_r11 + -4);
    param_1 = *(undefined4 *)(unaff_r11 + -0x10);
  }
  if (!in_NG) {
    unaff_r9 = unaff_r9 + -5;
    param_1 = *unaff_r9;
  }
  if (in_NG != (bool)in_OV) {
    unaff_r9[-1] = unaff_lr;
    unaff_r9[-2] = unaff_r10;
    unaff_r9[-3] = unaff_r4;
    unaff_r9[-4] = param_1;
    func_0x0a23fe2e();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

