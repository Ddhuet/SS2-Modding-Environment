
/* WARNING: Control flow encountered bad instruction data */

void FUN_08254682(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  coprocessor_storelong2(5,in_cr11,&stack0x00000000);
  if (!in_ZR && in_NG == in_OV) {
    *unaff_r6 = param_1;
    unaff_r6[1] = param_4;
    unaff_r6[2] = unaff_r4;
    unaff_r6[3] = unaff_r8;
    unaff_r6[4] = unaff_r9;
    unaff_r6[5] = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

