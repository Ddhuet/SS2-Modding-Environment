
/* WARNING: Control flow encountered bad instruction data */

void FUN_0834098e(undefined4 param_1,undefined4 *param_2)

{
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr15;
  
  if (!in_ZR && in_NG == (bool)in_OV) {
    software_interrupt(0xc2b5b6);
  }
  if (in_ZR) {
    param_1 = 0;
  }
  if (in_NG) {
    coprocessor_moveto(0xb,1,7,param_2,in_cr4,in_cr15);
  }
  if (in_CY) {
    coprocessor_function(0,6,2,in_cr6,in_cr1,in_cr5);
  }
  if (in_NG == (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    *(short *)(in_r12 + 0x6e) = (short)in_r12;
    coprocessor_function(5,0xc,5,in_cr10,in_cr13,in_cr11);
  }
  if (!in_CY) {
    param_2[-1] = register0x00000054;
    param_2[-2] = in_r12;
    param_2[-3] = unaff_r11;
    param_2[-4] = unaff_r10;
    param_2[-5] = unaff_r7;
    param_2[-6] = unaff_r6;
    param_2 = param_2 + -7;
    *param_2 = unaff_r5;
  }
  if (in_NG) {
    uRam0834084d = unaff_r5;
  }
  if (!in_ZR) {
    *(undefined4 *)(unaff_r9 - ((uint)param_2 >> 2)) = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

