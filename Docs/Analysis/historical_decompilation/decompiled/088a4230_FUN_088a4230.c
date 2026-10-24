
/* WARNING: Control flow encountered bad instruction data */

void FUN_088a4230(void)

{
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr11;
  
  if ((bool)in_NG != in_OV) {
    coprocessor_storelong(5,in_cr11,unaff_r11);
  }
  if (in_OV) {
    if (in_CY && !in_ZR) {
      func_0x07285f9c();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

