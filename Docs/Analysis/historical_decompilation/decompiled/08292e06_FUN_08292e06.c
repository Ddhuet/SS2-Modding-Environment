
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08292e06(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *unaff_r6;
  undefined4 unaff_r11;
  undefined4 *unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr12;
  undefined4 in_cr15;
  
  if (in_NG != in_OV) {
    *unaff_lr = unaff_r11;
  }
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0,in_cr12,param_3);
    if (in_ZR) {
      coprocessor_load2(0xb,in_cr15,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *unaff_r6;
}

