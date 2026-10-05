
/* WARNING: Control flow encountered bad instruction data */

void FUN_082ea216(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_r5;
  undefined4 *unaff_r9;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr15;
  
  if (!in_CY) {
    param_2 = *unaff_r9;
  }
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0xb,in_cr15,unaff_r5);
  }
  func_0x082a7e48(param_1,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

