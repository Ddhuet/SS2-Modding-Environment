
/* WARNING: Control flow encountered bad instruction data */

void FUN_086c6eda(undefined4 *param_1)

{
  int unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int in_r12;
  int extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr7;
  
  if (in_NG != in_OV) {
    param_1[-1] = 0x86c6ee2;
    param_1[-2] = register0x00000054;
    param_1[-3] = in_r12;
    param_1[-4] = unaff_r10;
    param_1[-5] = unaff_r8;
    param_1[-6] = unaff_r6;
    param_1 = (undefined4 *)func_0x08ef57e6();
    in_r12 = extraout_r12;
  }
  if ((bool)in_ZR) {
    in_OV = SCARRY4(in_r12,(int)param_1) != SCARRY4(in_r12 + (int)param_1,(uint)in_CY);
  }
  if (!(bool)in_OV) {
    software_interrupt(0x4000bf);
    coprocessor_store(0xe,in_cr7,unaff_r4 + -0x10);
  }
  if ((bool)in_ZR && (int)param_1 + (uint)in_CY + in_r12 == 0) {
    *param_1 = unaff_r7;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

