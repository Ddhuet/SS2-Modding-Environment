
/* WARNING: Control flow encountered bad instruction data */

void FUN_0877f31e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG) {
    unaff_r7 = unaff_r7 + unaff_r6;
  }
  if (!in_CY) {
    *unaff_r5 = param_2;
    unaff_r5[1] = param_3;
    unaff_r5[2] = unaff_r5;
    unaff_r5[3] = unaff_r7;
    unaff_r5[4] = unaff_r10;
    unaff_r5[5] = in_r12;
    unaff_r5[6] = register0x00000054;
  }
  if (in_NG != (bool)in_OV) {
    in_ZR = false;
  }
  if ((bool)in_ZR) {
    software_interrupt(0xb890a5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

