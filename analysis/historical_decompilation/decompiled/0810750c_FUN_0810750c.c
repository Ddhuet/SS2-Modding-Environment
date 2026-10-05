
/* WARNING: Control flow encountered bad instruction data */

void FUN_0810750c(void)

{
  int extraout_r3;
  undefined4 *unaff_r8;
  undefined4 unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr2;
  
  if (in_NG == in_OV) {
    *unaff_r8 = unaff_r11;
  }
  func_0x07535bc0();
  if (!(bool)in_CY) {
    coprocessor_load(1,in_cr2,extraout_r3 + -0x20);
  }
  if (!(bool)in_ZR) {
    software_interrupt(0x2e3a3f);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

