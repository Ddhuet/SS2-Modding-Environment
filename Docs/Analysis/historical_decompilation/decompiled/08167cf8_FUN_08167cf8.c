
/* WARNING: Control flow encountered bad instruction data */

void FUN_08167cf8(undefined4 param_1,undefined4 param_2,char param_3,char *param_4)

{
  undefined1 *unaff_r4;
  undefined1 unaff_r5;
  char cVar1;
  int unaff_r7;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_CY) {
    unaff_r7 = unaff_r7 + 0x298;
    coprocessor_storelong(5,in_cr11,unaff_r7);
  }
  cVar1 = (char)unaff_r7;
  if (in_ZR || in_NG != (bool)in_OV) {
    if (in_CY) {
      cVar1 = cVar1 + -0x77;
    }
    else {
      *unaff_r4 = (char)(unaff_r4 + -0x434);
      param_3 = (char)unaff_r4 + -0x78;
      unaff_r4[-0x434] = unaff_r5;
    }
    if (in_NG) {
      param_3 = cVar1;
    }
    if (in_CY) {
      *param_4 = param_3;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

