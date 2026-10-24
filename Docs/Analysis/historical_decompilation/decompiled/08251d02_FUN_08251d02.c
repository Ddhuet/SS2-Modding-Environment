
/* WARNING: Control flow encountered bad instruction data */

void FUN_08251d02(void)

{
  int unaff_r10;
  undefined4 unaff_r11;
  undefined1 in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  coprocessor_function2(5,0xf,5,in_cr11,in_cr5,in_cr12);
  if (!(bool)in_ZR) {
    func_0x08c15cce();
  }
  if (!(bool)in_NG) {
    software_interrupt(0x787f61);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *(undefined4 *)(unaff_r10 + 0xcf8) = unaff_r11;
  }
  software_interrupt(0xe0308);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

