
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825a73c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  if (in_CY) {
    *param_3 = unaff_r10;
    param_3[-1] = unaff_r8;
    param_3[-2] = unaff_r5;
    param_3[-3] = unaff_r4;
  }
  if (in_NG != in_OV) {
    coprocessor_function(1,10,0,in_cr13,in_cr11,in_cr12);
  }
  if (in_CY) {
    *(undefined4 **)(unaff_lr + -0xe03) = param_3;
  }
  if (in_NG == in_OV) {
    software_interrupt(0xf51227);
  }
  if (!in_ZR) {
    in_CY = false;
  }
  if (!in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

