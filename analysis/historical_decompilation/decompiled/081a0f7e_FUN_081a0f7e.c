
/* WARNING: Control flow encountered bad instruction data */

void FUN_081a0f7e(undefined4 param_1,int param_2,int param_3)

{
  int unaff_r4;
  undefined4 unaff_r5;
  int unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (in_NG == (bool)in_OV) {
    param_3 = param_3 + 0x30c;
    coprocessor_load(5,in_cr11,param_3);
  }
  else {
    *unaff_r11 = unaff_r10;
    *(undefined4 *)(unaff_r7 + 0x4ad) = unaff_r10;
  }
  if (!in_ZR && in_NG == (bool)in_OV) {
    coprocessor_loadlong(2,in_cr13,param_3);
  }
  if (in_NG) {
    *(BADSPACEBASE **)(unaff_r4 + -4) = register0x00000054;
    *(undefined4 *)(unaff_r4 + -8) = in_r12;
    *(undefined4 *)(unaff_r4 + -0xc) = unaff_r9;
    *(undefined4 *)(unaff_r4 + -0x10) = unaff_r5;
    *(undefined4 *)(unaff_r4 + -0x14) = param_1;
    coprocessor_function(1,4,2,in_cr4,in_cr9,in_cr3);
  }
  if (!in_CY) {
    coprocessor_function(4,4,2,in_cr4,in_cr1,in_cr11);
    coprocessor_storelong(8,in_cr3,param_2 + -0xe0);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    software_interrupt(0xdbe5f5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

