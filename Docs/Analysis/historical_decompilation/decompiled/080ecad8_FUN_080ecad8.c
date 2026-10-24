
/* WARNING: Control flow encountered bad instruction data */

void FUN_080ecad8(void)

{
  int unaff_r7;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr6;
  undefined4 in_cr11;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_NG == in_OV) {
    coprocessor_moveto(5,5,5,unaff_r11,in_cr15,in_cr14);
  }
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0xc7b4ae);
  }
  else {
    coprocessor_function(4,0xe,7,in_cr15,in_cr6,in_cr14);
  }
  if (in_NG == in_OV) {
    software_interrupt(0xb0b3bc);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_storelong(5,in_cr11,unaff_r7 + 0x2c4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

