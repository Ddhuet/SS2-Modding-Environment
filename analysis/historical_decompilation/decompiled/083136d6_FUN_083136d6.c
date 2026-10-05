
/* WARNING: Control flow encountered bad instruction data */

void FUN_083136d6(undefined4 param_1)

{
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int unaff_r10;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  coprocessor_load2(5,in_cr11,unaff_r10);
  if (in_CY) {
    uRam083136e6 = param_1;
    uRam083136ea = unaff_r5;
    uRam083136ee = unaff_r6;
    uRam083136f2 = unaff_r7;
    iRam083136f6 = unaff_r10 + -0x98;
    uRam083136fa = unaff_r11;
    puRam083136fe = (undefined1 *)register0x00000054;
  }
  if (!in_ZR && in_NG == in_OV) {
    func_0x09547aca();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

