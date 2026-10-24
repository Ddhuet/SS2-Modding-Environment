
/* WARNING: Control flow encountered bad instruction data */

void FUN_08171d66(void)

{
  undefined1 *unaff_r4;
  undefined1 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr10;
  undefined4 in_cr15;
  
  if (in_ZR || in_NG != in_OV) {
    *unaff_r4 = unaff_r11;
  }
  coprocessor_function2(0xb,0,7,in_cr15,in_cr3,in_cr10);
  if (in_NG != in_OV) {
    software_interrupt(0xaa9c99);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

