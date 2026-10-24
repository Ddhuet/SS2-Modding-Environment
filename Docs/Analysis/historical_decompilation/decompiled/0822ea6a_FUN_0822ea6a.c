
/* WARNING: Control flow encountered bad instruction data */

void FUN_0822ea6a(undefined4 param_1,undefined4 param_2)

{
  byte *unaff_r8;
  uint unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr15;
  
  if (in_ZR) {
    unaff_r11 = (uint)*unaff_r8;
  }
  if (!in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0x108fb);
  if (!in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_function2(0xc,0xf,7,in_cr15,in_cr8,in_cr7);
  if (in_ZR) {
    software_interrupt(0xc1306);
  }
  else {
    *(undefined4 *)(unaff_r11 - 0xc04) = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

