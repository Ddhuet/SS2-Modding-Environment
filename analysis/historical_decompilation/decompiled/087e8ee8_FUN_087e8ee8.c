
/* WARNING: Control flow encountered bad instruction data */

void FUN_087e8ee8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r3;
  undefined4 unaff_r5;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr3;
  
  if (in_NG != in_OV) {
    param_1 = func_0x076d63a8();
    param_4 = extraout_r3;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *unaff_r8 = param_1;
    unaff_r8[1] = param_4;
    unaff_r8[2] = unaff_r5;
    unaff_r8[3] = unaff_r9;
    unaff_r8[4] = register0x00000054;
  }
  coprocessor_store(3,in_cr3,param_4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

