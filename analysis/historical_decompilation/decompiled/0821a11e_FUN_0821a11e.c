
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0821a11e(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_r9;
  int unaff_r10;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr14;
  
  if (in_NG == in_OV) {
    software_interrupt(0xb2b5b6);
  }
  if (in_CY && !in_ZR) {
    if (!in_CY || in_ZR) {
      return CONCAT44(param_2,*(undefined4 *)(unaff_r10 + 4));
    }
    coprocessor_moveto(0,4,4,unaff_r9,in_cr14,in_cr4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return CONCAT44(uRam0821a12e,param_1);
}

