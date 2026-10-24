
/* WARNING: Control flow encountered bad instruction data */

void FUN_086f0a46(undefined4 param_1,int param_2,undefined1 *param_3)

{
  undefined1 unaff_r11;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr4;
  undefined4 in_cr11;
  
  if (in_CY) {
    coprocessor_function(5,0xb,4,in_cr11,in_cr11,in_cr4);
  }
  if (in_ZR) {
    *param_3 = unaff_r11;
  }
  else {
    *(undefined1 **)(param_2 + -0xf11) = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

