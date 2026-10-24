
/* WARNING: Control flow encountered bad instruction data */

void FUN_08633cd2(int param_1,undefined4 param_2)

{
  int unaff_r5;
  undefined4 unaff_r11;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr1;
  undefined4 in_cr5;
  undefined4 in_cr11;
  
  if (!in_ZR) {
    *(undefined4 *)(unaff_r5 + 0x509) = unaff_r11;
    coprocessor_moveto(0xf,0,3,param_2,in_cr5,in_cr11);
  }
  if (in_OV) {
    *(undefined4 *)(param_1 + -0xd05) = param_2;
  }
  if (in_ZR) {
    coprocessor_moveto2(0xb,5,param_1,param_2,in_cr1);
    coprocessor_moveto(0xd,2,1,param_1,in_cr1,in_cr1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

