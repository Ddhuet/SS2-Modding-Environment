
/* WARNING: Control flow encountered bad instruction data */

void FUN_0867072a(void)

{
  int unaff_r6;
  int unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr0;
  
  if (in_NG == in_OV) {
    UnsignedSaturate(unaff_r11 >> 10,0x1f);
    UnsignedDoesSaturate(unaff_r11 >> 10,0x1f);
  }
  coprocessor_store2(3,in_cr0,unaff_r6 + 0x3f8);
  func_0x0902f9d4();
  if (!(bool)in_ZR && in_NG == in_OV) {
    software_interrupt(0xf28025);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

