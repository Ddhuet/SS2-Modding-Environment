
/* WARNING: Control flow encountered bad instruction data */

void FUN_082793b6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr9;
  undefined4 in_cr15;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    software_interrupt(0xc1b5ab);
  }
  if ((bool)in_ZR) {
    *unaff_r9 = unaff_r11;
    unaff_r9[-1] = unaff_r8 + 0xcd;
    unaff_r9[-2] = param_3;
    unaff_r9[-3] = param_2;
    unaff_r9[-4] = param_1;
    func_0x0847afe6();
  }
  if (!(bool)in_ZR) {
    coprocessor_function(3,1,0,in_cr1,in_cr9,in_cr15);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

