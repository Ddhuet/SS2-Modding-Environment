
/* WARNING: Control flow encountered bad instruction data */

void FUN_08116e64(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r5;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_function(5,0xb,6,in_cr11,in_cr13,in_cr2);
  }
  if (in_CY) {
    software_interrupt(0x1f04e7);
  }
  if (in_ZR) {
    *(undefined4 *)(unaff_r9 + -4) = in_r12;
    *(undefined4 *)(unaff_r9 + -8) = unaff_r10;
    *(undefined4 *)(unaff_r9 + -0xc) = unaff_r5;
    *(undefined4 *)(unaff_r9 + -0x10) = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

