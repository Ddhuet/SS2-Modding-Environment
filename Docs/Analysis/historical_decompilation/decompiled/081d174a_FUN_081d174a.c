
/* WARNING: Control flow encountered bad instruction data */

void FUN_081d174a(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 *unaff_r4;
  int unaff_r6;
  int unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined1 *unaff_r11;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr0;
  
  if (!in_ZR && in_NG == in_OV) {
    unaff_r11 = &stack0x2d400000 + in_CY;
    in_ZR = unaff_r11 == (undefined1 *)0x0;
  }
  if (!in_ZR) {
    in_ZR = (param_3 & 0x40000004) == 0;
  }
  if (in_ZR) {
    *(undefined1 **)unaff_r11 = unaff_r11;
    *(undefined4 *)(unaff_r11 + -4) = unaff_r10;
    *(undefined4 *)(unaff_r11 + -8) = unaff_r9;
    *(undefined4 **)(unaff_r11 + -0xc) = unaff_r4;
    *(undefined4 *)(unaff_r11 + -0x10) = param_1;
    *unaff_r4 = param_1;
    *(undefined4 *)(unaff_r8 + unaff_r6 * -0x4000) = param_1;
  }
  coprocessor_loadlong2(3,in_cr0,0x80ceab2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

