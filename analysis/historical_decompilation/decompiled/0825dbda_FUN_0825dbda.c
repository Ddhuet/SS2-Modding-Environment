
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825dbda(undefined4 param_1)

{
  undefined4 unaff_r7;
  uint unaff_r8;
  int unaff_r10;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr9;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 uStack_18;
  
  if (in_NG != in_OV) {
    param_1 = func_0x0704b2ae();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    if ((bool)in_ZR || in_NG != in_OV) {
      coprocessor_loadlong(3,in_cr13,unaff_r7);
    }
    coprocessor_function(4,0xe,7,in_cr14,in_cr9,in_cr0);
    if ((bool)in_CY) {
      in_NG = (int)(unaff_r8 & unaff_r10 << 2) < 0;
    }
    if ((bool)in_NG) {
      param_1 = uStack_18;
    }
    if ((bool)in_OV) {
      func_0x09b74d46(param_1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

